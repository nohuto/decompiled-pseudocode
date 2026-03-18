/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x14020A5B8
 * Callers:
 *     KiDeferredReadyThread @ 0x140072C60 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14020A308 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14020A548 (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x14020A8D0 (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x14020E17C (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(_QWORD *a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  __int64 v6; // r12
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  int v15; // r10d
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  char v20; // cl
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // r9
  int v23; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  char v29; // cl
  int v30; // edx
  unsigned __int64 v31; // rax
  _DWORD *v32; // rdi
  bool v33; // zf
  int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch]
  int v37; // [rsp+38h] [rbp-28h]
  int v38; // [rsp+3Ch] [rbp-24h]
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  __int64 v40; // [rsp+48h] [rbp-18h] BYREF
  __int64 v41; // [rsp+50h] [rbp-10h] BYREF
  __int64 v42; // [rsp+58h] [rbp-8h]
  unsigned int v43; // [rsp+A8h] [rbp+48h]
  int v44; // [rsp+B0h] [rbp+50h] BYREF
  _DWORD *v45; // [rsp+B8h] [rbp+58h]

  v45 = a4;
  v4 = *(unsigned __int8 *)(a2 + 125);
  v6 = *a3;
  v42 = *a3;
  v43 = v4;
  if ( v4 >= 5 )
  {
    v4 = KiConvertDynamicHeteroPolicy(a2, a2, (__int64)a1);
    v43 = v4;
  }
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v9 = *(_QWORD *)(v8 + 192);
  while ( 1 )
  {
    v10 = KiGenerateHeteroSets(v9, v6, v4, &v41, &v40, &v39);
    v11 = *(_QWORD *)v9;
    v12 = v39;
    if ( (*(_QWORD *)v9 & v39) != 0 || v10 || (v12 = v39, (*(_QWORD *)(v9 + 80) & v39) != 0) )
    {
      v13 = v40;
    }
    else
    {
      v12 = v6;
      v39 = v6;
      v13 = v6;
      v40 = v6;
      v41 = v6;
    }
    v14 = v12 & v11;
    if ( !v14 )
      break;
    if ( a1[25] != a1[3115] )
    {
      v13 = v40;
      if ( (v14 & *(_QWORD *)(v9 + 8)) != 0 )
        v14 &= *(_QWORD *)(v9 + 8);
    }
    v15 = 0;
    v16 = v41 & v14;
    if ( (v41 & v14) != 0 )
      goto LABEL_16;
    v16 = v13 & v14;
    if ( (v13 & v14) != 0 )
    {
      v15 = 1;
LABEL_16:
      v14 = v16;
    }
    if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) )
    {
      v17 = a1[24];
      v18 = *(_DWORD *)(a2 + 120) & 3;
      if ( (v14 & *(_QWORD *)(v17 + 8 * v18 + 296)) != 0 )
        v14 &= *(_QWORD *)(v17 + 8 * v18 + 296);
    }
    v19 = v8;
    if ( (v14 & *(_QWORD *)(v8 + 200)) == 0 || v15 )
    {
      if ( v15 )
      {
        v19 = 0LL;
        v22 = 0;
        if ( v14 )
        {
          v23 = *(unsigned __int16 *)(v9 + 144) << 6;
          do
          {
            _BitScanForward64(&v24, v14);
            v25 = (unsigned int)KiProcessorNumberToIndexMappingTable[v23 + (v24 & 0x3F)];
            v37 = v25;
            v26 = KiProcessorBlock[v25];
            if ( !v19 || *(_BYTE *)(v26 + 23859) > v22 )
            {
              v19 = v26;
              v22 = *(_BYTE *)(v26 + 23859);
            }
            v14 &= ~*(_QWORD *)(v26 + 200);
          }
          while ( v14 );
        }
      }
      else
      {
        v20 = *(_BYTE *)(v8 + 209);
        v21 = v14 & *(_QWORD *)(v8 + 24920);
        if ( !v21 )
          v21 = v14;
        _BitScanForward64(&v21, __ROR8__(v21, v20));
        v36 = KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v8 + 208) + (((_BYTE)v21 + v20) & 0x3F)];
        v19 = KiProcessorBlock[v36];
      }
    }
    v44 = 0;
    *v45 = 1;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v44);
      while ( *(_QWORD *)(v19 + 48) );
    }
    v6 = v42;
    if ( !*(_BYTE *)(v19 + 35) )
      return v19;
LABEL_47:
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    v4 = v43;
  }
  if ( v13 == v12 )
    v13 = 0LL;
  v27 = KiSelectProcessorToPreempt(a2, v8, v12, v13);
  v19 = v27;
  if ( (v12 & *(_QWORD *)(v27 + 200)) == 0 )
  {
    v29 = *(_BYTE *)(v27 + 209);
    v30 = *(unsigned __int8 *)(v27 + 208);
    _BitScanForward64(&v31, __ROR8__(v12, v29));
    v38 = KiProcessorNumberToIndexMappingTable[64 * v30 + (((_BYTE)v31 + v29) & 0x3F)];
    v19 = KiProcessorBlock[v38];
  }
  v35 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v35);
    while ( *(_QWORD *)(v19 + 48) );
  }
  v6 = v42;
  if ( (*(_QWORD *)v9 & v39) != 0 )
    goto LABEL_47;
  v32 = v45;
  v33 = (*(_BYTE *)(v19 + 35) & 2) == 0;
  *v45 = 0;
  if ( !v33 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    v19 = KiSelectCandidateProcessor(v19, a2, v39, v28);
    if ( (*(_BYTE *)(v19 + 35) & 1) == 0 )
      *v32 = 1;
  }
  return v19;
}
