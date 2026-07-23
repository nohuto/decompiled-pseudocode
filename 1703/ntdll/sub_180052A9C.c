/*
 * XREFs of sub_180052A9C @ 0x180052A9C
 * Callers:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

char *__fastcall sub_180052A9C(__int128 *a1)
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
    sub_180052B08((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
