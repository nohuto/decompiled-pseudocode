/*
 * XREFs of RtlNumberGenericTableElementsAvl @ 0x1400B9E40
 * Callers:
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     PiDmGetObjectCount @ 0x140728DFC (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlNumberGenericTableElementsAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements;
}
