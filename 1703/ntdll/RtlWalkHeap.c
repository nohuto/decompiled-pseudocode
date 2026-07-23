/*
 * XREFs of RtlWalkHeap @ 0x180007280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  char v2; // r8

  v2 = 1;
  return sub_180008414(HeapHandle, Entry, v2);
}
