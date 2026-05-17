/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x18009B2E0
 * Callers:
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 *     RtlAdjustPrivilege @ 0x18007B4A0 (RtlAdjustPrivilege.c)
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     RtlReleasePrivilege @ 0x180080630 (RtlReleasePrivilege.c)
 *     RtlRemovePrivileges @ 0x180086DE0 (RtlRemovePrivileges.c)
 *     sub_18008A0A4 @ 0x18008A0A4 (sub_18008A0A4.c)
 * Callees:
 *     <none>
 */

__int64 ZwAdjustPrivilegesToken()
{
  __int64 result; // rax

  result = 65LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
