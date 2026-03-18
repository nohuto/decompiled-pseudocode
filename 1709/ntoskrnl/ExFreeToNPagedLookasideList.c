/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1400E53C4
 * Callers:
 *     FsRtlFreeFileLock @ 0x14000EBD0 (FsRtlFreeFileLock.c)
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     IoSetOplockPrivateFoExt @ 0x140024360 (IoSetOplockPrivateFoExt.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400E51E0 (LZNT1DecompressChunkWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400E6030 (FsRtlUninitializeBaseMcb.c)
 *     CcFreeUnusedVacbLevels @ 0x1400F7BA8 (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x1400F7CA4 (CcDeallocateVacbLevel.c)
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     FsRtlEmptyFreePoolList @ 0x1401051FC (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140105254 (FsRtlFreeTunnelNode.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertLock @ 0x140105C80 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140105DE4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140106010 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140106170 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106C24 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlAddEntry @ 0x140111C5C (FsRtlAddEntry.c)
 *     PopFreeIrp @ 0x140123030 (PopFreeIrp.c)
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x14012C070 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeFileLock @ 0x14012FC00 (FsRtlUninitializeFileLock.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     PopIrpWorker @ 0x140151D80 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x140156004 (PopCreateDynamicIrpWorker.c)
 *     sub_14016A6A0 @ 0x14016A6A0 (sub_14016A6A0.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E77B0 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x140215D30 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140276E58 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcAddHandleTableEntry @ 0x140462348 (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyPort @ 0x140463FC8 (AlpcpDestroyPort.c)
 *     AlpcpDestroyBlob @ 0x14049DF24 (AlpcpDestroyBlob.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcConnectionDestroyProcedure @ 0x14053D810 (AlpcConnectionDestroyProcedure.c)
 *     RtlpFreeRangeListEntry @ 0x14053F0F4 (RtlpFreeRangeListEntry.c)
 *     FsRtlDeleteTunnelCache @ 0x140565A00 (FsRtlDeleteTunnelCache.c)
 *     IovCallDriver @ 0x1407A4AE8 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x1407A8AA4 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x1407A9C74 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x1407A9DA4 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1407AB2F0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407AB6B0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1407AB760 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1407AB960 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1407ACA40 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1407ACC00 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1407B44D4 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407B4954 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x1407BC91C (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1407BCB44 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x1407BE5FC (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x1407BF044 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1407BF180 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x1407BF520 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
