/*
 * XREFs of sub_1800930B4 @ 0x1800930B4
 * Callers:
 *     cos @ 0x18008DE90 (cos.c)
 *     sin @ 0x18008E2B0 (sin.c)
 *     tan @ 0x180090650 (tan.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall sub_1800930B4(double a1, double *a2, double *a3, _DWORD *a4)
{
  int v6; // ebx
  __int64 v7; // r10
  int v9; // r9d
  int v10; // ebx
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
  unsigned __int64 v28; // r8
  int v29; // edx
  unsigned __int64 v30; // r11
  __int64 v31; // r9
  unsigned int v32; // r9d
  __int64 v33; // rcx
  int v34; // r10d
  unsigned __int64 v35; // r11
  _QWORD *v36; // r8
  __int64 v37; // r8
  _QWORD *v38; // rax
  unsigned __int64 v39; // r8
  int v40; // ebx
  __int64 v41; // r11
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  double v44; // xmm8_8
  double v45; // xmm7_8
  double v46; // xmm7_8
  unsigned __int64 result; // rax
  double v48; // xmm5_8
  __int64 v49; // [rsp+18h] [rbp-F0h]
  _QWORD v50[499]; // [rsp+20h] [rbp-E8h] BYREF

  v50[18] = 0LL;
  v6 = ((*(_QWORD *)&a1 >> 52) & 0x7FF) - 1023;
  v7 = *(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v9 = v6 / 10 + 18;
  v10 = v6 % 10;
  v11 = v7 * qword_180156AF0[v9];
  v50[17] = v11 & 0x3FF;
  v12 = (v11 >> 10) + v7 * qword_180156AF0[v9 - 1];
  v50[16] = v12 & 0x3FF;
  v13 = (v12 >> 10) + v7 * qword_180156AF0[v9 - 2];
  v50[15] = v13 & 0x3FF;
  v14 = (v13 >> 10) + v7 * qword_180156AF0[v9 - 3];
  v50[14] = v14 & 0x3FF;
  v15 = (v14 >> 10) + v7 * qword_180156AF0[v9 - 4];
  v50[13] = v15 & 0x3FF;
  v16 = (v15 >> 10) + v7 * qword_180156AF0[v9 - 5];
  v50[12] = v16 & 0x3FF;
  v17 = (v16 >> 10) + v7 * qword_180156AF0[v9 - 6];
  v50[11] = v17 & 0x3FF;
  v18 = (v17 >> 10) + v7 * qword_180156AF0[v9 - 7];
  v50[10] = v18 & 0x3FF;
  v19 = (v18 >> 10) + v7 * qword_180156AF0[v9 - 8];
  v50[9] = v19 & 0x3FF;
  v20 = (v19 >> 10) + v7 * qword_180156AF0[v9 - 9];
  v50[8] = v20 & 0x3FF;
  v21 = (v20 >> 10) + v7 * qword_180156AF0[v9 - 10];
  v50[7] = v21 & 0x3FF;
  v22 = (v21 >> 10) + v7 * qword_180156AF0[v9 - 11];
  v50[6] = v22 & 0x3FF;
  v23 = (v22 >> 10) + v7 * qword_180156AF0[v9 - 12];
  v50[5] = v23 & 0x3FF;
  v24 = (v23 >> 10) + v7 * qword_180156AF0[v9 - 13];
  v50[4] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v7 * qword_180156AF0[v9 - 14];
  v50[3] = v25 & 0x3FF;
  v26 = (v25 >> 10) + v7 * qword_180156AF0[v9 - 15];
  v50[2] = v26 & 0x3FF;
  v27 = (v26 >> 10) + v7 * qword_180156AF0[v9 - 16];
  v50[1] = v27 & 0x3FF;
  v28 = (v27 >> 10) + v7 * qword_180156AF0[v9 - 17];
  v29 = 1;
  v30 = v28 & 0x3FF;
  v31 = (v28 >> 10) + v7 * qword_180156AF0[v9 - 18];
  v50[0] = v30;
  v49 = v31 & 0x3FF;
  LODWORD(v7) = (v30 | (v49 << 10)) >> (10 - (unsigned __int8)v10 - 1);
  v32 = ((unsigned int)v7 >> 1) & 3;
  v33 = (1LL << (10 - (unsigned __int8)v10)) - 1;
  v34 = v7 & 1;
  if ( v34 )
  {
    v35 = v33 & ~v30;
    *a4 = ((_BYTE)v32 + 1) & 3;
    if ( v35 < 0x20000000000000LL )
    {
      v36 = v50;
      do
      {
        ++v36;
        ++v29;
        v35 = (v35 << 10) | ~*v36 & 0x3FFLL;
      }
      while ( v35 < 0x20000000000000LL );
    }
    v37 = ~v50[v29];
  }
  else
  {
    *a4 = v32;
    v38 = v50;
    v35 = v33 & v30;
    do
    {
      v35 = *++v38 | (v35 << 10);
      ++v29;
    }
    while ( v35 < 0x20000000000000LL );
    v37 = v50[v29];
  }
  v39 = v37 << 54;
  v40 = v10 - 10 * v29 + 52;
  while ( v35 >= 0x20000000000000LL )
  {
    ++v40;
    v39 = (v39 >> 1) | (v35 << 63);
    v35 >>= 1;
  }
  v41 = v35 & 0xFFFFFFFFFFFFFLL;
  v42 = (__int64)v40 << 52;
  v43 = v41 | (v42 + 0x3FF0000000000000LL) | 0x8000000000000000uLL;
  if ( !v34 )
    v43 = v41 | (v42 + 0x3FF0000000000000LL);
  v44 = *(double *)&v43;
  v45 = COERCE_DOUBLE((v42 + 0x3CA0000000000000LL) | (v39 >> 12)) - COERCE_DOUBLE(v42 + 0x3CA0000000000000LL);
  if ( v34 )
    v46 = v45 * -2.0;
  else
    v46 = v45 + v45;
  result = v43 & 0xFFFFFFFFF8000000uLL;
  v48 = *(double *)&result * 1.570796310901642
      - v44 * 1.570796326794897
      + (v44 - *(double *)&result) * 1.570796310901642
      + *(double *)&result * 0.00000001589325471229586
      + (v44 - *(double *)&result) * 0.00000001589325471229586
      + v46 * 1.570796326794897
      + v44 * 6.123233995736765e-17;
  *a2 = v48 + v44 * 1.570796326794897;
  *a3 = v44 * 1.570796326794897 - (v48 + v44 * 1.570796326794897) + v48;
  return result;
}
