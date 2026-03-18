/*
 * XREFs of ExInitializePagedLookasideList @ 0x140576040
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x1408C1C40 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1408C208C (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x1408C2220 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x1408C90FC (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400C7700 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal((__int64)Lookaside, Allocate, Free, Flags, Size, Tag, Depth, 0);
}
