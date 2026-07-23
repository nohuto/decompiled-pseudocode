/*
 * XREFs of sub_1800F349C @ 0x1800F349C
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180070460 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1800F353C @ 0x1800F353C (sub_1800F353C.c)
 */

char sub_1800F349C()
{
  unsigned __int64 *Heap; // rax
  unsigned __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = (unsigned __int64 *)RtlAllocateHeap(qword_180159A28, 0, 0x840uLL);
  qword_180159A30 = (__int64)Heap;
  v1 = Heap;
  if ( Heap )
  {
    sub_1800F353C(Heap, 0LL);
    qword_180159A48 = (__int64)&qword_180159A40;
    qword_180159A40 = (__int64)&qword_180159A40;
    qword_180159A58 = (__int64)&qword_180159A50;
    qword_180159A50 = (__int64)&qword_180159A50;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    v1[2] = -1LL;
    *v1 = v3;
    qword_18015C740 = RtlAllocateHeap(qword_180159A28, 0, 0x28000uLL);
    LOBYTE(Heap) = qword_18015C740 != 0LL;
  }
  return (char)Heap;
}
