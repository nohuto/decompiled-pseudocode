/*
 * XREFs of ZwAlpcQueryInformation @ 0x1800A1170
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x180087F10 (TpWaitForAlpcCompletion.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcQueryInformation()
{
  __int64 result; // rax

  result = 134LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
