/*
 * XREFs of NtFreezeRegistry @ 0x14065EC18
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(TimeOutInSeconds);
  return -1073741727;
}
