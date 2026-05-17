/*
 * XREFs of ZwSetUuidSeed @ 0x1800A8770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetUuidSeed()
{
  __int64 result; // rax

  result = 420LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
