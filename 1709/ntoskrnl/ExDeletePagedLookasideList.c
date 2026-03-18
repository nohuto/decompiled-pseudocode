/*
 * XREFs of ExDeletePagedLookasideList @ 0x140123CD0
 * Callers:
 *     FsRtlDeleteExtraCreateParameterLookasideList @ 0x1406AF6C0 (FsRtlDeleteExtraCreateParameterLookasideList.c)
 * Callees:
 *     ExpFlushGeneralLookaside @ 0x140123D04 (ExpFlushGeneralLookaside.c)
 *     ExpRemoveGeneralLookaside @ 0x140123DD4 (ExpRemoveGeneralLookaside.c)
 */

void __stdcall ExDeletePagedLookasideList(PPAGED_LOOKASIDE_LIST Lookaside)
{
  ExpRemoveGeneralLookaside(&ExPagedLookasideLock);
  ExpFlushGeneralLookaside(Lookaside, 1LL);
}
