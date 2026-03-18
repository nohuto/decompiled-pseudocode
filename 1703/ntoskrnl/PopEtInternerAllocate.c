/*
 * XREFs of PopEtInternerAllocate @ 0x1406D2AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PopEtInternerAllocate(__int64 a1, SIZE_T a2)
{
  return ExAllocatePoolWithTag(PagedPool, a2, 0x54456F50u);
}
