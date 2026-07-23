/*
 * XREFs of sub_18010E3D0 @ 0x18010E3D0
 * Callers:
 *     sub_180109568 @ 0x180109568 (sub_180109568.c)
 *     sub_18010E4A8 @ 0x18010E4A8 (sub_18010E4A8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_18010E3D0(_QWORD *a1)
{
  __int64 result; // rax
  _DWORD *Heap; // rbx
  PVOID v4; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  v4 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  *((_QWORD *)Heap + 1) = v4;
  if ( !v4 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0LL;
  }
  *Heap = 0;
  result = 1LL;
  Heap[1] = 10;
  *a1 = Heap;
  return result;
}
