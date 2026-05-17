/*
 * XREFs of sub_18005FE54 @ 0x18005FE54
 * Callers:
 *     EtwNotificationUnregister @ 0x18005FD10 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180028010 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall sub_18005FE54(unsigned __int64 *a1)
{
  RtlAcquireSRWLockExclusive(&qword_18015C348);
  RtlRbRemoveNode((__int64)&qword_18015C338, a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&qword_18015C348);
}
