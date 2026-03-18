/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140134EE0
 * Callers:
 *     AlpcpInitSystem @ 0x1405D0188 (AlpcpInitSystem.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x1405D19E0 (FsRtlInitExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140134F20 (ExInitializeNPagedLookasideListInternal.c)
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
