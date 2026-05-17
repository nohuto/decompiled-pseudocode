/*
 * XREFs of ZwGetCachedSigningLevel @ 0x18009C7D0
 * Callers:
 *     sub_1800877B0 @ 0x1800877B0 (sub_1800877B0.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 233LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
