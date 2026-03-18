/*
 * XREFs of ExAllocateFromPagedLookasideList @ 0x14003F4BC
 * Callers:
 *     FsRtlTruncateBaseMcb @ 0x140015700 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAllocateFileLock @ 0x14003A260 (FsRtlAllocateFileLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14003F450 (FsRtlInitializeBaseMcbEx.c)
 *     FsRtlAddToTunnelCache @ 0x140427060 (FsRtlAddToTunnelCache.c)
 *     AlpcInitializeHandleTable @ 0x1404760E8 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x14047C4C0 (AlpcpAllocateBlob.c)
 *     WmipAllocEntry @ 0x1405A125C (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x1405B4C78 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x1405B5604 (RtlpCopyRangeListEntry.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromPagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
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
