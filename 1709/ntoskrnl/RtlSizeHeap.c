/*
 * XREFs of RtlSizeHeap @ 0x140251580
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     RtlpSizeHeapInternal @ 0x140254288 (RtlpSizeHeapInternal.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(18, 0LL, (ULONG_PTR)MemoryPointer, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, MemoryPointer);
}
