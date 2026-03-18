/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1400F9D00
 * Callers:
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x1406C2D0C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
