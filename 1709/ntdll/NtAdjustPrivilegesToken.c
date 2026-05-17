/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1800A08E0
 * Callers:
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007C820 (RtlAdjustPrivilege.c)
 *     RtlReleasePrivilege @ 0x180085270 (RtlReleasePrivilege.c)
 *     RtlpSysVolTakeOwnership @ 0x18008A1B0 (RtlpSysVolTakeOwnership.c)
 *     RtlRemovePrivileges @ 0x18008B380 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

__int64 NtAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
