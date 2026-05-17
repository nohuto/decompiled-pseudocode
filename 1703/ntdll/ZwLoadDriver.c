/*
 * XREFs of ZwLoadDriver @ 0x1800A7270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLoadDriver()
{
  __int64 result; // rax

  result = 252LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
