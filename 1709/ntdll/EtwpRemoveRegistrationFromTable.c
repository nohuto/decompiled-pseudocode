/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180060CB4
 * Callers:
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode((PRTL_RB_TREE)&EtwpRegistrationTable, Node);
  memset(Node, 171, sizeof(_RTL_BALANCED_NODE));
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
