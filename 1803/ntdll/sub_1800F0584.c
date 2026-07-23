/*
 * XREFs of sub_1800F0584 @ 0x1800F0584
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180048460 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800F0624 @ 0x1800F0624 (sub_1800F0624.c)
 */

char sub_1800F0584()
{
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = (unsigned __int64 *)RtlAllocateHeap(qword_18015AA70, 0, 0x840uLL);
  qword_18015AA78 = (__int64)Heap;
  v1 = Heap;
  if ( Heap )
  {
    sub_1800F0624(Heap, 0LL);
    qword_18015AA88 = (__int64)&qword_18015AA80;
    qword_18015AA80 = (__int64)&qword_18015AA80;
    qword_18015AA98 = (__int64)&qword_18015AA90;
    qword_18015AA90 = (__int64)&qword_18015AA90;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    v1[2] = -1LL;
    *v1 = v3;
    qword_18015D770 = RtlAllocateHeap(qword_18015AA70, 0, 0x28000uLL);
    LOBYTE(Heap) = qword_18015D770 != 0LL;
  }
  return (char)Heap;
}
