/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1400631EC
 * Callers:
 *     FsRtlInitializeBaseMcbEx @ 0x140063180 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlInitializeLargeMcb @ 0x1400632D0 (FsRtlInitializeLargeMcb.c)
 *     IoSetOplockPrivateFoExt @ 0x140068044 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140068340 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlPrivateLock @ 0x140068C80 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140069804 (FsRtlPrivateInsertLock.c)
 *     FsRtlTruncateBaseMcb @ 0x1400AFAF0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlSplitLocks @ 0x1400B1024 (FsRtlSplitLocks.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400C1624 (LZNT1DecompressChunkNewThread.c)
 *     CcAllocateVacbLevels @ 0x1400C4E1C (CcAllocateVacbLevels.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CE7E0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x1400D05D0 (FsRtlAllocateFileLock.c)
 *     IoSetOplockKeyContext @ 0x14015AF04 (IoSetOplockKeyContext.c)
 *     VfAvlReserveNode @ 0x1401616BC (VfAvlReserveNode.c)
 *     WmipAllocRegEntry @ 0x140161F7C (WmipAllocRegEntry.c)
 *     PopAllocateIrp @ 0x1401673F8 (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x14016C860 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x1402539C4 (MiAddMdlTracker.c)
 *     AlpcpAllocateBlob @ 0x1404D44F8 (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x1404DD2E0 (AlpcInitializeHandleTable.c)
 *     AlpcpInitializePort @ 0x1404DD334 (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1404E4380 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCache @ 0x140506A20 (FsRtlAddToTunnelCache.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     WmipAllocEntry @ 0x1405FF70C (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140619A04 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x14061A310 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140815A98 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x140816ED4 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1408176D0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x1408178C0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140817F50 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140818DF0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x14081DAEC (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140829258 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x140829F04 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x14082B8DC (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14082C394 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x14082C52C (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
