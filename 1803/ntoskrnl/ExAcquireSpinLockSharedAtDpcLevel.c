/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0
 * Callers:
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     KeQueryBasePriorityThread @ 0x140060CB0 (KeQueryBasePriorityThread.c)
 *     KeQueryAffinityProcess @ 0x14006D000 (KeQueryAffinityProcess.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     DbgEnumerateCallback @ 0x1400D2AC0 (DbgEnumerateCallback.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     KeQueryCpuSetsProcess @ 0x140246800 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14024C410 (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1402680B4 (MiGetSharedProtosAtDpcLevel.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140286508 (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1402AC3E4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x1402AC860 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v4; // ett
  int v5; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v5 = SchedulerAssist[5];
        SchedulerAssist[5] = v5 + 1;
        if ( v5 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v4 = *SpinLock & 0x7FFFFFFF;
    if ( v4 != _InterlockedCompareExchange(SpinLock, v4 + 1, v4) )
    {
      KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, 0xFFu);
    }
  }
}
