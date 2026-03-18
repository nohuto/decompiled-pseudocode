/*
 * XREFs of fsc_SetupScan @ 0x1C02CD7A4
 * Callers:
 *     fsc_FillGlyph @ 0x1C02C0850 (fsc_FillGlyph.c)
 * Callees:
 *     FixPointers @ 0x1C02CCF28 (FixPointers.c)
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
  __int16 v13; // di
  char v14; // bl
  __int64 (__fastcall *v15)(int, int); // rax
  __int64 (__fastcall *v16)(int, int); // rax
  __int64 (__fastcall *v17)(int, int); // rax
  unsigned __int64 *v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 *v22; // rbp
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r15
  unsigned __int64 v25; // rdx
  _QWORD *v26; // r14
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned int v30; // r13d
  unsigned __int64 v31; // r11
  __int64 v32; // rdx
  __int16 v33; // r8
  __int16 v34; // ax
  __int64 v35; // rax
  unsigned __int64 v36; // r11
  unsigned __int64 *v37; // r15
  unsigned __int64 v38; // r9
  int v39; // r11d
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r8
  __int16 v42; // bp
  unsigned __int64 *v43; // r14
  unsigned __int64 v44; // r8
  _QWORD *v45; // rsi
  unsigned __int64 v46; // r8
  _QWORD *v47; // rdi
  unsigned __int64 v48; // r8
  _QWORD *v49; // rbx
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r8
  __int64 v54; // r10
  __int16 v55; // ax
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int16 v63; // [rsp+80h] [rbp+18h]
  char v64; // [rsp+88h] [rbp+20h]

  v10 = a4;
  v11 = *a1;
  v12 = a1[2];
  v13 = a3;
  dword_1C0338B28 = a1[1];
  dword_1C0338B2C = a1[3];
  dword_1C0338B30 = v11;
  dword_1C0338B34 = v12;
  dword_1C0338B3C = a3;
  dword_1C0338B40 = v10;
  if ( (a2 & 6) == 4 )
  {
    dword_1C0338C32 = 65538;
    v14 = 1;
    if ( a3 != v11 || (v15 = AddHorizSmartScan, v10 != v12) )
      v15 = AddHorizSmartBand;
    qword_1C0338BD8 = (__int64)v15;
    v16 = AddVertSmartScan;
  }
  else
  {
    v14 = 0;
    dword_1C0338C32 = 1;
    if ( a3 != v11 || (v17 = AddHorizSimpleScan, v10 != v12) )
      v17 = AddHorizSimpleBand;
    qword_1C0338BD8 = (__int64)v17;
    v16 = AddVertSimpleScan;
  }
  v18 = (unsigned __int64 *)qword_1C0338C38;
  qword_1C0338BE0 = (__int64)v16;
  v19 = (8 * (a3 - v10) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v20 = v19 + qword_1C0338C38;
  qword_1C0338C38 = v20;
  if ( v20 > qword_1C0338C48 )
  {
    qword_1C0338B58 = 0LL;
    return 6657LL;
  }
  qword_1C0338B58 = (__int64)v18;
  if ( !v18 )
    return 6657LL;
  v22 = (unsigned __int64 *)v20;
  v23 = v19 + v20;
  qword_1C0338C38 = v23;
  if ( v23 > qword_1C0338C48 )
  {
    qword_1C0338B60 = 0LL;
    return 6657LL;
  }
  qword_1C0338B60 = (__int64)v22;
  if ( !v22 )
    return 6657LL;
  v24 = (_QWORD *)v23;
  v25 = v19 + v23;
  qword_1C0338C38 = v25;
  if ( v25 > qword_1C0338C48 )
  {
    qword_1C0338B68 = 0LL;
    return 6657LL;
  }
  qword_1C0338B68 = (__int64)v24;
  if ( !v24 )
    return 6657LL;
  v26 = (_QWORD *)v25;
  v27 = v19 + v25;
  qword_1C0338C38 = v27;
  if ( v27 > qword_1C0338C48 )
  {
    qword_1C0338B70 = 0LL;
    return 6657LL;
  }
  qword_1C0338B70 = (__int64)v26;
  if ( !v26 )
    return 6657LL;
  v28 = (_QWORD *)v27;
  v29 = v19 + v27;
  qword_1C0338C38 = v29;
  if ( v29 > qword_1C0338C48 )
  {
    qword_1C0338B78 = 0LL;
    return 6657LL;
  }
  qword_1C0338B78 = (__int64)v28;
  if ( !v28 )
    return 6657LL;
  dword_1C0338C2C = 0;
  v30 = a9;
  dword_1C0338C28 = a9;
  if ( a7 > 0x7FFFFFF )
    return 6657LL;
  v31 = v29;
  v64 = v14;
  qword_1C0338C38 = ((int)((a7 << (v14 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v29;
  if ( qword_1C0338C38 > (unsigned __int64)qword_1C0338C48 || !v29 )
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
    v37 = (unsigned __int64 *)qword_1C0338C40;
    v38 = qword_1C0338C50;
    v39 = a1[1];
    v63 = a1[3];
    v40 = (8 * (v63 - v39) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    v41 = v40 + qword_1C0338C40;
    qword_1C0338C40 = v41;
    if ( v41 > qword_1C0338C50 )
    {
      qword_1C0338B98 = 0LL;
      return 6657LL;
    }
    v42 = 0;
    qword_1C0338B98 = (__int64)v37;
    if ( !v37 )
      return 6657LL;
    v43 = (unsigned __int64 *)v41;
    v44 = v40 + v41;
    qword_1C0338C40 = v44;
    if ( v44 > qword_1C0338C50 )
    {
      qword_1C0338BA0 = 0LL;
      return 6657LL;
    }
    qword_1C0338BA0 = (__int64)v43;
    if ( !v43 )
      return 6657LL;
    v45 = (_QWORD *)v44;
    v46 = v40 + v44;
    qword_1C0338C40 = v46;
    if ( v46 > qword_1C0338C50 )
    {
      qword_1C0338BA8 = 0LL;
      return 6657LL;
    }
    qword_1C0338BA8 = (__int64)v45;
    if ( !v45 )
      return 6657LL;
    v47 = (_QWORD *)v46;
    v48 = v40 + v46;
    qword_1C0338C40 = v48;
    if ( v48 > qword_1C0338C50 )
    {
      qword_1C0338BB0 = 0LL;
      return 6657LL;
    }
    qword_1C0338BB0 = (__int64)v47;
    if ( !v47 )
      return 6657LL;
    v49 = (_QWORD *)v48;
    v50 = v40 + v48;
    qword_1C0338C40 = v50;
    if ( v50 > qword_1C0338C50 )
    {
      qword_1C0338BB8 = 0LL;
      return 6657LL;
    }
    qword_1C0338BB8 = (__int64)v49;
    if ( !v49 )
      return 6657LL;
    if ( a5 )
    {
      v51 = v50;
      dword_1C0338B4C = 0x7FFFFFFF;
      v50 += (a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      qword_1C0338C40 = v50;
      if ( v50 > qword_1C0338C50 )
        v51 = 0LL;
      qword_1C0338B50 = v51;
    }
    if ( a8 > 0x7FFFFFF )
      return 6657LL;
    v52 = v50;
    v53 = ((int)((a8 << (v64 + 2)) + 7) & 0xFFFFFFFFFFFFFFF8uLL) + v50;
    qword_1C0338C40 = v53;
    if ( v53 > qword_1C0338C50 || !v52 )
      return 6657LL;
    v54 = a10[1];
    if ( (__int16)v39 < v63 )
    {
      do
      {
        while ( *(__int16 *)v54 <= (__int16)v39 )
        {
          v55 = *(_WORD *)(v54 + 2);
          v54 = *(_QWORD *)(v54 + 8);
          v42 += v55 << v64;
        }
        *v37 = v52;
        LOWORD(v39) = v39 + 1;
        *v45 = v52;
        ++v37;
        ++v45;
        v56 = 2LL * v42;
        v57 = v56 + v52;
        *v43++ = v57;
        *v47 = v57;
        v52 = v56 + v57;
        *v49 = v52;
        ++v47;
        ++v49;
      }
      while ( (__int16)v39 < a1[3] );
      v30 = a9;
    }
    if ( (a2 & 4) != 0 )
    {
      if ( v30 >= 0x10000000 )
        return 6657LL;
      v58 = v53;
      v59 = (int)(4 * v30 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v60 = v59 + v53;
      qword_1C0338C40 = v60;
      if ( v60 > v38 )
      {
        qword_1C0338C18 = 0LL;
        return 6657LL;
      }
      qword_1C0338C18 = v58;
      if ( !v58 )
        return 6657LL;
      qword_1C0338C40 = v59 + v60;
      if ( v59 + v60 > v38 )
      {
        qword_1C0338C20 = 0LL;
        return 6657LL;
      }
      qword_1C0338C20 = v60;
      if ( !v60 )
        return 6657LL;
    }
  }
  return 0LL;
}
