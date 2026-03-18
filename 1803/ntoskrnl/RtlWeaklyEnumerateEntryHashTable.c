/*
 * XREFs of RtlWeaklyEnumerateEntryHashTable @ 0x1402894A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateEntryHashTable @ 0x1400A0FE0 (RtlEnumerateEntryHashTable.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlWeaklyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  return RtlEnumerateEntryHashTable(HashTable, Enumerator);
}
