/*
 * XREFs of RtlWalkHeap @ 0x1800EFC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  __int64 v2; // r8

  LOBYTE(v2) = 1;
  return RtlpWalkHeapInternal((__int64)HeapHandle, (unsigned __int64 *)Entry, v2);
}
