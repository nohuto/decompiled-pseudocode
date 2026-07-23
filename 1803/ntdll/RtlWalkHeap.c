/*
 * XREFs of RtlWalkHeap @ 0x1800EBE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  return sub_180061F40((__int64)HeapHandle, (__int64)Entry);
}
