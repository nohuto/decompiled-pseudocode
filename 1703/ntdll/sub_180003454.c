/*
 * XREFs of sub_180003454 @ 0x180003454
 * Callers:
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 * Callees:
 *     sub_1800034D4 @ 0x1800034D4 (sub_1800034D4.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 */

unsigned int *__fastcall sub_180003454(__int64 a1, unsigned int a2, int a3)
{
  unsigned int *Heap; // rax
  unsigned int *v7; // rbx

  if ( a1 )
  {
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 40LL);
    v7 = Heap;
    if ( Heap )
    {
      *Heap = a3 & 0xFFFFFFFB;
      if ( (unsigned int)sub_1800034D4(Heap, a1, a2) )
        return v7;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    }
  }
  else
  {
    RtlSetLastWin32Error(87LL);
  }
  return 0LL;
}
