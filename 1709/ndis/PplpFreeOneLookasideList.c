/*
 * XREFs of PplpFreeOneLookasideList @ 0x1C00020CC
 * Callers:
 *     PplDestroyLookasideList @ 0x1C0002038 (PplDestroyLookasideList.c)
 *     PplCreateLookasideList @ 0x1C001B4F0 (PplCreateLookasideList.c)
 *     PplHotAddProcCompleteNotify @ 0x1C007CA0C (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C007CAB0 (PplHotAddProcStartNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PplpFreeOneLookasideList(struct _LOOKASIDE_LIST_EX *P, ULONG Tag)
{
  if ( LOBYTE(P[1].L.Depth) )
    ExDeleteLookasideListEx(P);
  ExFreePoolWithTag(P, Tag);
}
