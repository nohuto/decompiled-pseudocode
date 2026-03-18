/*
 * XREFs of PopEtBucketsFree @ 0x1404599CC
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x1404582E4 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
