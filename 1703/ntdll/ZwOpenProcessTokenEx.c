/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1800A5900
 * Callers:
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     RtlCheckTokenMembershipEx @ 0x180044060 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x18007F940 (RtlImpersonateSelfEx.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     sub_1800DB244 @ 0x1800DB244 (sub_1800DB244.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessTokenEx(
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
