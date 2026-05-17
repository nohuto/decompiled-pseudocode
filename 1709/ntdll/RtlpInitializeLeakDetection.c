/*
 * XREFs of RtlpInitializeLeakDetection @ 0x1800F4114
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180076800 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpInitializeMap @ 0x1800F41B4 (RtlpInitializeMap.c)
 */

char RtlpInitializeLeakDetection()
{
  __int64 Heap; // rax
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 2112LL);
  RtlpProcessMemoryMap = Heap;
  v1 = (_QWORD *)Heap;
  if ( Heap )
  {
    RtlpInitializeMap(Heap, 0LL);
    qword_18015DA88 = (__int64)&RtlpBusyList;
    RtlpBusyList = (__int64)&RtlpBusyList;
    qword_18015DA98 = (__int64)&RtlpLeakList;
    RtlpLeakList = (__int64)&RtlpLeakList;
    v2 = 0x100000LL;
    do
    {
      v3 = v2;
      v2 <<= 8;
    }
    while ( v2 >= v3 );
    v1[2] = -1LL;
    *v1 = v3;
    RtlpTempBlocks = (void *)RtlAllocateHeap(RtlpLeakHeap, 0, 163840LL);
    LOBYTE(Heap) = RtlpTempBlocks != 0LL;
  }
  return Heap;
}
