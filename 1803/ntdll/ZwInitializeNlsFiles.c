/*
 * XREFs of ZwInitializeNlsFiles @ 0x18009C9B0
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x18007C4C0 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  result = 248;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
