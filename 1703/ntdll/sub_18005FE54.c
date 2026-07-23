/*
 * XREFs of sub_18005FE54 @ 0x18005FE54
 * Callers:
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall sub_18005FE54(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&stru_18015C348);
  RtlRbRemoveNode((PRTL_RB_TREE)&Parent, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&stru_18015C348);
}
