/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80
 * Callers:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     PsGetNextPartitionUnsafe @ 0x14000457C (PsGetNextPartitionUnsafe.c)
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     MiRemoveWsle @ 0x14000F040 (MiRemoveWsle.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     KiRundownMutants @ 0x140040DFC (KiRundownMutants.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x140048B54 (MmIsFileObjectAPagingFile.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     MiAbortCombineScan @ 0x140051BE8 (MiAbortCombineScan.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     KeQueryBasePriorityThread @ 0x140060CB0 (KeQueryBasePriorityThread.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     KeQueryAffinityProcess @ 0x14006D000 (KeQueryAffinityProcess.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140077340 (vDbgPrintExWithPrefixInternal.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14007774C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepReleaseActivityLink @ 0x1400790F0 (PopPepReleaseActivityLink.c)
 *     PopPepLockActivityLink @ 0x140079438 (PopPepLockActivityLink.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     IopFindDiskIoAttribution @ 0x14008D0B0 (IopFindDiskIoAttribution.c)
 *     PfSnGetFileInformation @ 0x14008E100 (PfSnGetFileInformation.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400B5824 (MiSystemImageHasPrivateFixups.c)
 *     MiGetPrototypePteRanges @ 0x1400BFCB4 (MiGetPrototypePteRanges.c)
 *     MiIsProbeActive @ 0x1400C3E6C (MiIsProbeActive.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     DbgEnumerateCallback @ 0x1400D2AC0 (DbgEnumerateCallback.c)
 *     ExpAddTagForBigPages @ 0x1400D9480 (ExpAddTagForBigPages.c)
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x1400E5F38 (MiGetControlAreaPtes.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400E7EF0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x14011D9C0 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x140123010 (MiQueueLargeFreeZeroRebuild.c)
 *     MiStartingOffsetNeedLock @ 0x1401289A0 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     MmIsSessionExecutionValid @ 0x14012B698 (MmIsSessionExecutionValid.c)
 *     KeSetLegacyAffinityThread @ 0x140135F80 (KeSetLegacyAffinityThread.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140137ADC (IopReferenceIoAttributionFromProcess.c)
 *     MiLookupIoPageNode @ 0x140139B50 (MiLookupIoPageNode.c)
 *     MmUnlockLoadedModuleListShared @ 0x14013F788 (MmUnlockLoadedModuleListShared.c)
 *     MiTransientCombineAddress @ 0x140144B48 (MiTransientCombineAddress.c)
 *     PopFxLockDevice @ 0x140144E10 (PopFxLockDevice.c)
 *     MiKernelStackVaToStackNode @ 0x140152A98 (MiKernelStackVaToStackNode.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1401615F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiRestrictRangeToNode @ 0x14016FC04 (MiRestrictRangeToNode.c)
 *     KeQueryCpuSetsProcess @ 0x140246800 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140246B10 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x14024C410 (KiSelectCandidateProcessor.c)
 *     MmReadProcessPageTables @ 0x14026153C (MmReadProcessPageTables.c)
 *     MiGenerateAccessViolation @ 0x140261A7C (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1402680B4 (MiGetSharedProtosAtDpcLevel.c)
 *     MiGetPrototypePteBoundaries @ 0x14026A624 (MiGetPrototypePteBoundaries.c)
 *     MiTransientPageListWriter @ 0x14026CCC0 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x140279530 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402795E0 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140279668 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140279724 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x140279F48 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14027A144 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140284AE4 (PspJobIoRateVolumeEntryReference.c)
 *     DbgpRemoveDebugPrintCallback @ 0x140286508 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402966FC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpLfhSlotAllocate @ 0x14029A9A8 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14029B8A4 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x14029E5E4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x14029E67C (RtlpHpLargeAllocSize.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402A1210 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x1402AB2E0 (ViIrpDatabaseReleaseLockShared.c)
 *     VmColdPagesHint @ 0x1402AB370 (VmColdPagesHint.c)
 *     VmpAccessFaultBatch @ 0x1402AB618 (VmpAccessFaultBatch.c)
 *     VmpInvalidateOutstandingFaults @ 0x1402AC3E4 (VmpInvalidateOutstandingFaults.c)
 *     VmpPrefetchVirtualAddresses @ 0x1402AC55C (VmpPrefetchVirtualAddresses.c)
 *     VmpQueryAccessedState @ 0x1402ACA5C (VmpQueryAccessedState.c)
 *     ExpRemoveTagForBigPages @ 0x1402B8FA4 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1402BA204 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x140487610 (ExQuerySystemLockInformation.c)
 *     ViDeadlockDetectionUnlock @ 0x140829A14 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402BA870 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v3 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v3;
      if ( !v3 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
        KiPerformUnboostKick(CurrentPrcb);
    }
  }
}
