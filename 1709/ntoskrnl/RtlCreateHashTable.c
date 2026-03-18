/*
 * XREFs of RtlCreateHashTable @ 0x140101FE0
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140563B44 (SepSetTokenCachedHandles.c)
 *     SepInitializeSharedSidMap @ 0x1405D8AC0 (SepInitializeSharedSidMap.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405F0040 (SepInitializeLowBoxNumberTable.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140102000 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
