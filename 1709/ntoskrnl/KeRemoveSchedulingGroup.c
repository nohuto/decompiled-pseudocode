/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1400D1654
 * Callers:
 *     PspRemoveCpuRateControl @ 0x14050A35C (PspRemoveCpuRateControl.c)
 *     PspEstablishJobHierarchy @ 0x14050C5C4 (PspEstablishJobHierarchy.c)
 *     MiSessionObjectDelete @ 0x1406E2F20 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x1407177A0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400D1BDC (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400D1C94 (KiUpdateMinimumWeight.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 i; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  unsigned __int16 **v12; // rcx
  __int64 v13; // r8
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+70h] [rbp+8h] BYREF

  KeAcquireInStackQueuedSpinLock(&KiSchedulingGroupLock, &LockHandle);
  v2 = *((_QWORD *)a1 + 7);
  v3 = (unsigned __int16 **)*((_QWORD *)a1 + 8);
  if ( *(unsigned __int16 **)(v2 + 8) != a1 + 28 || *v3 != a1 + 28 )
    __fastfail(3u);
  *v3 = (unsigned __int16 *)v2;
  v4 = 0LL;
  *(_QWORD *)(v2 + 8) = v3;
  v5 = 0LL;
  v6 = KeNumberProcessors_0;
  for ( i = *((_QWORD *)a1 + 12); (unsigned int)v5 < v6; v5 = (unsigned int)(v5 + 1) )
  {
    v8 = KiProcessorBlock[v5];
    v9 = 212LL * (unsigned int)v5;
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( *(_QWORD *)(v8 + 48) );
    }
    v10 = &a1[v9 + 100];
    v11 = *(_QWORD *)v10;
    v12 = (unsigned __int16 **)*((_QWORD *)v10 + 1);
    if ( *(unsigned __int16 **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
      __fastfail(3u);
    *v12 = (unsigned __int16 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    v4 += *(_QWORD *)&a1[v9 + 92];
  }
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v15 = *a1;
    if ( i )
      *(_DWORD *)(i + 20) -= v15;
    else
      KiGroupSchedulingTotalWeight -= v15;
  }
  if ( i )
  {
    if ( *(_QWORD *)(i + 80) == i + 80 )
    {
      *(_DWORD *)(i + 16) = 0;
      *(_DWORD *)(i + 12) = 0;
      goto LABEL_15;
    }
    v13 = i;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_15;
    }
    v13 = 0LL;
  }
  if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v13) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL);
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
