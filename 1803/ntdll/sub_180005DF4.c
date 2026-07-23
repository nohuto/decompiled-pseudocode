/*
 * XREFs of sub_180005DF4 @ 0x180005DF4
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 * Callees:
 *     sub_180005E60 @ 0x180005E60 (sub_180005E60.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char *__fastcall sub_180005DF4(__int128 *a1)
{
  char *Heap; // rax
  char *v3; // rbx
  __int128 v4; // xmm0

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0xB0uLL);
    v4 = *a1;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_OWORD *)(v3 + 24) = v4;
    *((_DWORD *)v3 + 13) = 1;
    sub_180005E60((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
