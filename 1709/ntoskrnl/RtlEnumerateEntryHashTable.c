/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x140103C10
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140103B18 (SepCleanupMarkedForDeletionEntries.c)
 *     RtlWeaklyEnumerateEntryHashTable @ 0x140253E20 (RtlWeaklyEnumerateEntryHashTable.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140731310 (SepFindMatchingLowBoxNumberEntries.c)
 *     SepRmDestroyCapTable @ 0x140731E80 (SepRmDestroyCapTable.c)
 * Callees:
 *     <none>
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __stdcall RtlEnumerateEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator)
{
  unsigned int BucketIndex; // r11d
  unsigned int TableSize; // r10d
  unsigned int v6; // r8d
  unsigned int i; // r9d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  char *Directory; // rcx
  _LIST_ENTRY *ChainHead; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR Flink; // rcx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // rax
  struct _LIST_ENTRY *v14; // rdx
  struct _LIST_ENTRY *Blink; // r9
  _LIST_ENTRY *v16; // rdx
  struct _LIST_ENTRY *v17; // rax

  BucketIndex = Enumerator->BucketIndex;
  TableSize = HashTable->TableSize;
  v6 = BucketIndex;
  if ( BucketIndex >= TableSize )
    return 0LL;
  for ( i = BucketIndex + 128; ; ++i )
  {
    if ( v6 == BucketIndex )
    {
      ChainHead = Enumerator->ChainHead;
      Flink = Enumerator;
    }
    else
    {
      if ( TableSize <= 0x80 )
      {
        Directory = (char *)HashTable->Directory;
        v9 = v6;
      }
      else
      {
        _BitScanReverse(&v8, i);
        v9 = i ^ (1 << v8);
        Directory = (char *)*((_QWORD *)HashTable->Directory + v8 - 7);
      }
      ChainHead = (_LIST_ENTRY *)&Directory[16 * v9];
      Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)ChainHead;
    }
    if ( Flink->HashEntry.Linkage.Flink != ChainHead )
      break;
LABEL_8:
    if ( ++v6 >= TableSize )
      return 0LL;
  }
  while ( 1 )
  {
    Flink = (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink;
    if ( Flink->HashEntry.Signature )
      break;
    if ( Flink->HashEntry.Linkage.Flink == ChainHead )
      goto LABEL_8;
  }
  v14 = Enumerator->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Enumerator->HashEntry.Linkage.Flink->Blink != Enumerator
    || (Blink = Enumerator->HashEntry.Linkage.Blink, (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Blink->Flink != Enumerator) )
  {
    __fastfail(3u);
  }
  Blink->Flink = v14;
  v14->Blink = Blink;
  v16 = Enumerator->ChainHead;
  if ( v16 != ChainHead )
  {
    if ( v16->Flink == v16 )
      --HashTable->NonEmptyBuckets;
    if ( ChainHead->Flink == ChainHead )
      ++HashTable->NonEmptyBuckets;
  }
  Enumerator->BucketIndex = v6;
  Enumerator->ChainHead = ChainHead;
  v17 = Flink->HashEntry.Linkage.Flink;
  if ( (PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR)Flink->HashEntry.Linkage.Flink->Blink != Flink )
    __fastfail(3u);
  Enumerator->HashEntry.Linkage.Flink = v17;
  Enumerator->HashEntry.Linkage.Blink = &Flink->HashEntry.Linkage;
  v17->Blink = &Enumerator->HashEntry.Linkage;
  result = &Flink->HashEntry;
  Flink->HashEntry.Linkage.Flink = &Enumerator->HashEntry.Linkage;
  return result;
}
