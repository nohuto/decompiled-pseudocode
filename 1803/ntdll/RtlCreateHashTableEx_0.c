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

char __fastcall RtlCreateHashTableEx_0(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, ULONG a3, int a4)
{
  ULONG v4; // ebp
  _RTL_DYNAMIC_HASH_TABLE *Heap; // rbx
  int v10; // esi
  __int64 v11; // rax
  void *v12; // r8
  unsigned int v14; // ecx
  int v15; // ebp
  PVOID v16; // rax
  PVOID v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // [rsp+58h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = (_RTL_DYNAMIC_HASH_TABLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  memset(Heap, 0, sizeof(_RTL_DYNAMIC_HASH_TABLE));
  Heap->Pivot = 0;
  Heap->Flags = a4 | v10;
  Heap->TableSize = a2;
  Heap->DivisorMask = v4;
  Heap->Shift = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v14, a2 + 127);
    v22 = v14 - 7;
    v15 = (a2 + 127) ^ (1 << v14);
    v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v17 = v16;
    if ( v16 )
    {
      memset(v16, 0, 0x80uLL);
      v18 = 0LL;
      Heap->Directory = v17;
      while ( 1 )
      {
        v19 = sub_180078554((unsigned int)v18);
        if ( !v19 )
          break;
        if ( (unsigned int)v18 >= v22 )
          v20 = (unsigned int)(v15 + 1);
        else
          v20 = (unsigned int)(1 << (v18 + 7));
        sub_18007853C(v19, v20);
        *((_QWORD *)v17 + v18) = v21;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 > v22 )
          goto LABEL_9;
      }
    }
    goto LABEL_18;
  }
  v11 = sub_180078554(0LL);
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable(Heap);
    return 0;
  }
  sub_18007853C(v11, Heap->TableSize);
  Heap->Directory = v12;
LABEL_9:
  *a1 = Heap;
  return 1;
}
