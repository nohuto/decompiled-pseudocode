/*
 * XREFs of ZwQueryDirectoryFile @ 0x18009B160
 * Callers:
 *     sub_180085824 @ 0x180085824 (sub_180085824.c)
 *     sub_1800DB564 @ 0x1800DB564 (sub_1800DB564.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
