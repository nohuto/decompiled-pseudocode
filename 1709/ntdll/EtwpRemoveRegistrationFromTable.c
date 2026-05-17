/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180060CB4
 * Callers:
 *     EtwNotificationUnregister @ 0x180060B70 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18003A530 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  RtlRbRemoveNode((__int64)&EtwpRegistrationTable, a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
