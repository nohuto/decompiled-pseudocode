/*
 * XREFs of ExInitializePagedLookasideList @ 0x1404EC840
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     FsRtlInitializeFileLocks @ 0x140843824 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitSystem @ 0x140851150 (FsRtlInitSystem.c)
 *     FsRtlInitializeTunnels @ 0x14085159C (FsRtlInitializeTunnels.c)
 *     WmipInitializeAllocs @ 0x140856FF0 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400B4390 (ExInitializePagedLookasideListInternal.c)
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
