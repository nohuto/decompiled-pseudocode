/*
 * XREFs of CcDeallocateVacbLevel @ 0x1400C4F40
 * Callers:
 *     CcSetVacbLargeOffset @ 0x1400DA8B8 (CcSetVacbLargeOffset.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 */

void __fastcall CcDeallocateVacbLevel(PVOID Entry, int a2)
{
  struct _NPAGED_LOOKASIDE_LIST *v3; // rcx

  v3 = &CcVacbLevelWithBcbListHeadsLookasideList;
  if ( !a2 )
    v3 = &CcVacbLevelLookasideList;
  ExFreeToNPagedLookasideList(v3, Entry);
}
