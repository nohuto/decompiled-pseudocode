/*
 * XREFs of sub_18000C480 @ 0x18000C480
 * Callers:
 *     sub_18000C298 @ 0x18000C298 (sub_18000C298.c)
 * Callees:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

void __fastcall sub_18000C480(PVOID HeapHandle, __int64 a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbp
  _DWORD *Heap; // rax

  if ( !*(_QWORD *)a2 )
  {
    v4 = (1055 - *(_DWORD *)(a2 + 8)) & 0xFFFFFFE0;
    v5 = (unsigned __int64)v4 >> 3;
    Heap = RtlAllocateHeap(HeapHandle, 0x80000Au, v4 * (*(_DWORD *)(a2 + 12) != 0 ? 16LL : 8LL) + v5 + 56);
    if ( Heap )
    {
      *((_BYTE *)Heap - 1) = 1;
      Heap[2] = v4 + *(_DWORD *)(a2 + 8);
      Heap[6] = *(_DWORD *)(a2 + 8);
      Heap[3] = *(_DWORD *)(a2 + 12);
      *((_QWORD *)Heap + 5) = Heap + 14;
      *((_QWORD *)Heap + 6) = (char *)Heap + v5 + 56;
      *((_QWORD *)Heap + 4) = *(_QWORD *)(a2 + 32);
      *(_QWORD *)a2 = Heap;
      sub_18000DC18(HeapHandle, *((_QWORD *)HeapHandle + 39));
    }
  }
}
