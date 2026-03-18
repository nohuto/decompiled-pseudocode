/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380
 * Callers:
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     KeStartThread @ 0x14003FBEC (KeStartThread.c)
 *     KeTerminateThread @ 0x140040FBC (KeTerminateThread.c)
 *     MiSectionCreated @ 0x14004D194 (MiSectionCreated.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14006B758 (KeSetQuantumProcess.c)
 *     MiDeletePagablePteRange @ 0x1400726A0 (MiDeletePagablePteRange.c)
 *     PopPepWork @ 0x1400789D0 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x140079438 (PopPepLockActivityLink.c)
 *     MiDrainSystemAccessLog @ 0x14007A2A4 (MiDrainSystemAccessLog.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14007FE08 (MmQuerySystemWorkingSetInformation.c)
 *     MiPreventControlAreaDeletion @ 0x1400832BC (MiPreventControlAreaDeletion.c)
 *     MiPreUnlockWorkingSetShared @ 0x140083B98 (MiPreUnlockWorkingSetShared.c)
 *     MiWaitForPageWriteCompletion @ 0x140084528 (MiWaitForPageWriteCompletion.c)
 *     MiCheckForControlAreaDeletion @ 0x140084944 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x1400851C4 (MiClearFilePointer.c)
 *     KeSetDisableQuantumProcess @ 0x14008AD60 (KeSetDisableQuantumProcess.c)
 *     MiRemoveFaultNode @ 0x14009DCE0 (MiRemoveFaultNode.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x1400AD7A8 (MiUpdateWorkingSetPrivateSize.c)
 *     KeForceResumeProcess @ 0x1400BCFB4 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400BD08C (KeThawProcess.c)
 *     KeFreezeProcess @ 0x1400BD244 (KeFreezeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400C23A4 (KeSetProcessSchedulingGroup.c)
 *     MiReferencePageRuns @ 0x1400C4678 (MiReferencePageRuns.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400C8FB8 (MmAdjustWorkingSetSizeEx.c)
 *     KeSetAffinityThread_0 @ 0x1400CCA40 (KeSetAffinityThread_0.c)
 *     KeSetExecuteOptions @ 0x1400CDB2C (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x1400D24CC (MiZeroSectionObjectPointer.c)
 *     MiRemoveUnusedSubsection @ 0x1400E3FD8 (MiRemoveUnusedSubsection.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x1400E41E4 (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x1400E44A8 (MiInsertUnusedSegment.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiGatherMappedPages @ 0x140133168 (MiGatherMappedPages.c)
 *     MiReferenceIoPages @ 0x140139BCC (MiReferenceIoPages.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x14013E754 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiLockAllMemoryLists @ 0x140156D6C (MiLockAllMemoryLists.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     KeSetCpuSetsProcess @ 0x1401813DC (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x140183BE0 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x14022FC60 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x1402404E0 (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140246964 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x14024BF2C (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x14024FA3C (MiPurgeSubsection.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x14028562C (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x140286450 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140286508 (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x1402ABC38 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1402ABD44 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1402AC838 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140089F80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402BA6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  volatile LONG v4; // edx
  bool v5; // zf
  signed __int32 v6; // eax
  char v7; // dl
  int v8; // eax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v7);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = SchedulerAssist[5];
        SchedulerAssist[5] = v8 + 1;
        if ( v8 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, 0xFFu);
    }
    v4 = *SpinLock;
    while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v4 & 0x40000000) == 0 )
      {
        v6 = _InterlockedCompareExchange(SpinLock, v4 | 0x40000000, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( !v5 )
          continue;
      }
      KeYieldProcessorEx(&v9);
      v4 = *SpinLock;
    }
  }
}
