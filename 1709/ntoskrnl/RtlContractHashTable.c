/*
 * XREFs of RtlContractHashTable @ 0x140111010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14001ABBC (RtlpGetChainHead.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *ChainHead; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // r10
  _QWORD *i; // rcx
  _QWORD *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  void **Directory; // rsi
  PVOID *v19; // rdi

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
  v8 = ChainHead;
  if ( (_QWORD *)*v7 != v7 && (_QWORD *)*ChainHead != ChainHead )
    --HashTable->NonEmptyBuckets;
  for ( i = ChainHead; ; *i = v10 )
  {
    v10 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    if ( (_QWORD *)v10[1] != v7 || (v15 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v7 = v15;
    *(_QWORD *)(v15 + 8) = v7;
    if ( (_QWORD *)*i != v8 )
    {
      do
      {
        v16 = (_QWORD *)*i;
        if ( *(_QWORD *)(*i + 16LL) >= v10[2] )
          break;
        i = (_QWORD *)*i;
      }
      while ( (_QWORD *)*v16 != v8 );
    }
    v17 = *i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v10 = v17;
    v10[1] = i;
    *(_QWORD *)(v17 + 8) = v10;
  }
  v11 = HashTable->TableSize + 128;
  _BitScanReverse(&v12, v11);
  v13 = 1 << v12;
  v14 = v12 - 7;
  if ( v13 == v11 )
  {
    Directory = (void **)HashTable->Directory;
    v19 = &Directory[v14];
    ExFreePoolWithTag(*v19, 0);
    *v19 = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      ExFreePoolWithTag(Directory, 0);
    }
  }
  return 1;
}
