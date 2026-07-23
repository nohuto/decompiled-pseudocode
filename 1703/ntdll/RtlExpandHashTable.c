/*
 * XREFs of RtlExpandHashTable @ 0x18008C560
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180073E34 @ 0x180073E34 (sub_180073E34.c)
 *     sub_18007D284 @ 0x18007D284 (sub_18007D284.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

BOOLEAN __cdecl RtlExpandHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  ULONG TableSize; // edx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // esi
  PVOID *v7; // rdi
  __int64 v8; // rbp
  ULONG Pivot; // edx
  __int64 v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rdx
  __int64 v14; // r10
  _QWORD *v15; // r8
  int v16; // eax
  ULONG DivisorMask; // edx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  PVOID Directory; // rbp
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  PVOID v25; // rax
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
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v5 = v26;
    *v24 = Directory;
    HashTable->Directory = v24;
  }
  v7 = (PVOID *)HashTable->Directory;
  v8 = v5;
  if ( !v7[v5] )
  {
    v25 = sub_18007D284(v5);
    if ( v25 )
    {
      v7[v8] = v25;
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
  v10 = sub_180073E34((__int64)HashTable, Pivot);
  ++HashTable->Pivot;
  v11 = (_QWORD *)v10;
  v13 = (_QWORD *)(16LL * v6 + v12);
  v13[1] = v13;
  *v13 = v13;
  if ( (_QWORD *)*v11 != v11 )
  {
    v14 = v10;
    do
    {
      v15 = *(_QWORD **)v14;
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 16LL) >> HashTable->Shift;
      if ( (((2 * HashTable->DivisorMask) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16
                                                                                                 + 12345) >> 16))) == HashTable->TableSize - 1 )
      {
        v19 = *v15;
        v20 = (_QWORD *)v15[1];
        if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v20 != v15 )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v21 = (_QWORD *)v13[1];
        if ( (_QWORD *)*v21 != v13 )
          __fastfail(3u);
        *v15 = v13;
        v15[1] = v21;
        *v21 = v15;
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
