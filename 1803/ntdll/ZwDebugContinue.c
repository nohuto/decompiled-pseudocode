/*
 * XREFs of ZwDebugContinue @ 0x18009C3B0
 * Callers:
 *     DbgUiContinue @ 0x1800C91E0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

__int64 ZwDebugContinue()
{
  __int64 result; // rax

  result = 200LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
