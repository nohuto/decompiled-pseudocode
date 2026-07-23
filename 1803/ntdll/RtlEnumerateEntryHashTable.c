/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x18006C5B0
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x1800EE220 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  ULONG BucketIndex; // r9d
  unsigned int i; // r11d
  _QWORD *Directory; // rbx
  unsigned int v6; // ecx
  __int64 v7; // r8
  PLIST_ENTRY ChainHead; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v9; // rcx
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *Flink; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY *Blink; // r11
  PLIST_ENTRY v14; // rax
  _LIST_ENTRY *v15; // rax

  BucketIndex = Enumerator->BucketIndex;
  if ( BucketIndex >= HashTable->TableSize )
    return 0LL;
  for ( i = BucketIndex + 128; ; ++i )
  {
    if ( BucketIndex == Enumerator->BucketIndex )
    {
      ChainHead = Enumerator->ChainHead;
      v9 = Enumerator;
    }
    else
    {
      Directory = HashTable->Directory;
      if ( HashTable->TableSize <= 0x80 )
      {
        v7 = BucketIndex;
      }
      else
      {
        _BitScanReverse(&v6, i);
        v7 = i ^ (1 << v6);
        Directory = (_QWORD *)Directory[v6 - 7];
      }
      ChainHead = (PLIST_ENTRY)&Directory[2 * v7];
      v9 = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
    }
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)v9->HashEntry.Linkage.Flink;
    if ( Flink != (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      break;
LABEL_8:
    if ( ++BucketIndex >= HashTable->TableSize )
      return 0LL;
  }
  while ( !Flink->Signature )
  {
    Flink = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink;
    if ( Flink == (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ChainHead )
      goto LABEL_8;
  }
  v12 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator
    || (Blink = Enumerator->HashEntry.Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator) )
  {
    __fastfail(3u);
  }
  Blink->Flink = v12;
  v12->Blink = Blink;
  v14 = Enumerator->ChainHead;
  if ( v14 != ChainHead )
  {
    if ( v14->Flink == v14 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = BucketIndex;
  Enumerator->ChainHead = ChainHead;
  v15 = Flink->Linkage.Flink;
  if ( (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)Flink->Linkage.Flink->Blink != Flink )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v15;
  Enumerator->HashEntry.Linkage.Blink = &Flink->Linkage;
  v15->Blink = &Enumerator->HashEntry.Linkage;
  result = Flink;
  Flink->Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
