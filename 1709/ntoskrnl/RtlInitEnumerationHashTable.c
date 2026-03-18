/*
 * XREFs of RtlInitEnumerationHashTable @ 0x140103DD0
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlInitWeakEnumerationHashTable @ 0x140253D90 (RtlInitWeakEnumerationHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140731310 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x140731E80 (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140103E38 (RtlpPopulateContext.c)
 */

BOOLEAN __stdcall RtlInitEnumerationHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v7; // [rsp+20h] [rbp-28h] BYREF

  RtlpPopulateContext(HashTable, &v7);
  v4 = v7;
  ++HashTable->NumEnumerators;
  if ( v4->Flink == v4 )
    ++HashTable->NonEmptyBuckets;
  Flink = v4->Flink;
  if ( v4->Flink->Blink != v4 )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Blink = v4;
  Enumerator->HashEntry.Linkage.Flink = Flink;
  Flink->Blink = &Enumerator->HashEntry.Linkage;
  v4->Flink = &Enumerator->HashEntry.Linkage;
  Enumerator->BucketIndex = 0;
  Enumerator->HashEntry.Signature = 0LL;
  Enumerator->ChainHead = v4;
  return 1;
}
