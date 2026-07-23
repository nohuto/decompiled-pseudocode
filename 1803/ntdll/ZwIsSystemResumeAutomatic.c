/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x18009CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN ZwIsSystemResumeAutomatic(void)
{
  BOOLEAN result; // al

  result = -5;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
