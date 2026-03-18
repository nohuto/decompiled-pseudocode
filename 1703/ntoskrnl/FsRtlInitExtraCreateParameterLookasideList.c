/*
 * XREFs of FsRtlInitExtraCreateParameterLookasideList @ 0x1405D19E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x14012F140 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeNPagedLookasideList @ 0x140134EE0 (ExInitializeNPagedLookasideList.c)
 */

void __stdcall FsRtlInitExtraCreateParameterLookasideList(
        PVOID Lookaside,
        FSRTL_ECP_LOOKASIDE_FLAGS Flags,
        SIZE_T Size,
        ULONG Tag)
{
  SIZE_T v4; // rax

  v4 = Size + 72;
  if ( (Flags & 2) != 0 )
    ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside, 0LL, 0LL, 0x200u, v4, Tag, 0);
  else
    ExInitializePagedLookasideListInternal((__int64)Lookaside, 0LL, 0LL, 0, v4, Tag, 0, 0);
}
