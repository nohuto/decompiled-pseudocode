/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x18009C850
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x18009F2A0 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  ULONG result; // eax

  result = 237;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
