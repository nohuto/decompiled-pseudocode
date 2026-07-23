/*
 * XREFs of NtTerminateEnclave @ 0x1800A3730
 * Callers:
 *     LdrInitializeEnclave @ 0x1800D00E0 (LdrInitializeEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800D0640 (LdrpDeleteEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateEnclave(PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 436;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
