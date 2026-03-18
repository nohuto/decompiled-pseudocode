/*
 * XREFs of ExDeletePagedLookasideList @ 0x1400C2E60
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x140713E70 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x1400C2E94 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x1400C2F64 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
