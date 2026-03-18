/*
 * XREFs of RtlExpandHashTable @ 0x140150B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAllocateSecondLevelDir @ 0x14003CEC4 (RtlpAllocateSecondLevelDir.c)
 *     RtlpGetChainHead @ 0x14006622C (RtlpGetChainHead.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  unsigned int TableSize; // edx
  unsigned int v3; // esi
  char v4; // cl
  __int64 v5; // rsi
  unsigned int v6; // ebp
  void **v7; // rdi
  unsigned int Pivot; // edx
  __int64 ChainHead; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // rdx
  unsigned int DivisorMask; // edx
  __int64 v15; // r10
  void *Directory; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rdi
  PVOID SecondLevelDir; // rax
  _QWORD *v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  TableSize = HashTable->TableSize;
  if ( TableSize == 8388480 || HashTable->NumEnumerators )
    return 0;
  _BitScanReverse(&v3, TableSize + 128);
  v4 = v3;
  v5 = v3 - 7;
  v6 = (TableSize + 128) ^ (1 << v4);
  if ( TableSize == 128 )
  {
    Directory = HashTable->Directory;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x62615448u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      return 0;
    memset(PoolWithTag, 0, 0x80uLL);
    *v18 = Directory;
    HashTable->Directory = v18;
  }
  v7 = (void **)HashTable->Directory;
  if ( !v7[v5] )
  {
    SecondLevelDir = RtlpAllocateSecondLevelDir(v5);
    if ( SecondLevelDir )
    {
      v7[v5] = SecondLevelDir;
      goto LABEL_5;
    }
    if ( HashTable->TableSize == 128 )
    {
      HashTable->Directory = *v7;
      ExFreePoolWithTag(v7, 0);
    }
    return 0;
  }
LABEL_5:
  Pivot = HashTable->Pivot;
  ++HashTable->TableSize;
  ChainHead = RtlpGetChainHead((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v10 = (_QWORD *)ChainHead;
  v12 = (_QWORD *)(16LL * v6 + v11);
  v12[1] = v12;
  *v12 = v12;
  if ( (_QWORD *)*v10 != v10 )
  {
    v15 = ChainHead;
    do
    {
      v20 = *(_QWORD **)v15;
      v21 = *(_DWORD *)(*(_QWORD *)v15 + 16LL) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v21 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v21
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v22 = *v20;
        v23 = (_QWORD *)v20[1];
        if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v23 != v20 )
          __fastfail(3u);
        *v23 = v22;
        *(_QWORD *)(v22 + 8) = v23;
        v24 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v24 != v12 )
          __fastfail(3u);
        *v20 = v12;
        v20[1] = v24;
        *v24 = v20;
        v12[1] = v20;
      }
      else
      {
        v15 = *(_QWORD *)v15;
      }
    }
    while ( *(_QWORD **)v15 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++HashTable->NonEmptyBuckets;
    if ( (_QWORD *)*v10 == v10 )
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
