/*
 * XREFs of RtlEndWeakEnumerationHashTable @ 0x1402893A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEndEnumerationHashTable @ 0x1400A1160 (RtlEndEnumerationHashTable.c)
 */

void __stdcall RtlEndWeakEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  RtlEndEnumerationHashTable(HashTable, Enumerator);
}
