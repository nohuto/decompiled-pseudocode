/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x14006DC70
 * Callers:
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x140697544 (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
