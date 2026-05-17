/*
 * XREFs of ZwFsControlFile @ 0x18009B1E0
 * Callers:
 *     sub_180076A28 @ 0x180076A28 (sub_180076A28.c)
 * Callees:
 *     <none>
 */

__int64 ZwFsControlFile()
{
  __int64 result; // rax

  result = 57LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
