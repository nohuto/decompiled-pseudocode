/*
 * XREFs of NtThawRegistry @ 0x140660174
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtThawRegistry(void)
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return -1073741727;
}
