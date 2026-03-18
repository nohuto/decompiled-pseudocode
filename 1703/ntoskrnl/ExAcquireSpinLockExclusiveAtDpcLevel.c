/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40
 * Callers:
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140011644 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiCheckForControlAreaDeletion @ 0x140016404 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x1400164D8 (MiClearFilePointer.c)
 *     MiWaitForPageWriteCompletion @ 0x1400179B0 (MiWaitForPageWriteCompletion.c)
 *     KeSetAffinityThread_0 @ 0x14001A5A4 (KeSetAffinityThread_0.c)
 *     KeSetExecuteOptions @ 0x1400356A8 (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x14003BD84 (MiZeroSectionObjectPointer.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiSectionCreated @ 0x14005E604 (MiSectionCreated.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x1400653B4 (KeSetQuantumProcess.c)
 *     PopPepWork @ 0x140069FFC (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     KeFreezeProcess @ 0x140072E2C (KeFreezeProcess.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiRemoveUnusedSubsection @ 0x140097D88 (MiRemoveUnusedSubsection.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiGatherMappedPages @ 0x1400AFB14 (MiGatherMappedPages.c)
 *     MiRemoveFaultNode @ 0x1400B3758 (MiRemoveFaultNode.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     KeStartThread @ 0x1401121B8 (KeStartThread.c)
 *     KeTerminateThread @ 0x140114224 (KeTerminateThread.c)
 *     KeSetDisableQuantumProcess @ 0x140117458 (KeSetDisableQuantumProcess.c)
 *     KeThawProcess @ 0x14011FF68 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x1401202A4 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14012037C (KeSetProcessSchedulingGroup.c)
 *     MiBeginLargePageAccessor @ 0x14012981C (MiBeginLargePageAccessor.c)
 *     KeSetAffinityProcess @ 0x140165A2C (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1401ED320 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x1401FD040 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140202748 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetCpuSetsProcess @ 0x1402028C0 (KeSetCpuSetsProcess.c)
 *     KeTransitionProcessorParkState @ 0x14020739C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 *     MiClearFileOnlyPfn @ 0x1402183C4 (MiClearFileOnlyPfn.c)
 *     MiNoPagesLastChance @ 0x14021F600 (MiNoPagesLastChance.c)
 *     DbgpInsertDebugPrintCallback @ 0x14023B144 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x14023B1FC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x140251D30 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140251DF0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1402524DC (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14077A724 (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG v2; // edx
  char v3; // dl
  bool v4; // zf
  signed __int32 v5; // eax
  char v6; // dl
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v6 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v6);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v3 = -1;
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v3);
    }
    v2 = *SpinLock;
    while ( (v2 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v2 & 0x40000000) == 0 )
      {
        v5 = _InterlockedCompareExchange(SpinLock, v2 | 0x40000000, v2);
        v4 = v2 == v5;
        v2 = v5;
        if ( !v4 )
          continue;
      }
      KeYieldProcessorEx(&v7);
      v2 = *SpinLock;
    }
  }
}
