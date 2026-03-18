/*
 * XREFs of RtlCreateHashTable @ 0x140162310
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14053F3B4 (SepSetTokenCachedHandles.c)
 *     SepInitializeLowBoxNumberTable @ 0x140613FF0 (SepInitializeLowBoxNumberTable.c)
 *     SepInitializeSharedSidMap @ 0x140642BAC (SepInitializeSharedSidMap.c)
 * Callees:
 *     RtlpCreateHashTable @ 0x140162330 (RtlpCreateHashTable.c)
 */

BOOLEAN __stdcall RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlpCreateHashTable(HashTable, 128LL, Shift, Flags);
}
