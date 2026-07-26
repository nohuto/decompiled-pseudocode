/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C001323C
 * Callers:
 *     PplDestroyLookasideList @ 0x1C00131A8 (PplDestroyLookasideList.c)
 *     PplCreateLookasideList @ 0x1C0020EC4 (PplCreateLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C007DB3C (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C007DBE0 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
