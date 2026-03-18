/*
 * XREFs of FsRtlInitExtraCreateParameterLookasideList @ 0x14064E890
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1400C7700 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideList @ 0x14014B650 (ExInitializeNPagedLookasideList.c)
 */

void __stdcall FsRtlInitExtraCreateParameterLookasideList(
        PVOID Lookaside,
        FSRTL_ECP_LOOKASIDE_FLAGS Flags,
        SIZE_T Size,
        ULONG Tag)
{
  SIZE_T v4; // r8

  v4 = Size + 72;
  if ( (Flags & 2) != 0 )
    ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside, 0LL, 0LL, 0x200u, v4, Tag, 0);
  else
    ExInitializePagedLookasideListInternal((__int64)Lookaside, 0LL, 0LL, 0, v4, Tag, 0, 0);
}
