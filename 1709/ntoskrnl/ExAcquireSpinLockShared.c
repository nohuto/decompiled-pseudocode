/*
 * XREFs of ExAcquireSpinLockShared @ 0x140066590
 * Callers:
 *     IopFindDiskIoAttribution @ 0x1400078F0 (IopFindDiskIoAttribution.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14000D208 (PopPepGetDevicePlatformStateDependents.c)
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     PfSnGetFileInformation @ 0x140012BC0 (PfSnGetFileInformation.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140017800 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x14001ABFC (SepGetSingletonEntryFromIndexNumber.c)
 *     PopPepLockActivityLink @ 0x14001B5E8 (PopPepLockActivityLink.c)
 *     CcMapAndCopyInToCache @ 0x14001C320 (CcMapAndCopyInToCache.c)
 *     IopReferenceIoAttributionFromProcess @ 0x140020DF8 (IopReferenceIoAttributionFromProcess.c)
 *     MiStartingOffsetNeedLock @ 0x14002B1C0 (MiStartingOffsetNeedLock.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiQueryAddressSpan @ 0x14003EDF0 (MiQueryAddressSpan.c)
 *     MiCompleteProtoPteFault @ 0x140045530 (MiCompleteProtoPteFault.c)
 *     MmIsFileObjectAPagingFile @ 0x140064CF0 (MmIsFileObjectAPagingFile.c)
 *     ExProtectPoolEx @ 0x140064D70 (ExProtectPoolEx.c)
 *     MiSystemImageHasPrivateFixups @ 0x140064EF0 (MiSystemImageHasPrivateFixups.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400668D0 (IoSetDiskIoAttributionFromThread.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     PsGetWorkOnBehalfThread @ 0x14006AD64 (PsGetWorkOnBehalfThread.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     MiGetControlAreaPtes @ 0x1400A1550 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1400A2890 (MiLocateSubsectionNode.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     InsertEventEntryInLookUpTable @ 0x1400BA53C (InsertEventEntryInLookUpTable.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiAllocateCombineProto @ 0x1400E6D7C (MiAllocateCombineProto.c)
 *     MiTrimSection @ 0x1400F23D8 (MiTrimSection.c)
 *     PopFxLockDevice @ 0x1400FF2FC (PopFxLockDevice.c)
 *     MiFindLastSubsection @ 0x140110710 (MiFindLastSubsection.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 *     MiReferencePfBackedSection @ 0x14012AC34 (MiReferencePfBackedSection.c)
 *     MiRestrictRangeToNode @ 0x1401378C4 (MiRestrictRangeToNode.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14014E860 (MmMapLockedPagesWithReservedMapping.c)
 *     MmUnmapReservedMapping @ 0x140150450 (MmUnmapReservedMapping.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 *     MiKernelStackVaToStackNode @ 0x14021980C (MiKernelStackVaToStackNode.c)
 *     MmAddRangeToCrashDump @ 0x14021AE94 (MmAddRangeToCrashDump.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     MiTransientCombineAddress @ 0x140231B94 (MiTransientCombineAddress.c)
 *     MiTransientPageListWriter @ 0x140234404 (MiTransientPageListWriter.c)
 *     PopPepGetComponentVetoMasks @ 0x14024269C (PopPepGetComponentVetoMasks.c)
 *     PopPepGetDeviceVetoMasks @ 0x14024274C (PopPepGetDeviceVetoMasks.c)
 *     PopPepGetMinimumComponentIdleState @ 0x1402427D4 (PopPepGetMinimumComponentIdleState.c)
 *     PopPepGetMinimumDevicePowerState @ 0x140242890 (PopPepGetMinimumDevicePowerState.c)
 *     PopPepPlatformStateRegistered @ 0x140242E70 (PopPepPlatformStateRegistered.c)
 *     PopPepRegisterComponentPerfStates @ 0x14024306C (PopPepRegisterComponentPerfStates.c)
 *     PspJobIoRateVolumeEntryReference @ 0x14024E76C (PspJobIoRateVolumeEntryReference.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025F760 (SepValidateAndCopyGlobalEntry.c)
 *     ViIrpDatabaseAcquireLockShared @ 0x140278184 (ViIrpDatabaseAcquireLockShared.c)
 *     ExpCheckForResource @ 0x140285BD4 (ExpCheckForResource.c)
 *     ExQuerySystemLockInformation @ 0x14043AA18 (ExQuerySystemLockInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400BF390 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14028607C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
