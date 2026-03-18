/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x14004CBB0
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x1404B3E70 (PiLookupInDDBCache.c)
 *     PiDqQueryFreeActiveData @ 0x1404B8D48 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
