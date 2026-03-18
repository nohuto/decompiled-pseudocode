/*
 * XREFs of MiEndingOffsetWithLock @ 0x140128880
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x140057A28 (MiFinishMdlForMappedFileFault.c)
 *     MiViewMayContainPage @ 0x1400823C0 (MiViewMayContainPage.c)
 *     MiReadyFlushMdlToWrite @ 0x1400B8E08 (MiReadyFlushMdlToWrite.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiEndingOffset @ 0x140128958 (MiEndingOffset.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  signed __int32 v5; // ett
  __int64 v6; // rdi
  struct _KPRCB *v7; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v10; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    _m_prefetchw(v2);
    v5 = *v2 & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(v2, v5 + 1, v5) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      ExpWaitForSpinLockSharedAndAcquire(v2, CurrentIrql);
    }
  }
  v6 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  v7 = KeGetCurrentPrcb();
  SchedulerAssist = v7->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( v7->NestingLevel <= 1u )
    {
      v10 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v10;
      if ( !v10 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(v7);
    }
  }
  __writecr8(CurrentIrql);
  return v6;
}
