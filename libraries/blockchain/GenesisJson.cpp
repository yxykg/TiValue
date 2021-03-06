// This file is generated by tiv_json_to_cpp from ${json_file_name}

#ifndef TIV_TEST_NETWORK

#include <blockchain/GenesisJson.hpp>
#include <blockchain/GenesisState.hpp>

#include <string>
#include <fc/crypto/sha256.hpp>
#include <fc/io/raw.hpp>

namespace TiValue {
    namespace blockchain {
		static const unsigned char raw_genesis_config0[] =
		{
			0x24, 0x6a, 0x78, 0x59, 0x00, 0x09, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x30, 0x03,
			0xeb, 0x58, 0xc6, 0x17, 0x2d, 0x63, 0x08, 0xe0, 0xf1, 0x1e, 0xa3, 0xd0, 0x96,
			0xec, 0x90, 0xd8, 0xa3, 0x3a, 0x80, 0x28, 0xac, 0x84, 0xe6, 0x22, 0x8f, 0x03,
			0xd2, 0xc3, 0xd8, 0x69, 0xe1, 0x75, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x31, 0x03,
			0x59, 0x44, 0xc4, 0x36, 0xd1, 0x29, 0x1c, 0x4f, 0x69, 0x80, 0x9b, 0x3f, 0x75,
			0x57, 0xe6, 0xcc, 0x86, 0x1d, 0xa0, 0x3f, 0x0a, 0xc5, 0x13, 0x0f, 0x53, 0x94,
			0x09, 0xdd, 0x7b, 0x00, 0x97, 0xde, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x32, 0x03,
			0xa7, 0xdb, 0xde, 0xba, 0x9e, 0xde, 0x48, 0x34, 0x52, 0x03, 0xcf, 0x5d, 0xf6,
			0xac, 0xd1, 0xf8, 0x64, 0xe0, 0x6a, 0x3c, 0xa1, 0x6d, 0xea, 0x20, 0x87, 0x69,
			0x81, 0x12, 0x58, 0xea, 0xb5, 0xf1, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x33, 0x03,
			0x58, 0x84, 0x7b, 0xf1, 0xe6, 0x79, 0x02, 0xdf, 0x0e, 0x44, 0xbd, 0xd2, 0x77,
			0x8d, 0xa4, 0x37, 0x14, 0x89, 0x57, 0xcb, 0x92, 0xd3, 0x7b, 0xbe, 0x28, 0xd7,
			0x16, 0x1a, 0x60, 0xcc, 0xa0, 0xdf, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x34, 0x03,
			0x2e, 0x00, 0x41, 0xd4, 0x16, 0x68, 0x09, 0xab, 0xa2, 0x3b, 0x70, 0x21, 0x45,
			0x3d, 0x20, 0xf9, 0x3a, 0x5d, 0xf7, 0xbb, 0xe1, 0x65, 0x87, 0x97, 0x42, 0x0f,
			0x76, 0x95, 0x7f, 0x5e, 0xa1, 0x01, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x35, 0x02,
			0x14, 0xfe, 0x79, 0x77, 0xea, 0x01, 0x43, 0x99, 0x7e, 0x6b, 0xbd, 0xc7, 0xc2,
			0x51, 0xac, 0xf3, 0x1d, 0x58, 0x7e, 0x35, 0x38, 0xb9, 0x0f, 0xf8, 0xab, 0xe2,
			0x01, 0x30, 0x5e, 0x1e, 0x4c, 0x2a, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x36, 0x03,
			0x40, 0xe6, 0x54, 0xf2, 0xef, 0x82, 0xad, 0x23, 0xc2, 0xf0, 0x3c, 0xdb, 0x22,
			0xa3, 0xd4, 0x17, 0x50, 0x16, 0x0d, 0x54, 0xd3, 0xd1, 0x95, 0x20, 0x34, 0x51,
			0xee, 0x1a, 0xbe, 0x9b, 0xb0, 0xfd, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x37, 0x03,
			0x5d, 0x3a, 0x21, 0x04, 0x95, 0xec, 0xa6, 0x2a, 0x22, 0x42, 0xd2, 0x8d, 0x57,
			0x73, 0xab, 0xfb, 0x50, 0xe1, 0xfb, 0x27, 0x0c, 0xfa, 0xf0, 0xfa, 0x86, 0xf4,
			0x61, 0xb1, 0x4e, 0xa2, 0x95, 0x1c, 0x05, 0x69, 0x6e, 0x69, 0x74, 0x38, 0x03,
			0x0d, 0xeb, 0x09, 0x3c, 0xf2, 0x59, 0x05, 0x58, 0x2d, 0x72, 0xa4, 0x2a, 0xd3,
			0x10, 0x32, 0x85, 0xf0, 0x8a, 0x70, 0x3f, 0x51, 0xbd, 0xb1, 0x83, 0x44, 0xd7,
			0xfb, 0xc4, 0xcb, 0xa4, 0x61, 0xba, 0x01, 0x23, 0x54, 0x56, 0x42, 0x50, 0x38,
			0x48, 0x53, 0x78, 0x38, 0x55, 0x6d, 0x5a, 0x39, 0x34, 0x73, 0x6a, 0x6b, 0x52,
			0x41, 0x67, 0x43, 0x4b, 0x43, 0x43, 0x45, 0x69, 0x67, 0x43, 0x76, 0x57, 0x61,
			0x34, 0x57, 0x35, 0x72, 0x00, 0x50, 0x8a, 0x71, 0x19, 0x13, 0x00, 0x00, 0x00,
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		};

		GenesisState get_builtin_genesis_block_config()
		{
			unsigned total_size = sizeof(raw_genesis_config0);
			std::unique_ptr<char[]> buffer(new char[total_size]);
			char *ptr = buffer.get();
			memcpy(ptr, (const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
			ptr += sizeof(raw_genesis_config0);
			return fc::raw::unpack<GenesisState>(buffer.get(), total_size);
		}

		fc::sha256 get_builtin_genesis_block_state_hash()
		{
			fc::sha256::encoder encoder;
			encoder.write((const char*)raw_genesis_config0, sizeof(raw_genesis_config0));
			return encoder.result();
		}


    }
} // end namespace TiValue::blockchain

#endif
