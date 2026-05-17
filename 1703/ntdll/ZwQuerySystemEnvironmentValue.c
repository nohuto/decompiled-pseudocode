/*
 * XREFs of ZwQuerySystemEnvironmentValue @ 0x1800A7D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQuerySystemEnvironmentValue()
{
  __int64 result; // rax

  result = 338LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
