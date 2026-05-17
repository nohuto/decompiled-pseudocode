/*
 * XREFs of ZwCreateMutant @ 0x1800A6870
 * Callers:
 *     sub_18010C758 @ 0x18010C758 (sub_18010C758.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateMutant()
{
  __int64 result; // rax

  result = 172LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
