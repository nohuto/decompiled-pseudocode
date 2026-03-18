/*
 * XREFs of ViFreeContextTable @ 0x140815AD4
 * Callers:
 *     VfInsertContext @ 0x1402A9970 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1402A9B40 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
