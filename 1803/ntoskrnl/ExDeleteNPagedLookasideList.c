/*
 * XREFs of ExDeleteNPagedLookasideList @ 0x140163E90
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140713E70 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1400C2E94 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1400C2F64 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeleteNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExNPagedLookasideLock, (__int64)Lookaside);
  ExpFlushGeneralLookaside((__int64)Lookaside, 1);
}
