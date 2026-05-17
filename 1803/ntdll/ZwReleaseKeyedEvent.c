/*
 * XREFs of ZwReleaseKeyedEvent @ 0x18009D770
 * Callers:
 *     RtlRunOnceComplete @ 0x180074D60 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseKeyedEvent()
{
  __int64 result; // rax

  result = 358LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
