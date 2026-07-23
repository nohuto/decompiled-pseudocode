/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x180072AD0
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800F1E30 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     RtlpGetChainHead @ 0x180072B84 (RtlpGetChainHead.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r10d
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v3; // r9
  PRTL_DYNAMIC_HASH_TABLE v4; // r11
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY ChainHead; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // r8
  _QWORD *p_Flink; // rdx
  _LIST_ENTRY *v10; // rcx

  BucketIndex = Enumerator->BucketIndex;
  v3 = Enumerator;
  v4 = HashTable;
  if ( BucketIndex < HashTable->TableSize )
  {
    while ( 2 )
    {
      if ( BucketIndex == v3->BucketIndex )
      {
        ChainHead = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v3->ChainHead;
        result = &v3->HashEntry;
      }
      else
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)RtlpGetChainHead(v4, BucketIndex);
        ChainHead = result;
      }
      while ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink != ChainHead )
      {
        result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink;
        if ( result->Signature )
        {
          Flink = v3->HashEntry.Linkage.Flink;
          if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)v3->HashEntry.Linkage.Flink->Blink != v3
            || (Blink = v3->HashEntry.Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != v3) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
          p_Flink = &v3->ChainHead->Flink;
          if ( p_Flink != (_QWORD *)ChainHead )
          {
            if ( (_QWORD *)*p_Flink == p_Flink )
              --v4->NonEmptyBuckets;
            if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)ChainHead->Linkage.Flink == ChainHead )
              ++v4->NonEmptyBuckets;
          }
          v3->BucketIndex = BucketIndex;
          v3->ChainHead = &ChainHead->Linkage;
          v10 = result->Linkage.Flink;
          if ( (PRTL_DYNAMIC_HASH_TABLE_ENTRY)result->Linkage.Flink->Blink != result )
            __fastfail(3u);
          v3->HashEntry.Linkage.Flink = v10;
          v3->HashEntry.Linkage.Blink = &result->Linkage;
          v10->Blink = &v3->HashEntry.Linkage;
          result->Linkage.Flink = &v3->HashEntry.Linkage;
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
