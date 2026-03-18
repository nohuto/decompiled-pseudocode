/*
 * XREFs of ExInitializePagedLookasideList @ 0x1405681D0
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140819368 (FsRtlInitSystem.c)
 *     FsRtlInitializeFileLocks @ 0x1408197BC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeTunnels @ 0x140819950 (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140825904 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x14012F140 (ExInitializePagedLookasideListInternal.c)
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
