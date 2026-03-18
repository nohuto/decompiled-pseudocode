/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x140253D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x140103D80 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
