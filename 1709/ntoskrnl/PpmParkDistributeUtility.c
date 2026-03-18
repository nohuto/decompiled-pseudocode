/*
 * XREFs of PpmParkDistributeUtility @ 0x14008F9F0
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x14008F950 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x1402494B0 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KiEnumerateNextProcessorNumber @ 0x14008FD70 (KiEnumerateNextProcessorNumber.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x14024978C (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x1402498D4 (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int64 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  unsigned __int16 v8; // r10
  __int64 v9; // r11
  unsigned __int8 v10; // di
  char v11; // bl
  char v12; // r13
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rcx
  int v16; // r9d
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // ecx
  char v21; // r12
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // r14
  unsigned int v24; // edi
  unsigned int v25; // esi
  bool v26; // zf
  unsigned __int16 v27; // r13
  int v28; // r11d
  unsigned __int16 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned int v33; // ecx
  unsigned int v34; // r9d
  unsigned int v35; // eax
  unsigned int v36; // r10d
  int v37; // r9d
  unsigned __int16 v38; // cx
  unsigned __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // ecx
  int v42; // eax
  __int64 result; // rax
  _DWORD *v44; // rbx
  char v45; // r12
  __int64 Prcb; // rax
  int v47; // ecx
  __int64 v48; // rax
  unsigned int v49; // ecx
  __int64 v50; // r9
  unsigned __int8 v51; // cl
  int v52; // edi
  __int64 v53; // rax
  unsigned int v54; // edx
  __int64 v55; // rax
  int v56; // [rsp+20h] [rbp-38h]
  __int64 v57; // [rsp+28h] [rbp-30h]
  unsigned __int16 *v58; // [rsp+30h] [rbp-28h] BYREF
  __int64 v59; // [rsp+38h] [rbp-20h]
  __int16 v60; // [rsp+40h] [rbp-18h]
  __int64 v61; // [rsp+A0h] [rbp+48h]
  unsigned __int16 v63; // [rsp+B0h] [rbp+58h]
  ULONG v64; // [rsp+B8h] [rbp+60h] BYREF

  v63 = a3;
  v7 = a6;
  v8 = a3;
  v9 = 0LL;
  v60 = a3;
  v10 = 0;
  v58 = 0LL;
  v11 = 0;
  v56 = a3;
  v12 = 0;
  v61 = a2 ^ a1;
  v14 = a2 ^ a1;
  v15 = a2 ^ a1;
  v16 = a3;
  while ( v15 )
  {
LABEL_3:
    _BitScanForward64(&v17, v15);
    v16 = a3;
    v59 = v15 & ~(1LL << v17);
    v64 = KiProcessorNumberToIndexMappingTable[64 * a3 + (unsigned __int8)v17];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v18 = 0LL;
    else
      v18 = KiProcessorBlock[v64];
    if ( *(_BYTE *)(v18 + 23858) )
    {
      ++v12;
      v9 |= *(_QWORD *)(v18 + 200);
    }
    else
    {
      ++v11;
    }
    v19 = *(_DWORD *)(v18 + 24244);
    if ( PpmHeteroImplementationGeneration )
    {
      v20 = *(_DWORD *)(v18 + 24240);
      if ( v20 )
        v19 = (v20 * v19) >> 16;
    }
    a3 = v60;
    ++v10;
    v15 = v59;
    v7 += v19;
  }
  while ( 1 )
  {
    v60 = ++a3;
    if ( a3 >= (unsigned int)(v16 + 1) )
      break;
    v15 = *(_QWORD *)(8LL * a3 + 8);
    if ( v15 )
      goto LABEL_3;
  }
  v59 = a2;
  v57 = v9;
  v60 = v8;
  v58 = 0LL;
  while ( (int)KiEnumerateNextProcessorNumber(&a6, &v58) >= 0 )
  {
    v64 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)a6 + BYTE2(a6)];
    Prcb = KeGetPrcb(v64);
    if ( PpmHeteroImplementationGeneration )
      v47 = PpmHeteroUtilityToNormalizedUtility(
              Prcb + 23808,
              (unsigned int)(*(_DWORD *)(Prcb + 24244) - *(_DWORD *)(Prcb + 24248)));
    else
      v47 = *(_DWORD *)(Prcb + 24244) - *(_DWORD *)(Prcb + 24248);
    v7 += v47;
  }
  if ( v10 <= 1u )
    v10 = 1;
  v21 = a5;
  v22 = a4;
  if ( a4 >= v10 )
    v22 = v10;
  v23 = v22;
  if ( v22 <= 1u )
    v23 = 1;
  v24 = v7 / v10;
  v25 = v7 / v23;
  if ( !v11 )
  {
    v27 = v63;
    goto LABEL_22;
  }
  v26 = v12 == 0;
  v27 = v63;
  if ( !v26 )
  {
    v59 = v57;
    v60 = v63;
    v58 = 0LL;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v64, &v58) )
    {
      v48 = KeGetPrcb(v64);
      v14 ^= *(_QWORD *)(v48 + 200);
      v49 = PpmHeteroNormalizedUtilityToUtility(v48 + 23808, v25);
      if ( v49 <= *(_DWORD *)(v50 + 436) )
      {
        if ( !v21 )
          goto LABEL_67;
        if ( *(_DWORD *)(v50 + 440) > v49 )
          v49 = *(_DWORD *)(v50 + 440);
      }
      *(_DWORD *)(v50 + 436) = v49;
LABEL_67:
      v51 = v23 - 1;
      if ( !v23 )
        v51 = 0;
      v23 = v51;
    }
  }
LABEL_22:
  v28 = v56;
  v29 = v27;
  v60 = v27;
  v30 = v14;
  v58 = 0LL;
  while ( v30 )
  {
LABEL_24:
    _BitScanForward64(&v31, v30);
    v28 = v29;
    v59 = v30 & ~(1LL << v31);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v29 + (unsigned __int8)v31];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v32 = 0LL;
    else
      v32 = KiProcessorBlock[v64];
    v33 = *(_DWORD *)(v32 + 24240);
    v34 = *(_DWORD *)(v32 + 24244);
    if ( v33 )
      v35 = (v34 * v33) >> 16;
    else
      v35 = *(_DWORD *)(v32 + 24244);
    if ( v24 <= v35 )
    {
      v14 ^= *(_QWORD *)(v32 + 200);
      v36 = v25;
      if ( v33 )
      {
        if ( v33 == 0x10000 )
          v36 = (unsigned __int16)v25;
        else
          v36 = (v25 << 16) / v33;
      }
      if ( v36 <= v34 )
      {
        if ( !v21 )
          goto LABEL_29;
        if ( *(_DWORD *)(v32 + 24248) > v36 )
          v36 = *(_DWORD *)(v32 + 24248);
      }
      *(_DWORD *)(v32 + 24244) = v36;
    }
LABEL_29:
    v29 = v60;
    v30 = v59;
  }
  while ( 1 )
  {
    v60 = ++v29;
    if ( v29 >= (unsigned int)(v28 + 1) )
      break;
    v30 = *(_QWORD *)(8LL * v29 + 8);
    if ( v30 )
      goto LABEL_24;
  }
  v37 = v56;
  v38 = v63;
  v60 = v63;
  v58 = 0LL;
  while ( v14 )
  {
LABEL_40:
    _BitScanForward64(&v39, v14);
    v37 = v38;
    v59 = v14 & ~(1LL << v39);
    v64 = KiProcessorNumberToIndexMappingTable[64 * v38 + (unsigned __int8)v39];
    if ( v64 >= (unsigned int)KeNumberProcessors_0 )
      v40 = 0LL;
    else
      v40 = KiProcessorBlock[v64];
    v41 = *(_DWORD *)(v40 + 24240);
    v42 = v24;
    if ( v41 )
    {
      if ( v41 == 0x10000 )
        v42 = (unsigned __int16)v24;
      else
        v42 = (v24 << 16) / v41;
    }
    v38 = v60;
    v14 = v59;
    *(_DWORD *)(v40 + 24244) = v42;
  }
  while ( 1 )
  {
    result = ++v38;
    v60 = v38;
    if ( v38 >= (unsigned int)(v37 + 1) )
      break;
    v14 = *(_QWORD *)(8LL * v38 + 8);
    if ( v14 )
      goto LABEL_40;
  }
  v44 = a7;
  v45 = a5;
  if ( a7 )
  {
    v52 = 0;
    v59 = v61;
    v58 = 0LL;
    v60 = v63;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v64, &v58);
      if ( (_DWORD)result )
        break;
      v53 = KeGetPrcb(v64);
      v54 = *(_DWORD *)(v53 + 24244);
      if ( v54 > 0x2710 )
        v52 += PpmHeteroUtilityToNormalizedUtility(v53 + 23808, v54 - 10000);
    }
    *v44 = v52;
  }
  if ( v45 )
  {
    v59 = a2;
    v60 = v63;
    v58 = 0LL;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v64, &v58);
      if ( (_DWORD)result )
        break;
      v55 = KeGetPrcb(v64);
      *(_DWORD *)(v55 + 24244) = *(_DWORD *)(v55 + 24248);
    }
  }
  return result;
}
