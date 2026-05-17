/*
 * XREFs of ZwDebugContinue @ 0x1800A6BB0
 * Callers:
 *     DbgUiContinue @ 0x1800D4DB0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

__int64 ZwDebugContinue()
{
  __int64 result; // rax

  result = 198LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
