/*
 * XREFs of RtlInitWeakEnumerationHashTable @ 0x140253D90
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitEnumerationHashTable @ 0x140103DD0 (RtlInitEnumerationHashTable.c)
 */

BOOLEAN __stdcall RtlInitWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlInitEnumerationHashTable(HashTable, Enumerator);
}
