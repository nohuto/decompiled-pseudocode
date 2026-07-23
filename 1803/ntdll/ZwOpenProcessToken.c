/*
 * XREFs of ZwOpenProcessToken @ 0x18009CED0
 * Callers:
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     RtlAdjustPrivilege @ 0x18007B4A0 (RtlAdjustPrivilege.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 289;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
