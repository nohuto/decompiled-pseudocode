/*
 * XREFs of NtOpenProcessToken @ 0x1800A2490
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180056F7C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 *     RtlCheckSandboxedToken @ 0x18005B8C0 (RtlCheckSandboxedToken.c)
 *     RtlpValidOwnerSubjectContext @ 0x18005C080 (RtlpValidOwnerSubjectContext.c)
 *     RtlAdjustPrivilege @ 0x18007C820 (RtlAdjustPrivilege.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessToken(HANDLE ProcessHandle, ACCESS_MASK DesiredAccess, PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 287;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
