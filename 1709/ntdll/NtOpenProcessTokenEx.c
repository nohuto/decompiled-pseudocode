/*
 * XREFs of NtOpenProcessTokenEx @ 0x1800A06C0
 * Callers:
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 *     RtlCheckTokenMembershipEx @ 0x18002C230 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180053B40 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x18007C0D0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007C340 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x18008A1B0 (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA824 (AVrfpAppendCurrentUserSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
