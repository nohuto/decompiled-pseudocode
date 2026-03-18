/*
 * XREFs of PopEtBucketsAllocate @ 0x1405E9EE8
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x140537744 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
