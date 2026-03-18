/*
 * XREFs of KiHeteroChooseTargetProcessor @ 0x1402482DC
 * Callers:
 *     KiDeferredReadyThread @ 0x1400FBA30 (KiDeferredReadyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiConvertDynamicHeteroPolicy @ 0x140248000 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14024826C (KiGenerateHeteroSets.c)
 *     KiSelectProcessorToPreempt @ 0x1402486B0 (KiSelectProcessorToPreempt.c)
 *     KiSelectCandidateProcessor @ 0x14024C410 (KiSelectCandidateProcessor.c)
 */

__int64 __fastcall KiHeteroChooseTargetProcessor(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v4; // eax
  __int64 v6; // r12
  _QWORD *v7; // r13
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
  __int64 v22; // rcx
  unsigned __int8 v23; // r9
  int v24; // edx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v28; // rax
  char v29; // cl
  int v30; // edx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  struct _KPRCB *v33; // rdi
  _DWORD *v34; // rdi
  bool v35; // zf
  _DWORD v37[2]; // [rsp+30h] [rbp-38h] BYREF
  int v38; // [rsp+38h] [rbp-30h]
  int v39; // [rsp+3Ch] [rbp-2Ch]
  __int64 v40; // [rsp+40h] [rbp-28h] BYREF
  __int64 v41; // [rsp+48h] [rbp-20h] BYREF
  __int64 v42[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+50h]
  int v45; // [rsp+C0h] [rbp+58h] BYREF
  _DWORD *v46; // [rsp+C8h] [rbp+60h]

  v46 = a4;
  v4 = *(unsigned __int8 *)(a2 + 125);
  v6 = *a3;
  v7 = (_QWORD *)a1;
  v44 = v4;
  if ( v4 >= 5 )
  {
    v4 = KiConvertDynamicHeteroPolicy(a2, a2, a1);
    v44 = v4;
  }
  v8 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v9 = *(_QWORD *)(v8 + 192);
  while ( 1 )
  {
    v10 = KiGenerateHeteroSets(v9, v6, v4, v42, &v41, &v40);
    v11 = *(_QWORD *)v9;
    v12 = v40;
    if ( (*(_QWORD *)v9 & v40) != 0 || v10 || (v12 = v40, (*(_QWORD *)(v9 + 80) & v40) != 0) )
    {
      v13 = v41;
    }
    else
    {
      v12 = v6;
      v40 = v6;
      v13 = v6;
      v41 = v6;
      v42[0] = v6;
    }
    v14 = v12 & v11;
    if ( !v14 )
      break;
    if ( v7[25] != v7[3115] )
    {
      v13 = v41;
      if ( (v14 & *(_QWORD *)(v9 + 8)) != 0 )
        v14 &= *(_QWORD *)(v9 + 8);
    }
    v15 = 0;
    v16 = v42[0] & v14;
    if ( (v42[0] & v14) != 0 )
      goto LABEL_16;
    v16 = v13 & v14;
    if ( (v13 & v14) != 0 )
    {
      v15 = 1;
LABEL_16:
      v14 = v16;
    }
    if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) )
    {
      v17 = v7[24];
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
        v23 = 0;
        if ( v14 )
        {
          v24 = *(unsigned __int16 *)(v9 + 144) << 6;
          do
          {
            _BitScanForward64(&v25, v14);
            v38 = KiProcessorNumberToIndexMappingTable[v24 + (v25 & 0x3F)];
            v26 = KiProcessorBlock[v38];
            if ( !v19 || *(_BYTE *)(v26 + 23859) > v23 )
            {
              v19 = KiProcessorBlock[v38];
              v23 = *(_BYTE *)(v26 + 23859);
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
        v22 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(v8 + 208)
                                                               + (((_BYTE)v21 + v20) & 0x3F)];
        v37[1] = v22;
        v19 = KiProcessorBlock[v22];
      }
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v45 = 0;
    *v46 = 1;
    while ( 1 )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      do
        KeYieldProcessorEx(&v45);
      while ( *(_QWORD *)(v19 + 48) );
    }
    if ( !*(_BYTE *)(v19 + 35) )
      return v19;
LABEL_49:
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    v4 = v44;
  }
  if ( v13 == v12 )
    v13 = 0LL;
  v28 = KiSelectProcessorToPreempt(a2, v8, v12, v13);
  v19 = v28;
  if ( (v12 & *(_QWORD *)(v28 + 200)) == 0 )
  {
    v29 = *(_BYTE *)(v28 + 209);
    v30 = *(unsigned __int8 *)(v28 + 208);
    _BitScanForward64(&v31, __ROR8__(v12, v29));
    v32 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v30 + (((_BYTE)v31 + v29) & 0x3F)];
    v39 = v32;
    v19 = KiProcessorBlock[v32];
  }
  v33 = KeGetCurrentPrcb();
  v37[0] = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)v33, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)v33, 0);
    do
      KeYieldProcessorEx(v37);
    while ( *(_QWORD *)(v19 + 48) );
  }
  v7 = (_QWORD *)a1;
  if ( (*(_QWORD *)v9 & v40) != 0 )
    goto LABEL_49;
  v34 = v46;
  v35 = (*(_BYTE *)(v19 + 35) & 2) == 0;
  *v46 = 0;
  if ( !v35 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 48), 0LL);
    KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
    v19 = KiSelectCandidateProcessor(v19, a2, v40);
    if ( (*(_BYTE *)(v19 + 35) & 1) == 0 )
      *v34 = 1;
  }
  return v19;
}
