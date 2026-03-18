/*
 * XREFs of KeRemoveSchedulingGroup @ 0x1400A6DEC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140530FA8 (PspEstablishJobHierarchy.c)
 *     PspRemoveCpuRateControl @ 0x140552120 (PspRemoveCpuRateControl.c)
 *     MiSessionObjectDelete @ 0x14074D970 (MiSessionObjectDelete.c)
 *     PspEstablishDfssHierarchy @ 0x14077B7B0 (PspEstablishDfssHierarchy.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiAssignSchedulingGroupWeights @ 0x1400A7AF4 (KiAssignSchedulingGroupWeights.c)
 *     KiUpdateMinimumWeight @ 0x1400A7BAC (KiUpdateMinimumWeight.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KeRemoveSchedulingGroup(unsigned __int16 *a1)
{
  __int64 v2; // rdx
  unsigned __int16 **v3; // rcx
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned int v6; // r12d
  __int64 i; // rdi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v9; // rsi
  __int64 v10; // r13
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  unsigned __int16 **v13; // rcx
  __int64 v14; // r8
  int v16; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+70h] [rbp+8h] BYREF

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
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = KiProcessorBlock[v5];
    v10 = 212LL * (unsigned int)v5;
    v18 = 0;
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, v2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)(v9 + 48) );
    }
    v11 = &a1[v10 + 100];
    v12 = *(_QWORD *)v11;
    v13 = (unsigned __int16 **)*((_QWORD *)v11 + 1);
    if ( *(unsigned __int16 **)(*(_QWORD *)v11 + 8LL) != v11 || *v13 != v11 )
      __fastfail(3u);
    *v13 = (unsigned __int16 *)v12;
    *(_QWORD *)(v12 + 8) = v13;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
    KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    v4 += *(_QWORD *)&a1[v10 + 92];
  }
  if ( (*((_DWORD *)a1 + 1) & 1) == 0 )
  {
    v16 = *a1;
    if ( i )
      *(_DWORD *)(i + 20) -= v16;
    else
      KiGroupSchedulingTotalWeight -= v16;
  }
  if ( i )
  {
    if ( *(_QWORD *)(i + 80) == i + 80 )
    {
      *(_DWORD *)(i + 16) = 0;
      *(_DWORD *)(i + 12) = 0;
      goto LABEL_15;
    }
    v14 = i;
  }
  else
  {
    if ( (__int64 *)KiSchedulingGroupList == &KiSchedulingGroupList )
    {
      KiGroupSchedulingMinimumWeight = 0;
      KiGroupSchedulingMinimumRate = 0;
      goto LABEL_15;
    }
    v14 = 0LL;
  }
  if ( (unsigned __int8)KiUpdateMinimumWeight(*((_DWORD *)a1 + 1) & 1, 0LL, v14) || (*((_DWORD *)a1 + 1) & 1) == 0 )
    KiAssignSchedulingGroupWeights(*((_DWORD *)a1 + 1) & 1, 0LL);
LABEL_15:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v4;
}
