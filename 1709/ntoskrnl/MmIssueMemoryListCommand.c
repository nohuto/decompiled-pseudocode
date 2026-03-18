/*
 * XREFs of MmIssueMemoryListCommand @ 0x1406E275C
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 *     PfpLogEventRequest @ 0x1406F257C (PfpLogEventRequest.c)
 * Callees:
 *     MmPerformMemoryListCommand @ 0x140430948 (MmPerformMemoryListCommand.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
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
