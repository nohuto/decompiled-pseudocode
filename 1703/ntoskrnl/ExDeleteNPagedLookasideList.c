/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x1401642E0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406842C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14002D894 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
