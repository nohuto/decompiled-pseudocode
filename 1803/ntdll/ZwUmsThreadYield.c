/*
 * XREFs of ZwUmsThreadYield @ 0x18009E250
 * Callers:
 *     RtlUmsThreadYield @ 0x1800EFC50 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

__int64 ZwUmsThreadYield()
{
  __int64 result; // rax

  result = 445LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
