/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140146350
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405E98E0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1405E99C8 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x14080CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140146390 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
