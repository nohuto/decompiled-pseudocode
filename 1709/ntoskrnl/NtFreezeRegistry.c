/*
 * XREFs of NtFreezeRegistry @ 0x14044E118
 * Callers:
 *     <none>
 * Callees:
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  if ( TimeOutInSeconds > 0x384 )
    return -1073741811;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(TimeOutInSeconds);
  return -1073741727;
}
