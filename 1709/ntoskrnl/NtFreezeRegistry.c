/*
 * XREFs of NtFreezeRegistry @ 0x14044E118
 * Callers:
 *     <none>
 * Callees:
 *     CmFreezeRegistry @ 0x14044E168 (CmFreezeRegistry.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  if ( a1 > 0x384 )
    return 3221225485LL;
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return CmFreezeRegistry(a1);
  return 3221225569LL;
}
