/*
 * XREFs of NtThawRegistry @ 0x14044F43C
 * Callers:
 *     <none>
 * Callees:
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

__int64 NtThawRegistry()
{
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmThawRegistry();
  else
    return 3221225569LL;
}
