/*
 * XREFs of PopEtAllocate @ 0x1406D0D14
 * Callers:
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PopEtInit @ 0x140826858 (PopEtInit.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PopEtAllocate(SIZE_T a1)
{
  return ExAllocatePoolWithTag(PagedPool, a1, 0x54456F50u);
}
