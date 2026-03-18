/*
 * XREFs of NtFreezeRegistry @ 0x14065EC18
 * Callers:
 *     <none>
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  if ( a1 > 0x384 )
    return 3221225485LL;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(a1);
  return 3221225569LL;
}
