/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14005302C
 * Callers:
 *     FsRtlSplitLocks @ 0x14000CF00 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140037C04 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlInitializeLargeMcb @ 0x140038460 (FsRtlInitializeLargeMcb.c)
 *     FsRtlPrivateLock @ 0x14004F440 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x140051274 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 *     IoSetOplockPrivateFoExt @ 0x1400529AC (IoSetOplockPrivateFoExt.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400531A8 (LZNT1DecompressChunkNewThread.c)
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     CcAllocateVacbLevels @ 0x14011CDD0 (CcAllocateVacbLevels.c)
 *     PopAllocateIrp @ 0x140146080 (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x1401495A0 (PopCreateDynamicIrpWorker.c)
 *     IoSetOplockKeyContext @ 0x14014ECE0 (IoSetOplockKeyContext.c)
 *     WmipAllocRegEntry @ 0x140154290 (WmipAllocRegEntry.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 *     AlpcpInitializePort @ 0x140475F6C (AlpcpInitializePort.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14048E320 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ViAllocateContextTable @ 0x140766ECC (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1407681E8 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x1407689C0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140768BA0 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140769110 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140769FC0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x14076EB20 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x140779FA4 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14077AC38 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x14077C568 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14077CFC8 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x14077D158 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
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
