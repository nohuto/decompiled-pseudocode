/*
 * XREFs of PopEtInternerAllocate @ 0x140459760
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtInternerAllocate(__int64 a1, SIZE_T a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x54456F50u);
}
