/*
 * XREFs of fsg_PrivateFontSpaceSize @ 0x1C02C8268
 * Callers:
 *     fs_NewSfnt @ 0x1C02BC070 (fs_NewSfnt.c)
 * Callees:
 *     fsg_GetOutlineSizeAndOffsets @ 0x1C02C7AA0 (fsg_GetOutlineSizeAndOffsets.c)
 */

__int64 __fastcall fsg_PrivateFontSpaceSize(_DWORD *a1, unsigned __int16 *a2, _DWORD *a3, _DWORD *a4)
{
  int v6; // r10d
  int v9; // r11d
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // edx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  int v33; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+58h] [rbp+10h] BYREF

  *a3 = 0;
  v6 = 4 * a2[9];
  a3[1] = v6;
  v9 = v6 + 8 * a2[10];
  a3[2] = v9;
  v10 = v9 + 8 * a2[11];
  v11 = 256;
  a3[3] = v10;
  v12 = a1[15] >> 1;
  if ( v12 > 0x100 )
    v11 = v12;
  v13 = -1;
  v14 = 4LL * v11;
  if ( v14 > 0xFFFFFFFF )
    return 5120LL;
  if ( v10 + (int)v14 >= (unsigned int)v14 )
    v13 = v10 + v14;
  a3[4] = v13;
  if ( v10 + (int)v14 < (unsigned int)v14 )
    return 5120LL;
  v15 = v13;
  v16 = (v13 + 7) & 0xFFFFFFF8;
  a3[4] = v16;
  if ( v16 < v15 )
    return 5120LL;
  v17 = v16 + 480;
  a3[21] = v16 + 480;
  if ( v16 + 480 < v16 )
    return 5120LL;
  v18 = v17 + 4 * a2[9];
  a3[22] = v18;
  if ( v18 < v17 )
    return 5120LL;
  v19 = v18 + 8 * a2[10];
  a3[23] = v19;
  if ( v19 < a3[22] )
    return 5120LL;
  v20 = v19 + 8 * a2[11];
  a3[24] = v20;
  if ( v20 < a3[23] )
    return 5120LL;
  v21 = v14 + v20;
  a3[25] = v21;
  if ( v21 < a3[24] )
    return 5120LL;
  v22 = (v21 + 7) & 0xFFFFFFF8;
  a3[25] = v22;
  if ( v22 < v21 )
    return 5120LL;
  v23 = v22 + 480;
  a3[5] = v22 + 480;
  if ( v22 + 480 < v22 )
    return 5120LL;
  v24 = v23 + a1[25];
  a3[6] = v24;
  if ( v24 < v23 )
    return 5120LL;
  v25 = v24 + a1[17];
  a3[7] = v25;
  if ( v25 < v24 )
    return 5120LL;
  v26 = (v25 + 7) & 0xFFFFFFF8;
  a3[7] = v26;
  if ( v26 < v25 )
    return 5120LL;
  v27 = (v26 + 119) & 0xFFFFFFF8;
  a3[26] = v27;
  if ( v27 < a3[7] )
    return 5120LL;
  v28 = (v27 + 115) & 0xFFFFFFFC;
  a3[8] = v28;
  if ( v28 < a3[26] )
    return 5120LL;
  fsg_GetOutlineSizeAndOffsets(a2[8], 1u, a3 + 9, &v33, &v34);
  v29 = v33;
  v30 = v33 + a3[8];
  a3[27] = v30;
  if ( v30 < a3[8] )
    return 5120LL;
  v31 = (v30 + 3) & 0xFFFFFFFC;
  a3[27] = v31;
  if ( v31 < v30 )
    return 5120LL;
  *a4 = v29 + v31 - *a3;
  return 0LL;
}
