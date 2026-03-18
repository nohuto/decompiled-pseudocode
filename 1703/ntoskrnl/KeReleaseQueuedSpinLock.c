/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1400A9390
 * Callers:
 *     RawInitiateDeleteVolume @ 0x140005468 (RawInitiateDeleteVolume.c)
 *     IoDetachDevice @ 0x140005810 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     PnpGetRelatedTargetDevice @ 0x140005C74 (PnpGetRelatedTargetDevice.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x1400188A0 (FsRtlNotifySetCancelRoutine.c)
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     FsRtlCancelNotify @ 0x140018DC0 (FsRtlCancelNotify.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     WmipNotificationIrpCancel @ 0x140019F40 (WmipNotificationIrpCancel.c)
 *     FsRtlUninitializeOplock @ 0x140029950 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x14002FB30 (FsRtlpOplockBreakToII.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140031310 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopInterlockedRemoveHeadList @ 0x140032050 (IopInterlockedRemoveHeadList.c)
 *     IoGetDriverObjectExtension @ 0x140037250 (IoGetDriverObjectExtension.c)
 *     IoReleaseVpbSpinLock @ 0x140038900 (IoReleaseVpbSpinLock.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140039210 (IoGetLowerDeviceObjectWithTag.c)
 *     IoAllocateDriverObjectExtension @ 0x14003A150 (IoAllocateDriverObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x14003B1D0 (FsRtlUninitializeFileLock.c)
 *     FsRtlpOplockBreakToNone @ 0x14003BE58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     IopInsertRemoveDevice @ 0x140066840 (IopInsertRemoveDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x14007207C (IopGetDevicePDO.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400801A8 (PpMarkDeviceStackExtensionFlag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140081554 (IoGetAttachedDeviceReferenceWithTag.c)
 *     CcGetVirtualAddress @ 0x14009DE10 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1400A9104 (CcGetVacbMiss.c)
 *     IopInterlockedIncrementUlong @ 0x1400A9358 (IopInterlockedIncrementUlong.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400ABF64 (IopVerifyDeviceObjectOnStack.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     IopQueryVpbFlagsSafe @ 0x14012C99C (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x14012CA70 (IopMountInitializeVpb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401318A4 (FsRtlpCancelExclusiveIrp.c)
 *     PnpIsChainDereferenced @ 0x140132070 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x14013220C (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x140132630 (PnpFindMountableDevice.c)
 *     FsRtlpWaitOnIrp @ 0x140136678 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140136A3C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopStartNextPacket @ 0x14013FC54 (IopStartNextPacket.c)
 *     IoStartPacket @ 0x14013FCF0 (IoStartPacket.c)
 *     PopQueueQuerySetIrp @ 0x140146394 (PopQueueQuerySetIrp.c)
 *     IopCsqCancelRoutine @ 0x140149290 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x14014AE98 (IopResurrectDriver.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IopCheckStackForTransactionSupport @ 0x1401534A0 (IopCheckStackForTransactionSupport.c)
 *     IopInterlockedDecrementUlong @ 0x140153BB8 (IopInterlockedDecrementUlong.c)
 *     IopSetFsRegistrationInProgress @ 0x140153F6C (IopSetFsRegistrationInProgress.c)
 *     IopInterlockedInsertHeadList @ 0x1401541B8 (IopInterlockedInsertHeadList.c)
 *     CcAllocateInitializeVacbArray @ 0x14015E56C (CcAllocateInitializeVacbArray.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     IopCheckUnloadDriver @ 0x1401643B0 (IopCheckUnloadDriver.c)
 *     IopInterlockedInsertTailList @ 0x140164F60 (IopInterlockedInsertTailList.c)
 *     IoEnumerateDeviceObjectList @ 0x140165180 (IoEnumerateDeviceObjectList.c)
 *     CcDereferenceVacbArray @ 0x1401DE660 (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE70C (CcGetRandomVacbArrayWithReference.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E34F0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E3940 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E3B98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E3C78 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E3D30 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     IopDisassociateThreadIrp @ 0x1401EF7E0 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1401EFB20 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1401EFF2C (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401F36E0 (IoAdjustStackSizeForRedirection.c)
 *     IoGetDiskDeviceObject @ 0x1401F3A10 (IoGetDiskDeviceObject.c)
 *     IopGetFsRegistrationInProgress @ 0x1401F444C (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacketByKey @ 0x1401F4730 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401F8500 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     PnpLockMountableDevice @ 0x1401F8A9C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401F8AF8 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     IopSetLegacyResourcesFlag @ 0x1401F8E38 (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1401F8F40 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1401FAA90 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x1401FB444 (IopEliminateBogusConflict.c)
 *     RawCheckForDeleteVolume @ 0x14023A99C (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x14023AA3C (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x140415880 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObject @ 0x140772CB8 (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x140772D18 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilGetUpperDeviceObject @ 0x140772D6C (IovUtilGetUpperDeviceObject.c)
 *     IovUtilIsInFdoStack @ 0x140772E0C (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140772E70 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140772F70 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140772FD0 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v3; // rbx
  __int64 v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v3, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v3);
  v4 = (__int64)*v3;
  if ( *v3 )
    goto LABEL_6;
  if ( v3 != (volatile signed __int64 **)_InterlockedCompareExchange64(v3[1], 0LL, (signed __int64)v3) )
  {
    v4 = KxWaitForLockChainValid(v3);
LABEL_6:
    *v3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
  }
LABEL_4:
  __writecr8(OldIrql);
}
