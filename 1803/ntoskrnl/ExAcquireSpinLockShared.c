/*
 * XREFs of ExAcquireSpinLockShared @ 0x14008E460
 * Callers:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     PsGetNextPartitionUnsafe @ 0x14000457C (PsGetNextPartitionUnsafe.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x140026510 (MiDeleteSystemPagableVm.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140048A10 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsFileObjectAPagingFile @ 0x140048B54 (MmIsFileObjectAPagingFile.c)
 *     ExProtectPoolEx @ 0x14004C6F8 (ExProtectPoolEx.c)
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140060010 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     PsGetWorkOnBehalfThread @ 0x140060460 (PsGetWorkOnBehalfThread.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14006C5FC (SepGetSingletonEntryFromIndexNumber.c)
 *     InsertEventEntryInLookUpTable @ 0x14006F1E0 (InsertEventEntryInLookUpTable.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14007774C (PopPepGetDevicePlatformStateDependents.c)
 *     PopPepLockActivityLink @ 0x140079438 (PopPepLockActivityLink.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x140082194 (MiTrimSection.c)
 *     MiReferencePfBackedSection @ 0x140083410 (MiReferencePfBackedSection.c)
 *     IopFindDiskIoAttribution @ 0x14008D0B0 (IopFindDiskIoAttribution.c)
 *     PfSnGetFileInformation @ 0x14008E100 (PfSnGetFileInformation.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400B5824 (MiSystemImageHasPrivateFixups.c)
 *     MiGetPrototypePteRanges @ 0x1400BFCB4 (MiGetPrototypePteRanges.c)
 *     MiIsProbeActive @ 0x1400C3E6C (MiIsProbeActive.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1400C5360 (MmMapLockedPagesWithReservedMapping.c)
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x1400E5F38 (MiGetControlAreaPtes.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     MiMakeSystemCacheRangeValid @ 0x140120370 (MiMakeSystemCacheRangeValid.c)
 *     MiPageToNode @ 0x140122B50 (MiPageToNode.c)
 *     MiAllocateCombineProto @ 0x140122E30 (MiAllocateCombineProto.c)
 *     MiStartingOffsetNeedLock @ 0x1401289A0 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x140129AB0 (MiLogPageAccess.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140137ADC (IopReferenceIoAttributionFromProcess.c)
 *     MiLookupIoPageNode @ 0x140139B50 (MiLookupIoPageNode.c)
 *     MiTransientCombineAddress @ 0x140144B48 (MiTransientCombineAddress.c)
 *     PopFxLockDevice @ 0x140144E10 (PopFxLockDevice.c)
 *     MiKernelStackVaToStackNode @ 0x140152A98 (MiKernelStackVaToStackNode.c)
 *     MiRestrictRangeToNode @ 0x14016FC04 (MiRestrictRangeToNode.c)
 *     MiGenerateAccessViolation @ 0x140261A7C (MiGenerateAccessViolation.c)
 *     MiDecommitHardwareEnclavePages @ 0x140263B34 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiGetPrototypePteBoundaries @ 0x14026A624 (MiGetPrototypePteBoundaries.c)
 *     MiTransientPageListWriter @ 0x14026CCC0 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x140279530 (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x1402795E0 (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x140279668 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140279724 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x140279F48 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14027A144 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x140284AE4 (PspJobIoRateVolumeEntryReference.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1402966FC (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpAcquireLockShared @ 0x1402975A4 (RtlpHpAcquireLockShared.c)
 *     RtlpCSparseBitmapLock @ 0x14029EF04 (RtlpCSparseBitmapLock.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402A1210 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x1402AB294 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x1402B8FA4 (ExpRemoveTagForBigPages.c)
 *     ExpCheckForResource @ 0x1402BA204 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x140487610 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400A22F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402BA760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // ett
  int v7; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[5];
        SchedulerAssist[5] = v7 + 1;
        if ( v7 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
    }
  }
  return CurrentIrql;
}
