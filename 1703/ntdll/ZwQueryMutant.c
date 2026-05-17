/*
 * XREFs of ZwQueryMutant @ 0x1800A7BF0
 * Callers:
 *     sub_1801070A0 @ 0x1801070A0 (sub_1801070A0.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryMutant()
{
  __int64 result; // rax

  result = 328LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
