/*
 * XREFs of NtQuerySecurityObject @ 0x1800A2AD0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008ACD4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF020 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800E4C40 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySecurityObject()
{
  __int64 result; // rax

  result = 337LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
