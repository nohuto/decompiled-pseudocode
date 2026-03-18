/*
 * XREFs of SepRmCapPoolExpand @ 0x140260110
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1405EB5EC (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x140731814 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
