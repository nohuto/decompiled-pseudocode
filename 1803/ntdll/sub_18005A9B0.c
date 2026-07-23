/*
 * XREFs of sub_18005A9B0 @ 0x18005A9B0
 * Callers:
 *     sub_180059DC0 @ 0x180059DC0 (sub_180059DC0.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 */

void __fastcall sub_18005A9B0(PVOID HeapHandle, __int64 a2)
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
      sub_18005B7B4(HeapHandle, *((_QWORD *)HeapHandle + 39));
    }
  }
}
