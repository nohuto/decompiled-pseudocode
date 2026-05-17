/*
 * XREFs of ZwRaiseHardError @ 0x18009D690
 * Callers:
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 *     sub_180085BEC @ 0x180085BEC (sub_180085BEC.c)
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 * Callees:
 *     <none>
 */

__int64 ZwRaiseHardError()
{
  __int64 result; // rax

  result = 351LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
