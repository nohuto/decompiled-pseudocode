/*
 * XREFs of ZwGetCachedSigningLevel @ 0x1800A6FD0
 * Callers:
 *     sub_18008BF68 @ 0x18008BF68 (sub_18008BF68.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 231LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
