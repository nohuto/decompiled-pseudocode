/*
 * XREFs of NtThawRegistry @ 0x140660174
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 */

__int64 NtThawRegistry()
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return 3221225569LL;
}
