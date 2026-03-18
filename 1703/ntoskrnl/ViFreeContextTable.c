/*
 * XREFs of ViFreeContextTable @ 0x140766F08
 * Callers:
 *     VfInsertContext @ 0x140250040 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140250240 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
