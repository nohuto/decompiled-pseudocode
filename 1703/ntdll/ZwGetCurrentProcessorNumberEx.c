/*
 * XREFs of ZwGetCurrentProcessorNumberEx @ 0x1800A7050
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A9980 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCurrentProcessorNumberEx()
{
  __int64 result; // rax

  result = 235LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
