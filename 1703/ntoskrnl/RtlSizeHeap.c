/*
 * XREFs of RtlSizeHeap @ 0x14023BD00
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(18, 0LL, (ULONG_PTR)MemoryPointer, 0LL, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, MemoryPointer);
}
