/*
 * XREFs of __remainder_piby2 @ 0x180098BB4
 * Callers:
 *     cos @ 0x180093930 (cos.c)
 *     sin @ 0x180093D50 (sin.c)
 *     tan @ 0x180096180 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall _remainder_piby2(double a1, double *a2, double *a3, _DWORD *a4)
{
  int v6; // r11d
  __int64 v7; // r10
  int v9; // r9d
  int v10; // r11d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rbx
  char v33; // cl
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // r8
  _QWORD *v37; // r9
  __int64 v38; // r9
  _QWORD *v39; // rax
  unsigned __int64 v40; // r9
  int v41; // r11d
  unsigned __int64 v42; // rax
  double v43; // xmm8_8
  double v44; // xmm7_8
  double v45; // xmm7_8
  unsigned __int64 result; // rax
  double v47; // xmm5_8
  __int64 v48; // [rsp+18h] [rbp-F0h]
  _QWORD v49[499]; // [rsp+20h] [rbp-E8h] BYREF

  v49[18] = 0LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v7 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v9 = v6 / 10 + 18;
  v10 = v6 % 10;
  v11 = v7 * qword_180159AE0[v9];
  v49[17] = v11 & 0x3FF;
  v12 = (v11 >> 10) + v7 * qword_180159AE0[v9 - 1];
  v49[16] = v12 & 0x3FF;
  v13 = (v12 >> 10) + v7 * qword_180159AE0[v9 - 2];
  v49[15] = v13 & 0x3FF;
  v14 = (v13 >> 10) + v7 * qword_180159AE0[v9 - 3];
  v49[14] = v14 & 0x3FF;
  v15 = (v14 >> 10) + v7 * qword_180159AE0[v9 - 4];
  v49[13] = v15 & 0x3FF;
  v16 = (v15 >> 10) + v7 * qword_180159AE0[v9 - 5];
  v49[12] = v16 & 0x3FF;
  v17 = (v16 >> 10) + v7 * qword_180159AE0[v9 - 6];
  v49[11] = v17 & 0x3FF;
  v18 = (v17 >> 10) + v7 * qword_180159AE0[v9 - 7];
  v49[10] = v18 & 0x3FF;
  v19 = (v18 >> 10) + v7 * qword_180159AE0[v9 - 8];
  v49[9] = v19 & 0x3FF;
  v20 = (v19 >> 10) + v7 * qword_180159AE0[v9 - 9];
  v49[8] = v20 & 0x3FF;
  v21 = (v20 >> 10) + v7 * qword_180159AE0[v9 - 10];
  v49[7] = v21 & 0x3FF;
  v22 = (v21 >> 10) + v7 * qword_180159AE0[v9 - 11];
  v49[6] = v22 & 0x3FF;
  v23 = (v22 >> 10) + v7 * qword_180159AE0[v9 - 12];
  v49[5] = v23 & 0x3FF;
  v24 = (v23 >> 10) + v7 * qword_180159AE0[v9 - 13];
  v49[4] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v7 * qword_180159AE0[v9 - 14];
  v49[3] = v25 & 0x3FF;
  v26 = (v25 >> 10) + v7 * qword_180159AE0[v9 - 15];
  v49[2] = v26 & 0x3FF;
  v27 = (v26 >> 10) + v7 * qword_180159AE0[v9 - 16];
  v28 = v27 >> 10;
  v49[1] = v27 & 0x3FF;
  v29 = v7 * qword_180159AE0[v9 - 18];
  v30 = v28 + v7 * qword_180159AE0[v9 - 17];
  v31 = 1;
  v32 = v30 & 0x3FF;
  v49[0] = v32;
  v48 = ((v30 >> 10) + v29) & 0x3FF;
  v33 = 10 - v10;
  v34 = ((v32 | (unsigned __int64)(v48 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 7;
  v35 = ((v32 | (unsigned __int64)(v48 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 1;
  if ( (((v32 | (unsigned __int64)(v48 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 1) != 0 )
  {
    v36 = ~v32 & ((1LL << v33) - 1);
    *a4 = ((unsigned __int8)((unsigned int)v34 >> 1) + 1) & 3;
    if ( v36 < 0x20000000000000LL )
    {
      v37 = v49;
      do
      {
        ++v37;
        ++v31;
        v36 = (v36 << 10) | ~*v37 & 0x3FFLL;
      }
      while ( v36 < 0x20000000000000LL );
    }
    v38 = ~v49[v31];
  }
  else
  {
    v36 = v32 & ((1LL << v33) - 1);
    *a4 = (unsigned int)v34 >> 1;
    if ( v36 < 0x20000000000000LL )
    {
      v39 = v49;
      do
      {
        v36 = *++v39 | (v36 << 10);
        ++v31;
      }
      while ( v36 < 0x20000000000000LL );
    }
    v38 = v49[v31];
  }
  v40 = v38 << 54;
  v41 = v10 - 10 * v31 + 52;
  while ( v36 >= 0x20000000000000LL )
  {
    ++v41;
    v40 = (v40 >> 1) | (v36 << 63);
    v36 >>= 1;
  }
  v42 = v36 & 0xFFFFFFFFFFFFFLL | ((v41 + 1023LL) << 52) | 0x8000000000000000uLL;
  if ( !(_DWORD)v35 )
    v42 = v36 & 0xFFFFFFFFFFFFFLL | ((v41 + 1023LL) << 52);
  v43 = *(double *)&v42;
  v44 = COERCE_DOUBLE(((v41 + 970LL) << 52) | (v40 >> 12)) - COERCE_DOUBLE((v41 + 970LL) << 52);
  if ( (_DWORD)v35 )
    v45 = v44 * -2.0;
  else
    v45 = v44 + v44;
  result = v42 & 0xFFFFFFFFF8000000uLL;
  v47 = COERCE_DOUBLE(*(_QWORD *)&v43 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v43 * 1.570796326794897
      + (v43 - COERCE_DOUBLE(*(_QWORD *)&v43 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v43 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v43 - COERCE_DOUBLE(*(_QWORD *)&v43 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v45 * 1.570796326794897
      + v43 * 6.123233995736765e-17;
  *a2 = v47 + v43 * 1.570796326794897;
  *a3 = v43 * 1.570796326794897 - (v47 + v43 * 1.570796326794897) + v47;
  return result;
}
