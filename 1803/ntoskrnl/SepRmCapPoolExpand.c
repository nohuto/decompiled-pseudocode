/*
 * XREFs of SepRmCapPoolExpand @ 0x1402A1BAC
 * Callers:
 *     SepReadAndPopulateCapes @ 0x140631A88 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140795114 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
