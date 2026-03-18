/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140114B0C
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlEmptyFreePoolList @ 0x14000CD8C (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x14000CDE4 (FsRtlFreeTunnelNode.c)
 *     FsRtlAddEntry @ 0x1400161A0 (FsRtlAddEntry.c)
 *     FsRtlFreeFileLock @ 0x14003B1A0 (FsRtlFreeFileLock.c)
 *     FsRtlUninitializeFileLock @ 0x14003B1D0 (FsRtlUninitializeFileLock.c)
 *     FsRtlUninitializeLargeMcb @ 0x14003B2D0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlFastUnlockSingleShared @ 0x14004E064 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertLock @ 0x140051274 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1400529AC (IoSetOplockPrivateFoExt.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     FsRtlUninitializeBaseMcb @ 0x1401150C0 (FsRtlUninitializeBaseMcb.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140115790 (LZNT1DecompressChunkWorkItem.c)
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     CcSetVacbLargeOffset @ 0x14011C014 (CcSetVacbLargeOffset.c)
 *     CcFreeUnusedVacbLevels @ 0x14011CD78 (CcFreeUnusedVacbLevels.c)
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 *     PopFreeIrp @ 0x140144BEC (PopFreeIrp.c)
 *     PopIrpWorker @ 0x140145130 (PopIrpWorker.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 *     PopCreateDynamicIrpWorker @ 0x1401495A0 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14014ECE0 (IoSetOplockKeyContext.c)
 *     WmipDeregisterRegEntry @ 0x1401530D4 (WmipDeregisterRegEntry.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x1401E34F0 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x14020E5B4 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x1402505F8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     AlpcpDestroyPort @ 0x140473880 (AlpcpDestroyPort.c)
 *     AlpcAddHandleTableEntry @ 0x14047A19C (AlpcAddHandleTableEntry.c)
 *     WmipUnreferenceEntry @ 0x1404BECD0 (WmipUnreferenceEntry.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140542880 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcConnectionDestroyProcedure @ 0x140543EC0 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlDeleteTunnelCache @ 0x140575BD0 (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x1405B5A50 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140762E58 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x140766F08 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x14076804C (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x140768154 (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140769630 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407699F0 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140769AA0 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140769CA0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14076AD70 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14076AF30 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x140772724 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140772B94 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x14077AA20 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14077AC38 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14077C6D4 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x14077D0D8 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x14077D220 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x14077D5C0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 * Callees:
 *     <none>
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) < Lookaside->L.Depth )
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
  else
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
}
