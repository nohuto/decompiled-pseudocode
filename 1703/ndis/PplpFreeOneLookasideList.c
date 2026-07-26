/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C002607C
 * Callers:
 *     PplCreateLookasideList @ 0x1C001F588 (PplCreateLookasideList.c)
 *     PplDestroyLookasideList @ 0x1C0025FE8 (PplDestroyLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C007882C (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C00788D4 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(PLOOKASIDE_LIST_EX Lookaside, ULONG a2)
{
  if ( LOBYTE(Lookaside[1].L.Depth) )
    ExDeleteLookasideListEx(Lookaside);
  ExFreePoolWithTag(Lookaside, a2);
}
