/*
 * XREFs of RtlContractHashTable @ 0x1800853F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlpGetChainHead @ 0x180072B84 (RtlpGetChainHead.c)
 */

BOOLEAN __cdecl RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *v6; // r9
  _QWORD *ChainHead; // r10
  _QWORD *i; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  __int64 v12; // rdx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  void **Directory; // rsi
  __int64 v18; // rbx

  TableSize = HashTable->TableSize;
  if ( TableSize == 128 || HashTable->NumEnumerators )
    return 0;
  Pivot = HashTable->Pivot;
  if ( Pivot )
  {
    DivisorMask = Pivot - 1;
  }
  else
  {
    HashTable->DivisorMask >>= 1;
    DivisorMask = HashTable->DivisorMask;
  }
  HashTable->Pivot = DivisorMask;
  RtlpGetChainHead((__int64)HashTable, TableSize - 1);
  ChainHead = (_QWORD *)RtlpGetChainHead((__int64)HashTable, HashTable->Pivot);
  --HashTable->TableSize;
  if ( (_QWORD *)*v6 != v6 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = v9 )
  {
    v9 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    if ( (_QWORD *)v9[1] != v6 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v6 = v10;
    *(_QWORD *)(v10 + 8) = v6;
    if ( (_QWORD *)*i != ChainHead )
    {
      do
      {
        v11 = (_QWORD *)*i;
        if ( *(_QWORD *)(*i + 16LL) >= v9[2] )
          break;
        i = (_QWORD *)*i;
      }
      while ( (_QWORD *)*v11 != ChainHead );
    }
    v12 = *i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v9 = v12;
    v9[1] = i;
    *(_QWORD *)(v12 + 8) = v9;
  }
  v13 = HashTable->TableSize + 128;
  _BitScanReverse(&v14, v13);
  v15 = 1 << v14;
  v16 = v14 - 7;
  if ( v15 == v13 )
  {
    Directory = (void **)HashTable->Directory;
    v18 = v16;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory[v16]);
    Directory[v18] = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  return 1;
}
