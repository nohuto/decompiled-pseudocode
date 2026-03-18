/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14001509C
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140015030 (FsRtlInitializeBaseMcbEx.c)
 *     IoSetOplockPrivateFoExt @ 0x140024360 (IoSetOplockPrivateFoExt.c)
 *     PopAllocateIrp @ 0x1400B3D54 (PopAllocateIrp.c)
 *     CcAllocateVacbLevels @ 0x1400F7C00 (CcAllocateVacbLevels.c)
 *     VfAvlReserveNode @ 0x1400F9C0C (VfAvlReserveNode.c)
 *     LZNT1DecompressChunkNewThread @ 0x140100ADC (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateLock @ 0x140105960 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140105C80 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140105DE4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x140106C78 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140106D40 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlTruncateBaseMcb @ 0x140111220 (FsRtlTruncateBaseMcb.c)
 *     WmipAllocRegEntry @ 0x140123F48 (WmipAllocRegEntry.c)
 *     FsRtlInitializeLargeMcb @ 0x140129CD0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlAllocateFileLock @ 0x14012FBB0 (FsRtlAllocateFileLock.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     PopCreateDynamicIrpWorker @ 0x140156004 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     AlpcInitializeHandleTable @ 0x140466744 (AlpcInitializeHandleTable.c)
 *     RtlpCreateRangeListEntry @ 0x140466900 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140466A04 (RtlpCopyRangeListEntry.c)
 *     AlpcpInitializePort @ 0x140466B0C (AlpcpInitializePort.c)
 *     WmipAllocEntry @ 0x1404689D0 (WmipAllocEntry.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140492980 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     FsRtlAddToTunnelCache @ 0x140565D60 (FsRtlAddToTunnelCache.c)
 *     ViAllocateContextTable @ 0x1407A8A68 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1407A9E50 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1407AA640 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1407AA820 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x1407AADD0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x1407ABC80 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1407B0940 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x1407BBEA0 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x1407BCB44 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x1407BE490 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1407BEF34 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1407BF0C4 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
