/*
 * XREFs of NtOpenIoCompletion @ 0x1800A2350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenIoCompletion()
{
  __int64 result; // rax

  result = 277LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
