/*
 * XREFs of sub_18009DE38 @ 0x18009DE38
 * Callers:
 *     cos @ 0x180098A30 (cos.c)
 *     sin @ 0x180098E50 (sin.c)
 *     tan @ 0x18009B370 (tan.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

unsigned __int64 __fastcall sub_18009DE38(double a1, double *a2, double *a3, int *a4)
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
  v11 = v7 * qword_180155A90[v9];
  v50[17] = v11 & 0x3FF;
  v12 = (v11 >> 10) + v7 * qword_180155A90[v9 - 1];
  v50[16] = v12 & 0x3FF;
  v13 = (v12 >> 10) + v7 * qword_180155A90[v9 - 2];
  v50[15] = v13 & 0x3FF;
  v14 = (v13 >> 10) + v7 * qword_180155A90[v9 - 3];
  v50[14] = v14 & 0x3FF;
  v15 = (v14 >> 10) + v7 * qword_180155A90[v9 - 4];
  v50[13] = v15 & 0x3FF;
  v16 = (v15 >> 10) + v7 * qword_180155A90[v9 - 5];
  v50[12] = v16 & 0x3FF;
  v17 = (v16 >> 10) + v7 * qword_180155A90[v9 - 6];
  v50[11] = v17 & 0x3FF;
  v18 = (v17 >> 10) + v7 * qword_180155A90[v9 - 7];
  v50[10] = v18 & 0x3FF;
  v19 = (v18 >> 10) + v7 * qword_180155A90[v9 - 8];
  v50[9] = v19 & 0x3FF;
  v20 = (v19 >> 10) + v7 * qword_180155A90[v9 - 9];
  v50[8] = v20 & 0x3FF;
  v21 = (v20 >> 10) + v7 * qword_180155A90[v9 - 10];
  v50[7] = v21 & 0x3FF;
  v22 = (v21 >> 10) + v7 * qword_180155A90[v9 - 11];
  v50[6] = v22 & 0x3FF;
  v23 = (v22 >> 10) + v7 * qword_180155A90[v9 - 12];
  v50[5] = v23 & 0x3FF;
  v24 = (v23 >> 10) + v7 * qword_180155A90[v9 - 13];
  v50[4] = v24 & 0x3FF;
  v25 = (v24 >> 10) + v7 * qword_180155A90[v9 - 14];
  v50[3] = v25 & 0x3FF;
  v26 = (v25 >> 10) + v7 * qword_180155A90[v9 - 15];
  v50[2] = v26 & 0x3FF;
  v27 = (v26 >> 10) + v7 * qword_180155A90[v9 - 16];
  v28 = v27 >> 10;
  v50[1] = v27 & 0x3FF;
  v29 = v7 * qword_180155A90[v9 - 18];
  v30 = v28 + v7 * qword_180155A90[v9 - 17];
  v31 = 1;
  v32 = v30 & 0x3FF;
  v50[0] = v32;
  v49 = ((v30 >> 10) + v29) & 0x3FF;
  v33 = 10 - v10;
  v34 = ((v32 | (unsigned __int64)(v49 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 7;
  v35 = ((v32 | (unsigned __int64)(v49 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 1;
  if ( (((v32 | (unsigned __int64)(v49 << 10)) >> (10 - (unsigned __int8)v10 - 1)) & 1) != 0 )
  {
    v36 = ~v32 & ((1LL << v33) - 1);
    *a4 = ((unsigned __int8)((unsigned int)v34 >> 1) + 1) & 3;
    if ( v36 < 0x20000000000000LL )
    {
      v37 = v50;
      do
      {
        ++v37;
        ++v31;
        v36 = (v36 << 10) | ~*v37 & 0x3FFLL;
      }
      while ( v36 < 0x20000000000000LL );
    }
    v38 = ~v50[v31];
  }
  else
  {
    v36 = v32 & ((1LL << v33) - 1);
    *a4 = (int)v34 >> 1;
    if ( v36 < 0x20000000000000LL )
    {
      v39 = v50;
      do
      {
        v36 = *++v39 | (v36 << 10);
        ++v31;
      }
      while ( v36 < 0x20000000000000LL );
    }
    v38 = v50[v31];
  }
  v40 = v38 << 54;
  v41 = v10 - 10 * v31 + 52;
  while ( v36 >= 0x20000000000000LL )
  {
    ++v41;
    v40 = (v40 >> 1) | (v36 << 63);
    v36 >>= 1;
  }
  v42 = (__int64)v41 << 52;
  v43 = v36 & 0xFFFFFFFFFFFFFLL | (v42 + 0x3FF0000000000000LL) | 0x8000000000000000uLL;
  if ( !(_DWORD)v35 )
    v43 = v36 & 0xFFFFFFFFFFFFFLL | (v42 + 0x3FF0000000000000LL);
  v44 = *(double *)&v43;
  v45 = COERCE_DOUBLE((v42 + 0x3CA0000000000000LL) | (v40 >> 12)) - COERCE_DOUBLE(v42 + 0x3CA0000000000000LL);
  if ( (_DWORD)v35 )
    v46 = v45 * -2.0;
  else
    v46 = v45 + v45;
  result = v43 & 0xFFFFFFFFF8000000uLL;
  v48 = COERCE_DOUBLE(*(_QWORD *)&v44 & 0xFFFFFFFFF8000000uLL) * 1.570796310901642
      - v44 * 1.570796326794897
      + (v44 - COERCE_DOUBLE(*(_QWORD *)&v44 & 0xFFFFFFFFF8000000uLL)) * 1.570796310901642
      + COERCE_DOUBLE(*(_QWORD *)&v44 & 0xFFFFFFFFF8000000uLL) * 0.00000001589325471229586
      + (v44 - COERCE_DOUBLE(*(_QWORD *)&v44 & 0xFFFFFFFFF8000000uLL)) * 0.00000001589325471229586
      + v46 * 1.570796326794897
      + v44 * 6.123233995736765e-17;
  *a2 = v48 + v44 * 1.570796326794897;
  *a3 = v44 * 1.570796326794897 - (v48 + v44 * 1.570796326794897) + v48;
  return result;
}
