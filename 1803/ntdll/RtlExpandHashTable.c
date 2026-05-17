/*
 * XREFs of RtlExpandHashTable @ 0x180089AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800745EC @ 0x1800745EC (sub_1800745EC.c)
 *     sub_180078554 @ 0x180078554 (sub_180078554.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char __fastcall RtlExpandHashTable(__int64 a1)
{
  int v1; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  __int64 v5; // rbp
  char v6; // cl
  _QWORD *v7; // rdi
  unsigned int v8; // edx
  _QWORD *v9; // rax
  _QWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r8
  _QWORD *v13; // rdx
  _QWORD *v14; // r10
  int v15; // eax
  int v16; // edx
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD *Heap; // rax
  _QWORD *v24; // rdi
  char v25; // [rsp+40h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 8388480 || *(_DWORD *)(a1 + 28) )
    return 0;
  _BitScanReverse(&v3, v1 + 128);
  v4 = (v1 + 128) ^ (1 << v3);
  v5 = v3 - 7;
  v6 = v3 - 7;
  v25 = v6;
  if ( v1 == 128 )
  {
    v22 = *(_QWORD *)(a1 + 32);
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v24 = Heap;
    if ( !Heap )
      return 0;
    memset(Heap, 0, 0x80uLL);
    v6 = v25;
    *v24 = v22;
    *(_QWORD *)(a1 + 32) = v24;
  }
  v7 = *(_QWORD **)(a1 + 32);
  if ( !v7[v5] )
  {
    v21 = sub_180078554(v6);
    if ( v21 )
    {
      v7[v5] = v21;
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
  v8 = *(_DWORD *)(a1 + 12);
  ++*(_DWORD *)(a1 + 8);
  v9 = (_QWORD *)sub_1800745EC(a1, v8);
  ++*(_DWORD *)(a1 + 12);
  v10 = v9;
  v12 = (_QWORD *)(16LL * v4 + v11);
  v12[1] = v12;
  *v12 = v12;
  v13 = (_QWORD *)*v9;
  if ( (_QWORD *)*v10 != v10 )
  {
    v14 = v9;
    do
    {
      v15 = *((_DWORD *)v13 + 4) >> *(_DWORD *)(a1 + 4);
      if ( (((2 * *(_DWORD *)(a1 + 16)) | 1) & ((69069 * v15 + 1) & 0xFFFF0000 | ((unsigned int)(1103515245 * v15 + 12345) >> 16))) == *(_DWORD *)(a1 + 8) - 1 )
      {
        v18 = *v13;
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v19 = (_QWORD *)v13[1], (_QWORD *)*v19 != v13) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v20 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v20 != v12 )
          __fastfail(3u);
        *v13 = v12;
        v13[1] = v20;
        *v20 = v13;
        v12[1] = v13;
      }
      else
      {
        v14 = v13;
      }
      v13 = (_QWORD *)*v14;
    }
    while ( (_QWORD *)*v14 != v10 );
    if ( (_QWORD *)*v12 != v12 )
      ++*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v10 == v10 )
      --*(_DWORD *)(a1 + 24);
  }
  v16 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) == v16 + 1 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 16) = (2 * v16) | 1;
  }
  return 1;
}
