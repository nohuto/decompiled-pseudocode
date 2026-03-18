/*
 * XREFs of ViFreeContextTable @ 0x1407A8AA4
 * Callers:
 *     VfInsertContext @ 0x140276850 (VfInsertContext.c)
 *     VfRemoveContext @ 0x140276A20 (VfRemoveContext.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall ViFreeContextTable(PVOID Entry)
{
  ExFreeToNPagedLookasideList(&ViObjectContextTableLookaside, Entry);
}
