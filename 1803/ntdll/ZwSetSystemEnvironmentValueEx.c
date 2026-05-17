/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x18009DED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemEnvironmentValueEx()
{
  __int64 result; // rax

  result = 417LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
