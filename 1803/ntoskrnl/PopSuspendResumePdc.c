/*
 * XREFs of PopSuspendResumePdc @ 0x1405EC3C4
 * Callers:
 *     NtPowerInformation @ 0x1405203C4 (NtPowerInformation.c)
 *     PopIssueActionRequest @ 0x1405EBF50 (PopIssueActionRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (*PopSuspendResumePdc())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1403D1438;
  if ( qword_1403D1438 )
    return (__int64 (*)(void))qword_1403D1438();
  return result;
}
