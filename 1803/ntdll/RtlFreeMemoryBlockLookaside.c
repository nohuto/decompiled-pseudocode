/*
 * XREFs of RtlFreeMemoryBlockLookaside @ 0x18010F190
 * Callers:
 *     <none>
 * Callees:
 *     RtlInterlockedPushEntrySList_0 @ 0x18009E590 (RtlInterlockedPushEntrySList_0.c)
 */

NTSTATUS __cdecl RtlFreeMemoryBlockLookaside(PVOID MemoryBlockLookaside, PVOID Block)
{
  RtlInterlockedPushEntrySList_0(*((PSLIST_HEADER *)Block - 2), (PSLIST_ENTRY)Block - 3);
  return 0;
}
