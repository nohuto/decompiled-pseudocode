/*
 * XREFs of PopSuspendResumePdc @ 0x1406FFA1C
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1406FD0C4 (PopIssueActionRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_14038D4E0 + 1);
  if ( *(&xmmword_14038D4E0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_14038D4E0 + 1))();
  return result;
}
