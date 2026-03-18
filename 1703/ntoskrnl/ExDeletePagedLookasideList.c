/*
 * XREFs of ExDeletePagedLookasideList @ 0x14002D790
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406842C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpRemoveGeneralLookaside @ 0x14002D894 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
