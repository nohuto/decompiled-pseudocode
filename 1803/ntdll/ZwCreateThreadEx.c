/*
 * XREFs of ZwCreateThreadEx @ 0x18009C210
 * Callers:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateThreadEx()
{
  __int64 result; // rax

  result = 187LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
