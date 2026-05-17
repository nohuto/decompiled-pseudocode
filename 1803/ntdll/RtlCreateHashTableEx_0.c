/*
 * XREFs of RtlCreateHashTableEx_0 @ 0x1800783D0
 * Callers:
 *     RtlCreateHashTable @ 0x1800783C0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1800897B0 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18007853C @ 0x18007853C (sub_18007853C.c)
 *     sub_180078554 @ 0x180078554 (sub_180078554.c)
 *     RtlDeleteHashTable @ 0x18007C0F0 (RtlDeleteHashTable.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char __fastcall RtlCreateHashTableEx_0(_DWORD **a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *Heap; // rbx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v16; // ecx
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // [rsp+58h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  memset(Heap, 0, 0x28uLL);
  Heap[3] = 0;
  *Heap = a4 | v10;
  Heap[2] = a2;
  Heap[4] = v4;
  Heap[1] = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v16, a2 + 127);
    v24 = v16 - 7;
    v17 = (a2 + 127) ^ (1 << v16);
    v18 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *((_QWORD *)Heap + 4) = v19;
      while ( 1 )
      {
        v21 = sub_180078554((unsigned int)v20);
        v13 = v21;
        if ( !v21 )
          break;
        if ( (unsigned int)v20 >= v24 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        sub_18007853C(v21, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v24 )
          goto LABEL_9;
      }
    }
    goto LABEL_18;
  }
  v11 = sub_180078554(0LL);
  v13 = v11;
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable(Heap, v12, v13);
    return 0;
  }
  sub_18007853C(v11, (unsigned int)Heap[2]);
  *((_QWORD *)Heap + 4) = v14;
LABEL_9:
  *a1 = Heap;
  return 1;
}
