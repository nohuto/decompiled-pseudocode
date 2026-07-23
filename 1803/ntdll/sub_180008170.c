/*
 * XREFs of sub_180008170 @ 0x180008170
 * Callers:
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180021260 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_180008170(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&stru_18015D380);
  RtlRbRemoveNode(&Tree, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&stru_18015D380);
}
