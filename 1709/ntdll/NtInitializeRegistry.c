/*
 * XREFs of NtInitializeRegistry @ 0x1800A1FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtInitializeRegistry()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
