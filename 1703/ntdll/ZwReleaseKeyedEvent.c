/*
 * XREFs of ZwReleaseKeyedEvent @ 0x1800A7F10
 * Callers:
 *     RtlRunOnceComplete @ 0x18001A390 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseKeyedEvent()
{
  __int64 result; // rax

  result = 353LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
