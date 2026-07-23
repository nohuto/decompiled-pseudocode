/*
 * XREFs of RtlExpandHashTable @ 0x180089FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpGetChainHead @ 0x180072B84 (RtlpGetChainHead.c)
 *     RtlpAllocateSecondLevelDir @ 0x18007BFD4 (RtlpAllocateSecondLevelDir.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // esi
  void **v7; // rdi
  __int64 v8; // rbp
  unsigned int Pivot; // edx
  __int64 ChainHead; // rax
  _QWORD *v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rdx
  __int64 v14; // r10
  _QWORD *v15; // r8
  int v16; // eax
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned int DivisorMask; // edx
  PVOID SecondLevelDir; // rax
  void *Directory; // rbp
  _QWORD *Heap; // rax
  _QWORD *v25; // rdi
  unsigned int v26; // [rsp+40h] [rbp+8h]

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = 1 << v3;
  v5 = v3 - 7;
  v6 = (TableSize + 128) ^ v4;
  v26 = v5;
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v25 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v5 = v26;
    *v25 = Directory;
    HashTable->Directory = v25;
  }
  v7 = (void **)HashTable->Directory;
  v8 = v5;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v5);
    if ( SecondLevelDir )
    {
      v7[v8] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v11 = (_QWORD *)ChainHead;
  v13 = (_QWORD *)(16LL * v6 + v12);
  v13[1] = v13;
  *v13 = v13;
  if ( (_QWORD *)*v11 != v11 )
  {
    v14 = ChainHead;
    do
    {
      v15 = *(_QWORD **)v14;
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 16LL) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v17 = *v15;
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (v18 = (_QWORD *)v15[1], (_QWORD *)*v18 != v15) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v19 != v13 )
          __fastfail(3u);
        *v15 = v13;
        v15[1] = v19;
        *v19 = v15;
        v13[1] = v15;
      }
      else
      {
        v14 = *(_QWORD *)v14;
      }
    }
    while ( *(_QWORD **)v14 != v11 );
    if ( (_QWORD *)*v13 != v13 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v11 == v11 )
      --HashTable->NonEmptyBuckets;
  }
  DivisorMask = HashTable->DivisorMask;
  if ( HashTable->Pivot == DivisorMask + 1 )
  {
    HashTable->Pivot = 0;
    HashTable->DivisorMask = (2 * DivisorMask) | 1;
  }
  return 1;
}
