/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50
 * Callers:
 *     KeQueryBasePriorityThread @ 0x14000786C (KeQueryBasePriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14001A720 (KeSetLegacyAffinityThread.c)
 *     DbgEnumerateCallback @ 0x14003C9F0 (DbgEnumerateCallback.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1400690F0 (vDbgPrintExWithPrefixInternal.c)
 *     MiProtoFault @ 0x14006B9C4 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     MmLockLoadedModuleListShared @ 0x14006CF18 (MmLockLoadedModuleListShared.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     KeQueryAffinityProcess @ 0x140084ED0 (KeQueryAffinityProcess.c)
 *     MiRecheckVaVm @ 0x1400A5790 (MiRecheckVaVm.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiAbortCombineScan @ 0x140103628 (MiAbortCombineScan.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     KiRundownMutants @ 0x140111510 (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140114EE8 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryCpuSetsProcess @ 0x140202600 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140202AA0 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1402077D4 (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x14022124C (MiGetSharedProtosAtDpcLevel.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14023B1FC (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1402523AC (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x140252504 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x14077A724 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // eax
  __int64 v2; // rdx

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    v2 = (unsigned int)(v1 + 1);
    if ( v1 != _InterlockedCompareExchange(SpinLock, v2, v1) )
    {
      LOBYTE(v2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v2);
    }
  }
}
