/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140155440
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406AF6C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140123D04 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140123DD4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
