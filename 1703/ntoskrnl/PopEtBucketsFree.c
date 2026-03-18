/*
 * XREFs of PopEtBucketsFree @ 0x1406D0E8C
 * Callers:
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
