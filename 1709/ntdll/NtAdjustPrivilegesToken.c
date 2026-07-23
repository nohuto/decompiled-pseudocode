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

NTSTATUS __cdecl NtAdjustPrivilegesToken(
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
