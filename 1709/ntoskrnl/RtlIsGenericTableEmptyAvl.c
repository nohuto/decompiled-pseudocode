/*
 * XREFs of RtlIsGenericTableEmptyAvl @ 0x1400DFA40
 * Callers:
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiLookupInDDBCache @ 0x140544758 (PiLookupInDDBCache.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmptyAvl(PRTL_AVL_TABLE Table)
{
  return Table->NumberGenericTableElements == 0;
}
