/*
 * XREFs of RtlCreateHashTable @ 0x14003CD10
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140461CB4 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x140585F48 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x1405C56F0 (SepInitializeSharedSidMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
