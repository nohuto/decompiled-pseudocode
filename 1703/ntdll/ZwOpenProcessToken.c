/*
 * XREFs of ZwOpenProcessToken @ 0x1800A7690
 * Callers:
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlAdjustPrivilege @ 0x18007E2D0 (RtlAdjustPrivilege.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 285;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
