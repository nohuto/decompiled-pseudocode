/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x140004700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
