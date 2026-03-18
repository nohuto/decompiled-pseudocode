/*
 * XREFs of MmIssueMemoryListCommand @ 0x140612AB4
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1405EC688 (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140478484 (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmIssueMemoryListCommand(_DWORD *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  if ( a2 < 4 )
    return 3221225476LL;
  if ( *a1 > 5u )
    return 3221225485LL;
  if ( *a1 == 3 || SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a3) )
    return MmPerformMemoryListCommand();
  return 3221225569LL;
}
