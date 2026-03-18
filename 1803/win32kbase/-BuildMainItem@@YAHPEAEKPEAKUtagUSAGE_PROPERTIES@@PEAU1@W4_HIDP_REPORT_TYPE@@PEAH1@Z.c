/*
 * XREFs of ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C00F5440
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C00F5778 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x1C00F5BD8 (-OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z.c)
 *     ?SetCollectionLabel@@YAHPEAEKPEAK@Z @ 0x1C00F5C44 (-SetCollectionLabel@@YAHPEAEKPEAK@Z.c)
 *     ?SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z @ 0x1C00F5CB0 (-SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z.c)
 */

__int64 __fastcall BuildMainItem(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        unsigned int *a8)
{
  int v9; // r8d
  unsigned int v10; // r14d
  unsigned int v12; // r12d
  int v13; // edi
  __int128 v14; // xmm1
  __int64 result; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int16 v21; // r9
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int16 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int16 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int8 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v43[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v44[4]; // [rsp+40h] [rbp-30h] BYREF
  int v45[4]; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v10 = a2;
  v12 = *a8;
  v13 = *a7;
  v43[0] = *a8;
  v14 = a4[1];
  *(_OWORD *)v44 = *a4;
  *(_OWORD *)v45 = v14;
  if ( (unsigned int)a2 < 4 )
    return 0LL;
  if ( v13 )
  {
    *a7 = 0;
    v16 = OpenCollection(a1, a2, 0LL, a3);
    v17 = *a3;
    if ( v10 < (int)v17 + 2 )
      return 0LL;
    a1[v17] = -123;
    v18 = (unsigned int)(v17 + 1);
    a1[v18] = 1;
    *a3 = v18 + 1;
    if ( !v16 || !SetCollectionLabel(a1, v10, a3) )
      return 0LL;
    if ( a1[1] == 13 && (unsigned __int8)(a1[3] - 1) <= 1u )
      v19 = 1LL;
    else
      v19 = 2LL;
    v9 = OpenCollection(a1, v10, v19, a3);
  }
  v20 = *a3;
  if ( !v9 && v13 || (int)v20 + 4 > v10 )
    return 0LL;
  v21 = HIWORD(v44[0]);
  if ( v13 && HIWORD(v44[0]) != a1[1] || *(_WORD *)(a5 + 2) != HIWORD(v44[0]) )
  {
    a1[v20] = 5;
    a1[(unsigned int)(v20 + 1)] = v21;
    v20 = (unsigned int)(v20 + 2);
    *(_WORD *)(a5 + 2) = v21;
  }
  v22 = v44[1];
  a1[v20] = 9;
  v23 = (unsigned int)(v20 + 1);
  a1[v23] = v22;
  v24 = v23 + 1;
  v42 = v24;
  if ( !v9 )
  {
    if ( v13 )
      return 0LL;
  }
  if ( *(_DWORD *)(a5 + 8) != v44[2] || v13 )
  {
    v25 = SetMultiByteValue(a1, v10, &v42, &v44[2], 4u, 0LL);
    v24 = v42;
    v9 = v25;
    *(_DWORD *)(a5 + 8) = v44[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 12) != v44[3] || v13 )
  {
    v26 = SetMultiByteValue(a1, v10, &v42, &v44[3], 5u, v43);
    v24 = v42;
    v9 = v26;
    v12 = v43[0];
    *(_DWORD *)(a5 + 12) = v44[3];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 24) != v45[2] || v13 )
  {
    v27 = SetMultiByteValue(a1, v10, &v42, &v45[2], 0xDu, 0LL);
    v24 = v42;
    v9 = v27;
    *(_DWORD *)(a5 + 24) = v45[2];
  }
  if ( !v9 && v13 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 28) != v45[3] || v13 )
  {
    v28 = SetMultiByteValue(a1, v10, &v42, &v45[3], 0xEu, 0LL);
    v24 = v42;
    v9 = v28;
    *(_DWORD *)(a5 + 28) = v45[3];
  }
  if ( !v9 && v13 || v24 + 12 > v10 )
    return 0LL;
  v29 = v45[0];
  if ( *(_WORD *)(a5 + 16) != LOWORD(v45[0]) || v13 )
  {
    v30 = v24;
    v31 = v24 + 1;
    v24 += 2;
    a1[v30] = 101;
    a1[v31] = v29;
    *(_WORD *)(a5 + 16) = v29;
  }
  v32 = HIWORD(v45[0]);
  if ( *(_WORD *)(a5 + 18) != HIWORD(v45[0]) || v13 )
  {
    v33 = v24;
    v34 = v24 + 1;
    v24 += 2;
    a1[v33] = 85;
    a1[v34] = v32;
    *(_WORD *)(a5 + 18) = v32;
  }
  if ( *a8 != v12 )
  {
    v35 = v24;
    v36 = v24 + 1;
    v24 += 2;
    a1[v35] = 117;
    a1[v36] = v12;
    *a8 = v12;
  }
  v37 = v45[1];
  if ( *(_BYTE *)(a5 + 20) != LOBYTE(v45[1]) || v13 )
  {
    v38 = v24;
    v39 = v24 + 1;
    a1[v38] = -107;
    a1[v39] = v37;
    v24 = v39 + 1;
    *(_BYTE *)(a5 + 20) = v37;
  }
  v40 = v24;
  result = 1LL;
  v41 = v24 + 1;
  a1[v40] = -127;
  a1[v41] = 2;
  *a3 = v41 + 1;
  return result;
}
