/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1400A4D50
 * Callers:
 *     FsRtlpWaitOnIrp @ 0x14000E0E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14000EFA8 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopCheckUnloadDriver @ 0x140015A98 (IopCheckUnloadDriver.c)
 *     IopInterlockedRemoveHeadList @ 0x140015B40 (IopInterlockedRemoveHeadList.c)
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     IopGetDevicePDO @ 0x14002459C (IopGetDevicePDO.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400246D8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     CcGetVirtualAddress @ 0x14007B2D0 (CcGetVirtualAddress.c)
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     CcGetVacbMiss @ 0x1400A3D50 (CcGetVacbMiss.c)
 *     IopInterlockedIncrementUlong @ 0x1400A4D10 (IopInterlockedIncrementUlong.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1400A5D70 (IopVerifyDeviceObjectOnStack.c)
 *     IoBoostThreadIoPriority @ 0x1400AC938 (IoBoostThreadIoPriority.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopQueueQuerySetIrp @ 0x1400B38D4 (PopQueueQuerySetIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400DE5E8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     RawInitiateDeleteVolume @ 0x1400FA43C (RawInitiateDeleteVolume.c)
 *     IoDetachDevice @ 0x1400FA6E0 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1400FAFD8 (IopInsertRemoveDevice.c)
 *     PnpGetRelatedTargetDevice @ 0x1400FBC60 (PnpGetRelatedTargetDevice.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1400FEB6C (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIsChainDereferenced @ 0x1400FEC08 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400FEF24 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x1400FF2B4 (PnpFindMountableDevice.c)
 *     IopQueryVpbFlagsSafe @ 0x1400FFE98 (IopQueryVpbFlagsSafe.c)
 *     IopMountInitializeVpb @ 0x1400FFF70 (IopMountInitializeVpb.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140107FB8 (FsRtlNotifySetCancelRoutine.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     FsRtlCancelNotify @ 0x1401086F0 (FsRtlCancelNotify.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     WmipNotificationIrpCancel @ 0x140108C00 (WmipNotificationIrpCancel.c)
 *     FsRtlUninitializeOplock @ 0x1401175A0 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockBreakToII @ 0x1401278C4 (FsRtlpOplockBreakToII.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoReleaseVpbSpinLock @ 0x14012BC40 (IoReleaseVpbSpinLock.c)
 *     IoGetDriverObjectExtension @ 0x14012C200 (IoGetDriverObjectExtension.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14012D1AC (IoGetLowerDeviceObjectWithTag.c)
 *     IoAllocateDriverObjectExtension @ 0x14012F340 (IoAllocateDriverObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x14012FC00 (FsRtlUninitializeFileLock.c)
 *     FsRtlpOplockBreakToNone @ 0x14013065C (FsRtlpOplockBreakToNone.c)
 *     IopInterlockedInsertHeadList @ 0x1401464A4 (IopInterlockedInsertHeadList.c)
 *     IopSetFsRegistrationInProgress @ 0x1401464F8 (IopSetFsRegistrationInProgress.c)
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 *     CcAllocateInitializeVacbArray @ 0x1401480DC (CcAllocateInitializeVacbArray.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IopCsqCancelRoutine @ 0x140155EF0 (IopCsqCancelRoutine.c)
 *     IoGetDiskDeviceObject @ 0x140156B50 (IoGetDiskDeviceObject.c)
 *     IopInterlockedInsertTailList @ 0x140156EA0 (IopInterlockedInsertTailList.c)
 *     IoEnumerateDeviceObjectList @ 0x1401578E0 (IoEnumerateDeviceObjectList.c)
 *     IopCheckStackForTransactionSupport @ 0x140157C38 (IopCheckStackForTransactionSupport.c)
 *     PnpMarkDeviceForRemove @ 0x140157DE8 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x1401589AC (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140158E70 (PnpUnlockMountableDevice.c)
 *     IopResurrectDriver @ 0x14015B3D8 (IopResurrectDriver.c)
 *     IopInterlockedDecrementUlong @ 0x14015D644 (IopInterlockedDecrementUlong.c)
 *     CcDereferenceVacbArray @ 0x1401E15FC (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401E17A4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1401E1B40 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x1401E2584 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E77B0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E7C48 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelExclusiveIrp @ 0x1401E7EA0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E7FC8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401E80A8 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1401E818C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1401E842C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     IopDisassociateThreadIrp @ 0x1401F4EDC (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1401F5228 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x1401F55D0 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1401F9080 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x1401F9CB0 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x1401F9FD4 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x1401FA2A0 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1401FA360 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1401FE604 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x1401FED3C (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x1401FF0B0 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1402007B0 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x14020114C (IopEliminateBogusConflict.c)
 *     RawCheckForDeleteVolume @ 0x140250214 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x1402502B4 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x14042A8C0 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407B4A78 (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x1407B4AD8 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilGetUpperDeviceObject @ 0x1407B4B2C (IovUtilGetUpperDeviceObject.c)
 *     IovUtilIsInFdoStack @ 0x1407B4BCC (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1407B4C30 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x1407B4D30 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x1407B4D90 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400F1CA0 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140204D38 (KiReleaseQueuedSpinLockInstrumented.c)
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
