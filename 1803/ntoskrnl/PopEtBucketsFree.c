/*
 * XREFs of PopEtBucketsFree @ 0x1405E9F88
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x140537744 (PopEtAggregateGet.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
