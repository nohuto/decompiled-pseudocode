/*
 * XREFs of SepRmCapPoolExpand @ 0x1402489F4
 * Callers:
 *     SepReadAndPopulateCapes @ 0x1405C5FA4 (SepReadAndPopulateCapes.c)
 *     SepReadAndInsertCaps @ 0x1406F9DD4 (SepReadAndInsertCaps.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall SepRmCapPoolExpand(void *a1, SIZE_T a2)
{
  ExFreePoolWithTag(a1, 0x70536553u);
  return ExAllocatePoolWithTag(PagedPool, a2, 0x70536553u);
}
