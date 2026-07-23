/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x1800A7050
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A9980 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl ZwGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  ULONG result; // eax

  result = 235;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
