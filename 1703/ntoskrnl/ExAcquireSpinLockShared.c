/*
 * XREFs of ExAcquireSpinLockShared @ 0x1400A6AB0
 * Callers:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiTrimSection @ 0x1400144D8 (MiTrimSection.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140023A7C (IopReferenceIoAttributionFromProcess.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x140034F38 (PopPepGetDevicePlatformStateDependents.c)
 *     IoPageReadEx @ 0x14004AFE0 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14004B300 (IoSetDiskIoAttributionFromThread.c)
 *     MiFindLastSubsection @ 0x14005E430 (MiFindLastSubsection.c)
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140066010 (SepGetSingletonEntryFromIndexNumber.c)
 *     PopPepLockActivityLink @ 0x14006AA68 (PopPepLockActivityLink.c)
 *     MiAcquireProperVm @ 0x14006BF58 (MiAcquireProperVm.c)
 *     InsertEventEntryInLookUpTable @ 0x140081DE4 (InsertEventEntryInLookUpTable.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140089FD0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiGetControlAreaPtes @ 0x14009A280 (MiGetControlAreaPtes.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     ExProtectPoolEx @ 0x1400A5BE0 (ExProtectPoolEx.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400A77B0 (MiSystemImageHasPrivateFixups.c)
 *     MiLocateSubsectionNode @ 0x1400A7F30 (MiLocateSubsectionNode.c)
 *     IopFindDiskIoAttribution @ 0x1400ADF94 (IopFindDiskIoAttribution.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiPageToNode @ 0x1400B70B0 (MiPageToNode.c)
 *     PfSnGetFileInformation @ 0x1400B7690 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MiStartingOffsetNeedLock @ 0x1400CDC90 (MiStartingOffsetNeedLock.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     PsGetWorkOnBehalfThread @ 0x1400E7974 (PsGetWorkOnBehalfThread.c)
 *     MiReferencePfBackedSection @ 0x140118534 (MiReferencePfBackedSection.c)
 *     MmIsFileObjectAPagingFile @ 0x1401300CC (MmIsFileObjectAPagingFile.c)
 *     MiTransientCombineAddress @ 0x1401316EC (MiTransientCombineAddress.c)
 *     PopFxLockDevice @ 0x14013257C (PopFxLockDevice.c)
 *     MiKernelStackVaToStackNode @ 0x14013D064 (MiKernelStackVaToStackNode.c)
 *     MiRestrictRangeToNode @ 0x1401547A8 (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14020F8C0 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x14020FA40 (MmUnmapReservedMapping.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 *     MmAddRangeToCrashDump @ 0x1402130DC (MmAddRangeToCrashDump.c)
 *     MiTransientPageListWriter @ 0x140225490 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x14022E4AC (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14022E55C (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x14022E5E0 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14022E69C (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x14022EE40 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14022F040 (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x1402397BC (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140248040 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140251914 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x14025C2B4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14041AE34 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14025C760 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
  signed __int32 v2; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v2 = *SpinLock & 0x7FFFFFFF;
    if ( v2 != _InterlockedCompareExchange(SpinLock, v2 + 1, v2) )
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, CurrentIrql);
  }
  return CurrentIrql;
}
