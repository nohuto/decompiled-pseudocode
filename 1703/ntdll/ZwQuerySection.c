/*
 * XREFs of ZwQuerySection @ 0x1800A5D20
 * Callers:
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 *     sub_180107160 @ 0x180107160 (sub_180107160.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySection()
{
  __int64 result; // rax

  result = 81LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
