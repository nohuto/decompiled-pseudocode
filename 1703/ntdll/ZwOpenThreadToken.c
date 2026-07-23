/*
 * XREFs of ZwOpenThreadToken @ 0x1800A5780
 * Callers:
 *     sub_180012CB0 @ 0x180012CB0 (sub_180012CB0.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     RtlAdjustPrivilege @ 0x18007E2D0 (RtlAdjustPrivilege.c)
 *     sub_18010B930 @ 0x18010B930 (sub_18010B930.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 36;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
