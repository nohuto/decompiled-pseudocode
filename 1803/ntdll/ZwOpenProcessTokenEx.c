/*
 * XREFs of ZwOpenProcessTokenEx @ 0x18009B0C0
 * Callers:
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180035010 (RtlCheckTokenMembershipEx.c)
 *     RtlAcquirePrivilege @ 0x180078BB0 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180078E10 (RtlImpersonateSelfEx.c)
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     sub_18008A0A4 @ 0x18008A0A4 (sub_18008A0A4.c)
 *     sub_1800D49E4 @ 0x1800D49E4 (sub_1800D49E4.c)
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
