/*
 * XREFs of NtReleaseKeyedEvent @ 0x1800A2D30
 * Callers:
 *     RtlRunOnceComplete @ 0x180078C00 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseKeyedEvent()
{
  __int64 result; // rax

  result = 356LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
