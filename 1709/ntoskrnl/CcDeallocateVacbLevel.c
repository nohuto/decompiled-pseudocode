/*
 * XREFs of CcDeallocateVacbLevel @ 0x1400F7CA4
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1400F7750 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  bool v2; // zf
  struct _NPAGED_LOOKASIDE_LIST *v4; // rcx

  v2 = a2 == 0;
  v4 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( v2 )
    v4 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v4, Entry);
}
