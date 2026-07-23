/*
 * XREFs of ZwCallEnclave @ 0x1800A1270
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A3EC0 (RtlEnclaveCallDispatcher.c)
 *     RtlCallEnclave @ 0x1800A3F30 (RtlCallEnclave.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  NTSTATUS result; // eax

  result = 142;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
