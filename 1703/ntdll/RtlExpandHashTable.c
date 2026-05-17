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

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // esi
  _QWORD *v7; // rdi
  __int64 v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // rax
  _QWORD *v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // rdx
  __int64 v14; // r10
  _QWORD *v15; // r8
  int v16; // eax
  int v17; // edx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rbp
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // [rsp+40h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = 1 << v3;
  v5 = v3 - 7;
  v6 = (v1 + 128) ^ v4;
  v26 = v5;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v5 = v26;
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v7 = *(_QWORD **)(a1 + 32);
  v8 = v5;
  if ( !v7[v5] )
  {
    v25 = sub_18007D284(v5);
    if ( v25 )
    {
      v7[v8] = v25;
      goto LABEL_5;
    }
    if ( *(_DWORD *)(a1 + 8) == 128 )
    {
      *(_QWORD *)(a1 + 32) = *v7;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
    }
    return 0;
  }
LABEL_5:
  v9 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  v10 = sub_180073E34(a1, v9);
  ++*(_DWORD *)(a1 + 12);
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
      v16 = *(_DWORD *)(*(_QWORD *)v14 + 16LL) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v16 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v16 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
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
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v11 == v11 )
      --*(_DWORD *)(a1 + 24);
  }
  v17 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v17 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v17) | 1;
  }
  return 1;
}
