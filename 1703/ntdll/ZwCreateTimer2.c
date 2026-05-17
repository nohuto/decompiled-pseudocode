/*
 * XREFs of ZwCreateTimer2 @ 0x1800A6A50
 * Callers:
 *     sub_1800134A4 @ 0x1800134A4 (sub_1800134A4.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateTimer2()
{
  __int64 result; // rax

  result = 187LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
