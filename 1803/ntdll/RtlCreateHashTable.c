/*
 * XREFs of RtlCreateHashTable @ 0x1800783C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlCreateHashTable(PRTL_DYNAMIC_HASH_TABLE *HashTable, ULONG Shift, ULONG Flags)
{
  return RtlCreateHashTableEx_0(HashTable, 128LL, Shift, Flags);
}
