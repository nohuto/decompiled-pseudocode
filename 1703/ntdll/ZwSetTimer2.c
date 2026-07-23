/*
 * XREFs of ZwSetTimer2 @ 0x1800A8710
 * Callers:
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  NTSTATUS result; // eax

  result = 417;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
