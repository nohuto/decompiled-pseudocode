/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0
 * Callers:
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiRecheckVaVm @ 0x140066A38 (MiRecheckVaVm.c)
 *     KeQueryAffinityProcess @ 0x14008A7F0 (KeQueryAffinityProcess.c)
 *     KiRundownMutants @ 0x1400A95EC (KiRundownMutants.c)
 *     KeSetLegacyAffinityThread @ 0x1400AC100 (KeSetLegacyAffinityThread.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MmLockLoadedModuleListShared @ 0x1400D5670 (MmLockLoadedModuleListShared.c)
 *     MiAbortCombineScan @ 0x1400ED698 (MiAbortCombineScan.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140107730 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x1401151D8 (KeQueryBasePriorityThread.c)
 *     MiProtoFault @ 0x1401269B8 (MiProtoFault.c)
 *     DbgEnumerateCallback @ 0x1401323C0 (DbgEnumerateCallback.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140132910 (vDbgPrintExWithPrefixInternal.c)
 *     KeQueryCpuSetsProcess @ 0x140208D28 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140208FF0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14020E17C (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14022DEF8 (MiGetSharedProtosAtDpcLevel.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140250AA8 (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x140279214 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x140279674 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1407BC61C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    if ( v1 != _InterlockedCompareExchange(SpinLock, v1 + 1, v1) )
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, 0xFFu);
  }
}
