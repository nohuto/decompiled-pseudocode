/*
 * XREFs of sub_180002DE4 @ 0x180002DE4
 * Callers:
 *     sub_180002D84 @ 0x180002D84 (sub_180002D84.c)
 *     sub_18010BF68 @ 0x18010BF68 (sub_18010BF68.c)
 *     sub_18010C2FC @ 0x18010C2FC (sub_18010C2FC.c)
 * Callees:
 *     sub_180002E64 @ 0x180002E64 (sub_180002E64.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

void *__fastcall sub_180002DE4(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  void *v7; // rbx

  if ( a1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
    v7 = Heap;
    if ( Heap )
    {
      *Heap = a3 & 0xFFFFFFFB;
      if ( (unsigned int)sub_180002E64(Heap, a1, a2) )
        return v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    }
  }
  else
  {
    RtlSetLastWin32Error(87);
  }
  return 0LL;
}
