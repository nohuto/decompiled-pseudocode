/*
 * XREFs of ZwReleaseMutant @ 0x1800A5700
 * Callers:
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_18010BD24 @ 0x18010BD24 (sub_18010BD24.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseMutant()
{
  __int64 result; // rax

  result = 32LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
