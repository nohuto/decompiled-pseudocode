/*
 * XREFs of RtlContractHashTable @ 0x1400AFA10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetChainHead @ 0x14006C56C (RtlpGetChainHead.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlContractHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int Pivot; // eax
  unsigned int DivisorMask; // eax
  _QWORD *ChainHead; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // r10
  _QWORD *i; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *j; // r8
  _QWORD *v13; // rax
  unsigned int v14; // edx
  int v15; // ecx
  void **Directory; // rsi
  PVOID *v17; // rdi

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
    if ( (_QWORD *)v10[1] != v7 || (v11 = *v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v7 = v11;
    *(_QWORD *)(v11 + 8) = v7;
    for ( j = (_QWORD *)*i; j != v8; j = (_QWORD *)*j )
    {
      if ( j[2] >= v10[2] )
        break;
      i = j;
    }
    v13 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i )
      __fastfail(3u);
    *v10 = v13;
    v10[1] = i;
    v13[1] = v10;
  }
  v14 = HashTable->TableSize + 128;
  _BitScanReverse((unsigned int *)&v15, v14);
  if ( 1 << v15 == v14 )
  {
    Directory = (void **)HashTable->Directory;
    v17 = &Directory[v15 - 7];
    ExFreePoolWithTag(*v17, 0);
    *v17 = 0LL;
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *Directory;
      ExFreePoolWithTag(Directory, 0);
    }
  }
  return 1;
}
