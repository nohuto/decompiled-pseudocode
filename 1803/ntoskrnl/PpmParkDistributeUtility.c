/*
 * XREFs of PpmParkDistributeUtility @ 0x140035950
 * Callers:
 *     PpmParkDistributeAllUtility @ 0x140035CE0 (PpmParkDistributeAllUtility.c)
 *     PpmHeteroDistributeUtility @ 0x14027F470 (PpmHeteroDistributeUtility.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmHeteroNormalizedUtilityToUtility @ 0x14027F754 (PpmHeteroNormalizedUtilityToUtility.c)
 *     PpmHeteroUtilityToNormalizedUtility @ 0x14027F898 (PpmHeteroUtilityToNormalizedUtility.c)
 */

__int16 __fastcall PpmParkDistributeUtility(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int v7; // esi
  __int64 v8; // r11
  int v9; // r14d
  unsigned __int8 v10; // bl
  char v11; // di
  char v12; // r10
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r8
  int v17; // r9d
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // r14d
  unsigned int v23; // esi
  unsigned __int64 v24; // rcx
  int v25; // r11d
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int v28; // ecx
  unsigned int v29; // r10d
  unsigned int v30; // eax
  unsigned int v31; // r9d
  int v32; // r9d
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // rbx
  __int64 Prcb; // rax
  __int64 v40; // rdx
  unsigned __int8 v41; // bl
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  unsigned int v45; // r9d
  unsigned int v46; // eax
  unsigned int v47; // eax
  int v48; // edi
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rax
  int v53; // [rsp+20h] [rbp-38h]
  __int64 v54; // [rsp+28h] [rbp-30h]
  unsigned __int16 *v55; // [rsp+30h] [rbp-28h] BYREF
  __int64 v56; // [rsp+38h] [rbp-20h]
  unsigned __int16 v57; // [rsp+40h] [rbp-18h]
  __int64 v58; // [rsp+A0h] [rbp+48h]
  char v61; // [rsp+B8h] [rbp+60h]

  v7 = a6;
  v8 = 0LL;
  v9 = a3;
  v10 = 0;
  v57 = a3;
  v11 = 0;
  v55 = 0LL;
  v12 = 0;
  v53 = v9;
  v58 = a2 ^ a1;
  v14 = a2 ^ a1;
  v15 = a2 ^ a1;
  v17 = v9;
  while ( v15 )
  {
LABEL_3:
    v17 = v57;
    _BitScanForward64(&v18, v15);
    v56 = v15 & ~(1LL << v18);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v57 + (unsigned __int8)v18];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v19 = 0LL;
    else
      v19 = KiProcessorBlock[a6];
    if ( *(_BYTE *)(v19 + 23858) )
    {
      ++v12;
      v8 |= *(_QWORD *)(v19 + 200);
    }
    else
    {
      ++v11;
    }
    v20 = *(_DWORD *)(v19 + 24244);
    if ( PpmHeteroImplementationGeneration )
    {
      v21 = *(_DWORD *)(v19 + 24240);
      if ( v21 )
        v20 = (v21 * v20) >> 16;
    }
    v15 = v56;
    ++v10;
    v7 += v20;
  }
  while ( ++v57 < (unsigned int)(v17 + 1) )
  {
    v56 = *(_QWORD *)(8LL * v57 + 8);
    v15 = v56;
    if ( v56 )
      goto LABEL_3;
  }
  v54 = v8;
  v61 = v12;
  v57 = v9;
  v56 = a2;
  v55 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&a6, &v55) )
  {
    Prcb = KeGetPrcb(a6);
    v40 = (unsigned int)(*(_DWORD *)(Prcb + 24244) - *(_DWORD *)(Prcb + 24248));
    if ( PpmHeteroImplementationGeneration )
      LODWORD(v40) = PpmHeteroUtilityToNormalizedUtility(Prcb + 23808, v40);
    v7 += v40;
  }
  if ( v10 <= 1u )
    v10 = 1;
  if ( a4 >= v10 )
    a4 = v10;
  if ( a4 <= 1u )
    a4 = 1;
  v22 = v7 / v10;
  v23 = v7 / a4;
  if ( v11 && v61 )
  {
    v57 = a3;
    v56 = v54;
    v55 = 0LL;
    while ( 1 )
    {
      v41 = a4;
      if ( (unsigned int)KeEnumerateNextProcessor(&a6, &v55) )
        break;
      v42 = KeGetPrcb(a6);
      v14 ^= *(_QWORD *)(v42 + 200);
      v43 = PpmHeteroNormalizedUtilityToUtility(v42 + 23808, v23);
      v45 = v43;
      if ( v43 <= *(_DWORD *)(v44 + 436) )
      {
        if ( a5 )
        {
          v46 = *(_DWORD *)(v44 + 440);
          if ( v46 <= v45 )
            v46 = v45;
          *(_DWORD *)(v44 + 436) = v46;
        }
      }
      else
      {
        *(_DWORD *)(v44 + 436) = v43;
      }
      --a4;
      if ( !v41 )
        a4 = 0;
    }
  }
  v24 = v14;
  v25 = v53;
  v57 = a3;
  while ( v24 )
  {
LABEL_24:
    v25 = v57;
    _BitScanForward64(&v26, v24);
    v56 = v24 & ~(1LL << v26);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v57 + (unsigned __int8)v26];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v27 = 0LL;
    else
      v27 = KiProcessorBlock[a6];
    v28 = *(_DWORD *)(v27 + 24240);
    v29 = *(_DWORD *)(v27 + 24244);
    if ( v28 )
      v30 = (v29 * v28) >> 16;
    else
      v30 = *(_DWORD *)(v27 + 24244);
    if ( v22 <= v30 )
    {
      v14 ^= *(_QWORD *)(v27 + 200);
      v31 = v23;
      if ( v28 )
      {
        if ( v28 == 0x10000 )
          v31 = (unsigned __int16)v23;
        else
          v31 = (v23 << 16) / v28;
      }
      if ( v31 <= v29 )
      {
        if ( !a5 )
          goto LABEL_29;
        v47 = *(_DWORD *)(v27 + 24248);
        v24 = v56;
        if ( v47 <= v31 )
          v47 = v31;
        *(_DWORD *)(v27 + 24244) = v47;
      }
      else
      {
        v24 = v56;
        *(_DWORD *)(v27 + 24244) = v31;
      }
    }
    else
    {
LABEL_29:
      v24 = v56;
    }
  }
  while ( ++v57 < (unsigned int)(v25 + 1) )
  {
    v56 = *(_QWORD *)(8LL * v57 + 8);
    v24 = v56;
    if ( v56 )
      goto LABEL_24;
  }
  v32 = v53;
  v57 = a3;
  v55 = 0LL;
  while ( v14 )
  {
LABEL_38:
    v32 = v57;
    _BitScanForward64(&v33, v14);
    v56 = v14 & ~(1LL << v33);
    a6 = KiProcessorNumberToIndexMappingTable[64 * v57 + (unsigned __int8)v33];
    if ( a6 >= (unsigned int)KeNumberProcessors_0 )
      v34 = 0LL;
    else
      v34 = KiProcessorBlock[a6];
    v35 = *(_DWORD *)(v34 + 24240);
    v36 = v22;
    if ( v35 )
    {
      if ( v35 == 0x10000 )
        v36 = (unsigned __int16)v22;
      else
        v36 = (v22 << 16) / v35;
    }
    v14 = v56;
    *(_DWORD *)(v34 + 24244) = v36;
  }
  while ( 1 )
  {
    LOWORD(v37) = ++v57;
    if ( v57 >= (unsigned int)(v32 + 1) )
      break;
    v56 = *(_QWORD *)(8LL * v57 + 8);
    v14 = v56;
    if ( v56 )
      goto LABEL_38;
  }
  v38 = a7;
  if ( a7 )
  {
    v48 = 0;
    v56 = v58;
    v55 = 0LL;
    v57 = a3;
    while ( 1 )
    {
      v37 = KeEnumerateNextProcessor(&a6, &v55);
      if ( v37 )
        break;
      v49 = KeGetPrcb(a6);
      v50 = *(_DWORD *)(v49 + 24244);
      if ( v50 > 0x2710 )
        v48 += PpmHeteroUtilityToNormalizedUtility(v49 + 23808, v50 - 10000);
    }
    *v38 = v48;
  }
  if ( a5 )
  {
    v56 = a2;
    v57 = a3;
    v55 = 0LL;
    while ( 1 )
    {
      v37 = KeEnumerateNextProcessor(&a6, &v55);
      if ( v37 )
        break;
      v51 = KeGetPrcb(a6);
      *(_DWORD *)(v51 + 24244) = *(_DWORD *)(v51 + 24248);
    }
  }
  return v37;
}
