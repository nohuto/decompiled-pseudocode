/*
 * XREFs of ZwCallEnclave @ 0x18009BC90
 * Callers:
 *     RtlEnclaveCallDispatch @ 0x18009E900 (RtlEnclaveCallDispatch.c)
 *     sub_18009E970 @ 0x18009E970 (sub_18009E970.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallEnclave(PENCLAVE_ROUTINE Routine, PVOID Reserved, ULONG Flags, PVOID *RoutineParamReturn)
{
  NTSTATUS result; // eax

  result = 143;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
