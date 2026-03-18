/*
 * XREFs of PpmParkDistributeUtility @ 0x140047310
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x140047270 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x140233F90 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x140234254 (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14023439C (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int64 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  unsigned __int16 v8; // r14
  __int64 v9; // r10
  unsigned __int8 v10; // bl
  char v11; // di
  char v12; // r11
  int v13; // r13d
  unsigned __int64 v14; // rcx
  int v15; // r9d
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int8 v22; // r10
  unsigned __int8 v23; // r14
  unsigned int v24; // ebx
  int v25; // r11d
  unsigned __int16 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v28; // r11d
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned int v32; // r9d
  unsigned int v33; // eax
  unsigned int v34; // r10d
  int v35; // r9d
  unsigned __int16 v36; // cx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  unsigned int v39; // ecx
  int v40; // eax
  __int64 result; // rax
  _DWORD *v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 Prcb; // rax
  __int64 v45; // rax
  unsigned int v46; // ecx
  __int64 v47; // r9
  int v48; // edi
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rax
  char v52; // [rsp+20h] [rbp-38h]
  int v53; // [rsp+24h] [rbp-34h]
  __int64 v54; // [rsp+28h] [rbp-30h]
  unsigned __int64 v55; // [rsp+30h] [rbp-28h]
  unsigned __int16 *v56; // [rsp+38h] [rbp-20h] BYREF
  __int64 v57; // [rsp+40h] [rbp-18h]
  __int16 v58; // [rsp+48h] [rbp-10h]
  unsigned __int64 v59; // [rsp+A0h] [rbp+48h]
  unsigned __int16 v61; // [rsp+B0h] [rbp+58h]

  v61 = a3;
  v7 = a6;
  v8 = a3;
  v9 = 0LL;
  v58 = a3;
  v10 = 0;
  v56 = 0LL;
  v11 = 0;
  v53 = a3;
  v12 = 0;
  v13 = a3;
  v14 = a2 ^ a1;
  v59 = v14;
  v55 = v14;
  v15 = a3;
  while ( v14 )
  {
LABEL_3:
    _BitScanForward64(&v16, v14);
    v15 = a3;
    v57 = v14 & ~(1LL << v16);
    a6 = KiProcessorNumberToIndexMappingTable[64 * a3 + (unsigned __int8)v16];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v17 = 0LL;
    else
      v17 = KiProcessorBlock[a6];
    if ( *(_BYTE *)(v17 + 23986) )
    {
      ++v12;
      v9 |= *(_QWORD *)(v17 + 200);
    }
    else
    {
      ++v11;
    }
    if ( PpmHeteroImplementationGeneration )
    {
      v18 = *(_DWORD *)(v17 + 24372);
      v19 = *(_DWORD *)(v17 + 24368);
      if ( v19 )
        v18 = (v19 * v18) >> 16;
      v7 += v18;
    }
    else
    {
      v7 += *(_DWORD *)(v17 + 24372);
    }
    a3 = v58;
    ++v10;
    v14 = v57;
  }
  while ( 1 )
  {
    v58 = ++a3;
    if ( a3 >= (unsigned int)(v15 + 1) )
      break;
    v14 = *(_QWORD *)(8LL * a3 + 8);
    if ( v14 )
      goto LABEL_3;
  }
  v20 = a2;
  v54 = v9;
  v52 = v12;
  v56 = 0LL;
  while ( v20 )
  {
LABEL_66:
    _BitScanForward64(&v43, v20);
    v13 = v8;
    v20 &= ~(1LL << v43);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v8 + (unsigned __int8)v43];
    Prcb = KeGetPrcb(a6);
    if ( PpmHeteroImplementationGeneration )
      v7 += PpmHeteroUtilityToNormalizedUtility(
              Prcb + 23936,
              (unsigned int)(*(_DWORD *)(Prcb + 24372) - *(_DWORD *)(Prcb + 24376)));
    else
      v7 += *(_DWORD *)(Prcb + 24372) - *(_DWORD *)(Prcb + 24376);
  }
  while ( ++v8 < (unsigned int)(v13 + 1) )
  {
    v20 = *(_QWORD *)(8LL * v8 + 8);
    if ( v20 )
      goto LABEL_66;
  }
  v21 = v55;
  if ( v10 <= 1u )
    v10 = 1;
  v22 = a4;
  if ( a4 >= v10 )
    v22 = v10;
  v23 = v22;
  if ( v22 <= 1u )
    v23 = 1;
  if ( v10 == 8 )
    v24 = v7 >> 3;
  else
    v24 = v7 / v10;
  if ( v23 != 1 )
    v7 /= v23;
  if ( v11 && v52 )
  {
    v57 = v54;
    v58 = v61;
    v56 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)KeEnumerateNextProcessor(&a6, &v56) )
        goto LABEL_28;
      v45 = KeGetPrcb(a6);
      v21 ^= *(_QWORD *)(v45 + 200);
      v46 = PpmHeteroNormalizedUtilityToUtility(v45 + 23936, v7);
      if ( v46 > *(_DWORD *)(v47 + 436) )
        goto LABEL_75;
      if ( a5 )
        break;
LABEL_76:
      if ( v23 )
        --v23;
    }
    if ( *(_DWORD *)(v47 + 440) > v46 )
      v46 = *(_DWORD *)(v47 + 440);
LABEL_75:
    *(_DWORD *)(v47 + 436) = v46;
    goto LABEL_76;
  }
LABEL_28:
  v25 = v53;
  v26 = v61;
  v58 = v61;
  v27 = v21;
  v56 = 0LL;
  while ( 1 )
  {
    v28 = v25 + 1;
    if ( !v27 )
      break;
LABEL_30:
    _BitScanForward64(&v29, v27);
    v25 = v26;
    v57 = v27 & ~(1LL << v29);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v26 + (unsigned __int8)v29];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v30 = 0LL;
    else
      v30 = KiProcessorBlock[a6];
    v31 = *(_DWORD *)(v30 + 24368);
    v32 = *(_DWORD *)(v30 + 24372);
    if ( v31 )
      v33 = (v32 * v31) >> 16;
    else
      v33 = *(_DWORD *)(v30 + 24372);
    if ( v24 <= v33 )
    {
      v21 ^= *(_QWORD *)(v30 + 200);
      v34 = v7;
      if ( v31 )
      {
        if ( v31 == 0x10000 )
          v34 = (unsigned __int16)v7;
        else
          v34 = (v7 << 16) / v31;
      }
      if ( v34 > v32 )
        goto LABEL_40;
      if ( a5 )
      {
        if ( *(_DWORD *)(v30 + 24376) > v34 )
          v34 = *(_DWORD *)(v30 + 24376);
LABEL_40:
        *(_DWORD *)(v30 + 24372) = v34;
      }
    }
    v26 = v58;
    v27 = v57;
  }
  while ( 1 )
  {
    v58 = ++v26;
    if ( v26 >= v28 )
      break;
    v27 = *(_QWORD *)(8LL * v26 + 8);
    if ( v27 )
      goto LABEL_30;
  }
  v35 = v53;
  v36 = v61;
  v58 = v61;
  v56 = 0LL;
  while ( v21 )
  {
LABEL_46:
    _BitScanForward64(&v37, v21);
    v35 = v36;
    v57 = v21 & ~(1LL << v37);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v36 + (unsigned __int8)v37];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v38 = 0LL;
    else
      v38 = KiProcessorBlock[a6];
    v39 = *(_DWORD *)(v38 + 24368);
    v40 = v24;
    if ( v39 )
    {
      if ( v39 == 0x10000 )
        v40 = (unsigned __int16)v24;
      else
        v40 = (v24 << 16) / v39;
    }
    v36 = v58;
    v21 = v57;
    *(_DWORD *)(v38 + 24372) = v40;
  }
  while ( 1 )
  {
    result = ++v36;
    v58 = v36;
    if ( v36 >= (unsigned int)(v35 + 1) )
      break;
    v21 = *(_QWORD *)(8LL * v36 + 8);
    if ( v21 )
      goto LABEL_46;
  }
  v42 = a7;
  if ( a7 )
  {
    v48 = 0;
    v57 = v59;
    v56 = 0LL;
    v58 = v61;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&a6, &v56);
      if ( (_DWORD)result )
        break;
      v49 = KeGetPrcb(a6);
      v50 = *(_DWORD *)(v49 + 24372);
      if ( v50 > 0x2710 )
        v48 += PpmHeteroUtilityToNormalizedUtility(v49 + 23936, v50 - 10000);
    }
    *v42 = v48;
  }
  if ( a5 )
  {
    v57 = a2;
    v58 = v61;
    v56 = 0LL;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&a6, &v56);
      if ( (_DWORD)result )
        break;
      v51 = KeGetPrcb(a6);
      *(_DWORD *)(v51 + 24372) = *(_DWORD *)(v51 + 24376);
    }
  }
  return result;
}
