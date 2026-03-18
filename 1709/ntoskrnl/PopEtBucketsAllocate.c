/*
 * XREFs of PopEtBucketsAllocate @ 0x1404599E8
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1404582E4 (PopEtAggregateGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
