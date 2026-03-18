/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x14050A0DC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeInsertSchedulingGroup @ 0x1400D17B8 (KeInsertSchedulingGroup.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 RateControl; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  void *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a2;
    v6 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
      __fastfail(3u);
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v6 + 8) = v3;
    P[0] = v3;
  }
  if ( a1 )
  {
    while ( (*(_DWORD *)(a1 + 1304) & 0x20) == 0 )
    {
      RateControl = PspAllocateRateControl(2LL);
      *(_QWORD *)(a1 + 1008) = RateControl;
      if ( !RateControl )
        goto LABEL_26;
      *(_DWORD *)(RateControl + 132) |= 3u;
      *(_DWORD *)(RateControl + 128) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 44LL) = *(_DWORD *)(RateControl + 128);
      *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 40LL) |= 0x40u;
      v15 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
      v3 = v15;
      if ( !v15 )
      {
        PspFreeRateControl(*(PVOID *)(a1 + 1008));
        *(_QWORD *)(a1 + 1008) = 0LL;
LABEL_26:
        while ( 1 )
        {
          v17 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            break;
          v18 = *(_QWORD *)(P[0] + 16LL);
          v19 = *(void **)(v18 + 1008);
          if ( v19 )
          {
            PspFreeRateControl(v19);
            *(_QWORD *)(v18 + 1008) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v18 + 1304), 0xFFFFFFDF);
          }
          v20 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v21 = (_QWORD *)v17[1], (_QWORD *)*v21 != v17) )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          ExFreePoolWithTag(v17, 0x624A7350u);
        }
        return 3221225626LL;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x20u);
      v15[2] = a1;
      v16 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) != P )
        __fastfail(3u);
      *v3 = P[0];
      v3[1] = P;
      *(_QWORD *)(v16 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1072);
      if ( !a1 )
        break;
    }
  }
  while ( v3 != P )
  {
    v7 = v3[2];
    v8 = *(_QWORD *)(v7 + 1072);
    v9 = *(_QWORD *)(v7 + 1008);
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 1008) + 128LL;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 1016);
      if ( PsCpuFairShareEnabled && v10 )
        ObfReferenceObjectWithTag(*(PVOID *)(v7 + 1112), 0x624A7350u);
    }
    KeInsertSchedulingGroup(v9 + 128, *(_QWORD *)(v9 + 128), v10);
    if ( *(_QWORD *)(v7 + 1016) )
      PspEnumJobsAndProcessesInJobHierarchy((PVOID)v7, 0LL, 8);
    PspEnumJobsAndProcessesInJobHierarchy((PVOID)v7, *(_QWORD *)(v7 + 1008), 8);
    v11 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v12 = (_QWORD *)v3[1], (_QWORD *)*v12 != v3) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v3, 0x624A7350u);
    v3 = (_QWORD *)P[0];
  }
  return 0LL;
}
