/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1800A5B20
 * Callers:
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     RtlAdjustPrivilege @ 0x18007E2D0 (RtlAdjustPrivilege.c)
 *     RtlAcquirePrivilege @ 0x18007F6E0 (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x180087710 (RtlReleasePrivilege.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 *     RtlRemovePrivileges @ 0x18008D8A0 (RtlRemovePrivileges.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 65;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
