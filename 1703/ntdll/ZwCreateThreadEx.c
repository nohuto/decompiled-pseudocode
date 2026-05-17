/*
 * XREFs of ZwCreateThreadEx @ 0x1800A6A10
 * Callers:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateThreadEx()
{
  __int64 result; // rax

  result = 185LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
