/*
 * XREFs of PopSuspendResumePdc @ 0x140576F64
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x140576C20 (PopIssueActionRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 PopSuspendResumePdc()
{
  __int64 result; // rax

  result = (__int64)*(&xmmword_14036E6F0 + 1);
  if ( *(&xmmword_14036E6F0 + 1) )
    return ((__int64 (*)(void))*(&xmmword_14036E6F0 + 1))();
  return result;
}
