/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810
 * Callers:
 *     MmLockLoadedModuleListExclusive @ 0x140015FE0 (MmLockLoadedModuleListExclusive.c)
 *     PopPepLockActivityLink @ 0x14001B5E8 (PopPepLockActivityLink.c)
 *     MiRemoveUnusedSubsection @ 0x14001F358 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertUnusedSegment @ 0x1400676AC (MiInsertUnusedSegment.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     KeStartThread @ 0x1400A6890 (KeStartThread.c)
 *     KeTerminateThread @ 0x1400A987C (KeTerminateThread.c)
 *     KeFreezeProcess @ 0x1400AC584 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1400ACDDC (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400ACEB4 (KeSetProcessSchedulingGroup.c)
 *     MiSectionCreated @ 0x1400B72A4 (MiSectionCreated.c)
 *     MiInsertUnusedSubsection @ 0x1400B779C (MiInsertUnusedSubsection.c)
 *     MiBeginPageAccessor @ 0x1400C73E4 (MiBeginPageAccessor.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400D4194 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x1400D48E4 (KeSetDisableQuantumProcess.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DB9FC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 *     MiGatherMappedPages @ 0x1400EEBD4 (MiGatherMappedPages.c)
 *     MiPreventControlAreaDeletion @ 0x1400F3B84 (MiPreventControlAreaDeletion.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     PopPepWork @ 0x1400FD200 (PopPepWork.c)
 *     MiCheckForControlAreaDeletion @ 0x14010AA68 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14010AB40 (MiClearFilePointer.c)
 *     MiRemoveFaultNode @ 0x14010FE68 (MiRemoveFaultNode.c)
 *     MiReferencePageRuns @ 0x14011CB5C (MiReferencePageRuns.c)
 *     KeThawProcess @ 0x140121A60 (KeThawProcess.c)
 *     KeSetAffinityThread @ 0x140129ED4 (KeSetAffinityThread.c)
 *     KeSetExecuteOptions @ 0x14012D654 (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x140131294 (MiZeroSectionObjectPointer.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     KeSetCpuSetsProcess @ 0x140153D04 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1401580FC (KeSetAffinityProcess.c)
 *     MiWaitForPageWriteCompletion @ 0x1401585BC (MiWaitForPageWriteCompletion.c)
 *     VslIumEfiRuntimeService @ 0x1401F2140 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x140202E68 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140208E70 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14020DD2C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiDeletePartition @ 0x14021F520 (MiDeletePartition.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     PspIumReplenishPartitionPages @ 0x14024FB68 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402509F0 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140250AA8 (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x140278B6C (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140278C5C (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14027964C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1407BC61C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14001BE10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG v2; // edx
  bool v3; // zf
  signed __int32 v4; // eax
  char v5; // dl
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v5 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v5);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, 0xFFu);
    v2 = *SpinLock;
    while ( (v2 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v2 & 0x40000000) == 0 )
      {
        v4 = _InterlockedCompareExchange(SpinLock, v2 | 0x40000000, v2);
        v3 = v2 == v4;
        v2 = v4;
        if ( !v3 )
          continue;
      }
      KeYieldProcessorEx(&v6);
      v2 = *SpinLock;
    }
  }
}
