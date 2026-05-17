/*
 * XREFs of ZwSetTimer2 @ 0x1800A8710
 * Callers:
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     sub_180018F14 @ 0x180018F14 (sub_180018F14.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetTimer2()
{
  __int64 result; // rax

  result = 417LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
