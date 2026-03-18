/*
 * XREFs of RtlSizeHeap @ 0x140287050
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSizeHeapInternal @ 0x14028C3D4 (RtlpSizeHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x1402932C0 (RtlpLogHeapFailure.c)
 */

// local variable allocation has failed, the output may be wrong!
SIZE_T __stdcall RtlSizeHeap(PVOID HeapHandle, ULONG Flags, PVOID MemoryPointer)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)MemoryPointer, 0, 0LL);
  return RtlpSizeHeapInternal(HeapHandle, *(_QWORD *)&Flags, MemoryPointer);
}
