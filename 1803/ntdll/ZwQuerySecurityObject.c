/*
 * XREFs of ZwQuerySecurityObject @ 0x18009D510
 * Callers:
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8960 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800DFDC0 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  NTSTATUS result; // eax

  result = 339;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
