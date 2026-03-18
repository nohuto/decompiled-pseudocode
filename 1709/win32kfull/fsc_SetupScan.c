/*
 * XREFs of fsc_SetupScan @ 0x1C02C757C
 * Callers:
 *     fsc_FillGlyph @ 0x1C02BA658 (fsc_FillGlyph.c)
 * Callees:
 *     FixPointers @ 0x1C02C6D20 (FixPointers.c)
 */

__int64 __fastcall fsc_SetupScan(
        __int16 *a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int a9,
        __int64 *a10)
{
  int v10; // r10d
  int v11; // r11d
  int v12; // r9d
  __int16 v13; // bp
  char v14; // bl
  __int64 (__fastcall *v15)(int, int); // rax
  __int64 (__fastcall *v16)(int, int); // rax
  __int64 (__fastcall *v17)(int, int); // rax
  unsigned __int64 *v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rdx
  unsigned __int64 *v22; // r15
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r14
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned int v30; // r13d
  unsigned __int64 v31; // r11
  __int64 v32; // rdx
  __int16 v33; // r8
  __int16 v34; // ax
  __int64 v35; // rax
  unsigned __int64 v36; // r11
  unsigned __int64 *v37; // r15
  __int16 v38; // bp
  int v39; // r10d
  int v40; // ecx
  unsigned __int64 v41; // r9
  unsigned __int64 *v42; // r14
  unsigned __int64 v43; // r9
  _QWORD *v44; // rsi
  unsigned __int64 v45; // r9
  _QWORD *v46; // rdi
  unsigned __int64 v47; // r9
  _QWORD *v48; // rbx
  unsigned __int64 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int16 v52; // r9
  __int64 v53; // r8
  __int16 v54; // ax
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  char v62; // [rsp+70h] [rbp+18h]

  v10 = a4;
  v11 = *a1;
  v12 = a1[2];
  v13 = a3;
  dword_1C0334248 = a1[1];
  dword_1C033424C = a1[3];
  dword_1C0334250 = v11;
  dword_1C0334254 = v12;
  dword_1C033425C = a3;
  dword_1C0334260 = v10;
  if ( (a2 & 6) == 4 )
  {
    dword_1C0334352 = 65538;
    v14 = 1;
    if ( a3 != v11 || (v15 = AddHorizSmartScan, v10 != v12) )
      v15 = AddHorizSmartBand;
    qword_1C03342F8 = (__int64)v15;
    v16 = AddVertSmartScan;
  }
  else
  {
    v14 = 0;
    dword_1C0334352 = 1;
    if ( a3 != v11 || (v17 = AddHorizSimpleScan, v10 != v12) )
      v17 = AddHorizSimpleBand;
    qword_1C03342F8 = (__int64)v17;
    v16 = AddVertSimpleScan;
  }
  v18 = (unsigned __int64 *)qword_1C0334358;
  qword_1C0334300 = (__int64)v16;
  v19 = 8 * (a3 - v10);
  v20 = v19 + qword_1C0334358;
  qword_1C0334358 = v20;
  if ( v20 > qword_1C0334368 )
  {
    qword_1C0334278 = 0LL;
    return 6657LL;
  }
  qword_1C0334278 = (__int64)v18;
  if ( !v18 )
    return 6657LL;
  v22 = (unsigned __int64 *)v20;
  v23 = v19 + v20;
  qword_1C0334358 = v23;
  if ( v23 > qword_1C0334368 )
  {
    qword_1C0334280 = 0LL;
    return 6657LL;
  }
  qword_1C0334280 = (__int64)v22;
  if ( !v22 )
    return 6657LL;
  v24 = (_QWORD *)v23;
  v25 = v19 + v23;
  qword_1C0334358 = v25;
  if ( v25 > qword_1C0334368 )
  {
    qword_1C0334288 = 0LL;
    return 6657LL;
  }
  qword_1C0334288 = (__int64)v24;
  if ( !v24 )
    return 6657LL;
  v26 = (_QWORD *)v25;
  v27 = v19 + v25;
  qword_1C0334358 = v27;
  if ( v27 > qword_1C0334368 )
  {
    qword_1C0334290 = 0LL;
    return 6657LL;
  }
  qword_1C0334290 = (__int64)v26;
  if ( !v26 )
    return 6657LL;
  v28 = (_QWORD *)v27;
  v29 = v19 + v27;
  qword_1C0334358 = v29;
  if ( v29 > qword_1C0334368 )
  {
    qword_1C0334298 = 0LL;
    return 6657LL;
  }
  qword_1C0334298 = (__int64)v28;
  if ( !v28 )
    return 6657LL;
  dword_1C033434C = 0;
  v30 = a9;
  dword_1C0334348 = a9;
  if ( a7 > 0x7FFFFFF )
    return 6657LL;
  v31 = v29;
  v62 = v14;
  qword_1C0334358 = ((int)((a7 << (v14 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v29;
  if ( qword_1C0334358 > (unsigned __int64)qword_1C0334368 || !v29 )
    return 6657LL;
  if ( a10 != (__int64 *)a10[4] )
    FixPointers(a10);
  v32 = *a10;
  v33 = 0;
  if ( (__int16)v10 < v13 )
  {
    do
    {
      while ( *(__int16 *)v32 <= (__int16)v10 )
      {
        v34 = *(_WORD *)(v32 + 2);
        v32 = *(_QWORD *)(v32 + 8);
        v33 += v34 << v14;
      }
      *v18 = v31;
      LOWORD(v10) = v10 + 1;
      *v24 = v31;
      ++v18;
      ++v24;
      v35 = 2LL * v33;
      v36 = v35 + v31;
      *v22++ = v36;
      *v26 = v36;
      v31 = v35 + v36;
      *v28 = v31;
      ++v26;
      ++v28;
    }
    while ( (__int16)v10 < v13 );
    v30 = a9;
  }
  if ( (a2 & 2) == 0 )
  {
    v37 = (unsigned __int64 *)qword_1C0334360;
    v38 = a1[3];
    v39 = a1[1];
    v40 = 8 * (v38 - v39);
    v41 = v40 + qword_1C0334360;
    qword_1C0334360 = v41;
    if ( v41 > qword_1C0334370 )
    {
      qword_1C03342B8 = 0LL;
      return 6657LL;
    }
    qword_1C03342B8 = (__int64)v37;
    if ( !v37 )
      return 6657LL;
    v42 = (unsigned __int64 *)v41;
    v43 = v40 + v41;
    qword_1C0334360 = v43;
    if ( v43 > qword_1C0334370 )
    {
      qword_1C03342C0 = 0LL;
      return 6657LL;
    }
    qword_1C03342C0 = (__int64)v42;
    if ( !v42 )
      return 6657LL;
    v44 = (_QWORD *)v43;
    v45 = v40 + v43;
    qword_1C0334360 = v45;
    if ( v45 > qword_1C0334370 )
    {
      qword_1C03342C8 = 0LL;
      return 6657LL;
    }
    qword_1C03342C8 = (__int64)v44;
    if ( !v44 )
      return 6657LL;
    v46 = (_QWORD *)v45;
    v47 = v40 + v45;
    qword_1C0334360 = v47;
    if ( v47 > qword_1C0334370 )
    {
      qword_1C03342D0 = 0LL;
      return 6657LL;
    }
    qword_1C03342D0 = (__int64)v46;
    if ( !v46 )
      return 6657LL;
    v48 = (_QWORD *)v47;
    v49 = v40 + v47;
    qword_1C0334360 = v49;
    if ( v49 > qword_1C0334370 )
    {
      qword_1C03342D8 = 0LL;
      return 6657LL;
    }
    qword_1C03342D8 = (__int64)v48;
    if ( !v48 )
      return 6657LL;
    if ( a5 )
    {
      v50 = v49;
      dword_1C033426C = 0x7FFFFFFF;
      v49 += (a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      qword_1C0334360 = v49;
      if ( v49 > qword_1C0334370 )
        v50 = 0LL;
      qword_1C0334270 = v50;
    }
    if ( a8 > 0x7FFFFFF )
      return 6657LL;
    v51 = v49;
    qword_1C0334360 = ((int)((a8 << (v62 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v49;
    if ( qword_1C0334360 > (unsigned __int64)qword_1C0334370 || !v49 )
      return 6657LL;
    v52 = 0;
    v53 = a10[1];
    if ( (__int16)v39 < v38 )
    {
      do
      {
        while ( *(__int16 *)v53 <= (__int16)v39 )
        {
          v54 = *(_WORD *)(v53 + 2);
          v53 = *(_QWORD *)(v53 + 8);
          v52 += v54 << v62;
        }
        *v37 = v51;
        LOWORD(v39) = v39 + 1;
        *v44 = v51;
        ++v37;
        ++v44;
        v55 = 2LL * v52;
        v56 = v55 + v51;
        *v42++ = v56;
        *v46 = v56;
        v51 = v55 + v56;
        *v48 = v51;
        ++v46;
        ++v48;
      }
      while ( (__int16)v39 < a1[3] );
      v30 = a9;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( v30 >= 0x10000000 )
        return 6657LL;
      v57 = qword_1C0334360;
      v58 = (int)(4 * v30 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v59 = v58 + qword_1C0334360;
      qword_1C0334360 = v59;
      if ( v59 > qword_1C0334370 )
      {
        qword_1C0334338 = 0LL;
        return 6657LL;
      }
      qword_1C0334338 = v57;
      if ( !v57 )
        return 6657LL;
      qword_1C0334360 = v58 + v59;
      if ( v58 + v59 > qword_1C0334370 )
      {
        qword_1C0334340 = 0LL;
        return 6657LL;
      }
      qword_1C0334340 = v59;
      if ( !v59 )
        return 6657LL;
    }
  }
  return 0LL;
}
