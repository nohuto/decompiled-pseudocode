/*
 * XREFs of MmIssueMemoryListCommand @ 0x14057CB60
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1405762E0 (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x14040E2BC (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
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
