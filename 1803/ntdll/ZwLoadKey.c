/*
 * XREFs of ZwLoadKey @ 0x18009CAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLoadKey()
{
  __int64 result; // rax

  result = 257LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
