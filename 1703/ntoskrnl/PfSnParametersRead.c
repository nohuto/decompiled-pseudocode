/*
 * XREFs of PfSnParametersRead @ 0x1405C8650
 * Callers:
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x14081DB80 (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14004C84C (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _wcsupr @ 0x14016A3E0 (_wcsupr.c)
 *     PfpGetParameter @ 0x1405C8BF4 (PfpGetParameter.c)
 *     PfSnParametersVerify @ 0x1405C8CDC (PfSnParametersVerify.c)
 */

__int64 __fastcall PfSnParametersRead(__int64 a1)
{
  _BYTE *v2; // rdx
  _OWORD *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // r12
  bool v16; // sf
  _DWORD *v17; // rcx
  int v18; // eax
  int *v19; // r13
  char *v20; // rsi
  const wchar_t **v21; // r15
  signed int v22; // r14d
  const wchar_t *v23; // rbx
  const wchar_t *v24; // r8
  __int64 v25; // rcx
  wchar_t *v26; // rax
  wchar_t *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  char *v30; // r9
  wchar_t v31; // cx
  __int64 v32; // rcx
  wchar_t *v33; // rax
  wchar_t *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  char *v37; // r9
  wchar_t v38; // cx
  __int64 v39; // rcx
  wchar_t *v40; // rax
  wchar_t *v41; // rax
  __int64 v42; // r8
  char *v43; // r9
  wchar_t v44; // dx
  __int64 result; // rax
  __int64 v46; // rdi
  _OWORD *v47; // rcx
  __int64 v48; // rdx
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v61; // [rsp+38h] [rbp-C8h]
  __int64 v62; // [rsp+40h] [rbp-C0h]
  _BYTE v63[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v64; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t String[128]; // [rsp+E0h] [rbp-20h] BYREF
  wchar_t pszDest[80]; // [rsp+1F0h] [rbp+F0h] BYREF

  v62 = a1 + 96;
  v2 = v63;
  v3 = (_OWORD *)(a1 + 96);
  v4 = 3LL;
  do
  {
    v2 += 128;
    v5 = *v3;
    v6 = v3[1];
    v3 += 8;
    *((_OWORD *)v2 - 8) = v5;
    v7 = *(v3 - 6);
    *((_OWORD *)v2 - 7) = v6;
    v8 = *(v3 - 5);
    *((_OWORD *)v2 - 6) = v7;
    v9 = *(v3 - 4);
    *((_OWORD *)v2 - 5) = v8;
    v10 = *(v3 - 3);
    *((_OWORD *)v2 - 4) = v9;
    v11 = *(v3 - 2);
    *((_OWORD *)v2 - 3) = v10;
    v12 = *(v3 - 1);
    *((_OWORD *)v2 - 2) = v11;
    *((_OWORD *)v2 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *(void **)(a1 + 8);
  *(_OWORD *)v2 = v13;
  *((_QWORD *)v2 + 2) = v14;
  v60 = 4LL;
  v16 = (int)PfpGetParameter(v15, (__int64)&v60) < 0;
  v17 = (_DWORD *)&v60 + 1;
  v18 = 0;
  v19 = (int *)v63;
  if ( v16 )
    v17 = 0LL;
  v20 = &v64;
  v61 = v17;
  v21 = (const wchar_t **)(a1 + 520);
  v22 = 0;
  while ( 1 )
  {
    v23 = *v21;
    if ( v17 )
    {
      v59 = *v17;
      if ( _bittest(&v59, v22) )
        v18 = 1;
      else
        v18 = 2;
    }
    v24 = *v21;
    *v19 = v18;
    RtlStringCbCopyW(pszDest, 0xA0uLL, v24);
    v25 = 80LL;
    v26 = pszDest;
    while ( *v26 )
    {
      ++v26;
      if ( !--v25 )
        goto LABEL_18;
    }
    v27 = &pszDest[80 - v25];
    v28 = v25;
    v29 = 2147483646LL;
    v30 = (char *)((char *)L"MaxNumPages" - (char *)v27);
    while ( v29 )
    {
      v31 = *(wchar_t *)((char *)v27 + (_QWORD)v30);
      if ( !v31 )
        break;
      *v27 = v31;
      --v29;
      ++v27;
      if ( !--v28 )
      {
        --v27;
        break;
      }
    }
    *v27 = 0;
LABEL_18:
    LODWORD(v60) = 4;
    PfpGetParameter(v15, (__int64)&v60);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v23);
    v32 = 80LL;
    v33 = pszDest;
    while ( *v33 )
    {
      ++v33;
      if ( !--v32 )
        goto LABEL_28;
    }
    v34 = &pszDest[80 - v32];
    v35 = v32;
    v36 = 2147483646LL;
    v37 = (char *)((char *)L"MaxNumSections" - (char *)v34);
    while ( v36 )
    {
      v38 = *(wchar_t *)((char *)v34 + (_QWORD)v37);
      if ( !v38 )
        break;
      *v34 = v38;
      --v36;
      ++v34;
      if ( !--v35 )
      {
        --v34;
        break;
      }
    }
    *v34 = 0;
LABEL_28:
    LODWORD(v60) = 4;
    PfpGetParameter(v15, (__int64)&v60);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v23);
    v39 = 80LL;
    v40 = pszDest;
    while ( *v40 )
    {
      ++v40;
      if ( !--v39 )
        goto LABEL_38;
    }
    v41 = &pszDest[80 - v39];
    v42 = 2147483646LL;
    v43 = (char *)((char *)L"TimerPeriod" - (char *)v41);
    while ( v42 )
    {
      v44 = *(wchar_t *)((char *)v41 + (_QWORD)v43);
      if ( !v44 )
        break;
      *v41 = v44;
      --v42;
      ++v41;
      if ( !--v39 )
      {
        --v41;
        break;
      }
    }
    *v41 = 0;
LABEL_38:
    LODWORD(v60) = 8;
    PfpGetParameter(v15, (__int64)&v60);
    v17 = v61;
    ++v22;
    v20 += 16;
    ++v21;
    ++v19;
    if ( v22 >= 2 )
      break;
    v18 = 0;
  }
  LODWORD(v60) = 96;
  PfpGetParameter(v15, (__int64)&v60);
  LODWORD(v60) = 4;
  PfpGetParameter(v15, (__int64)&v60);
  LODWORD(v60) = 4;
  PfpGetParameter(v15, (__int64)&v60);
  LODWORD(v60) = 4;
  PfpGetParameter(v15, (__int64)&v60);
  LODWORD(v60) = 256;
  PfpGetParameter(v15, (__int64)&v60);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v60) = 4;
  PfpGetParameter(v15, (__int64)&v60);
  result = PfSnParametersVerify(v63);
  v46 = v62;
  if ( (int)result >= 0 )
  {
    v47 = v63;
    v48 = 3LL;
    do
    {
      v46 += 128LL;
      v49 = *v47;
      v50 = v47[1];
      v47 += 8;
      *(_OWORD *)(v46 - 128) = v49;
      v51 = *(v47 - 6);
      *(_OWORD *)(v46 - 112) = v50;
      v52 = *(v47 - 5);
      *(_OWORD *)(v46 - 96) = v51;
      v53 = *(v47 - 4);
      *(_OWORD *)(v46 - 80) = v52;
      v54 = *(v47 - 3);
      *(_OWORD *)(v46 - 64) = v53;
      v55 = *(v47 - 2);
      *(_OWORD *)(v46 - 48) = v54;
      v56 = *(v47 - 1);
      *(_OWORD *)(v46 - 32) = v55;
      *(_OWORD *)(v46 - 16) = v56;
      --v48;
    }
    while ( v48 );
    v57 = *v47;
    v58 = *((_QWORD *)v47 + 2);
    result = 0LL;
    *(_OWORD *)v46 = v57;
    *(_QWORD *)(v46 + 16) = v58;
  }
  return result;
}
