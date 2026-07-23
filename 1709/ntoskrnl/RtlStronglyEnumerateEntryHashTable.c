/*
 * XREFs of RtlStronglyEnumerateEntryHashTable @ 0x140253DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14001ABBC (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlStronglyEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // rdx

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  if ( BucketIndex < HashTable->TableSize )
  {
    while ( 2 )
    {
      if ( BucketIndex == v3->BucketIndex )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->HashEntry.Linkage.Flink;
        ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->ChainHead;
      }
      else
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead((__int64)v4, BucketIndex);
        ChainHead = result;
      }
      while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink != ChainHead )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
        if ( result->Signature )
        {
          v3->BucketIndex = BucketIndex;
          v3->ChainHead = &ChainHead->Linkage;
          v3->HashEntry.Linkage.Flink = &result->Linkage;
          return result;
        }
      }
      if ( ++BucketIndex < v4->TableSize )
        continue;
      break;
    }
  }
  return 0LL;
}
