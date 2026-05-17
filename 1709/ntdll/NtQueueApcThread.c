/*
 * XREFs of NtQueueApcThread @ 0x1800A0960
 * Callers:
 *     RtlQueueApcWow64Thread @ 0x1800DC340 (RtlQueueApcWow64Thread.c)
 * Callees:
 *     <none>
 */

__int64 NtQueueApcThread()
{
  __int64 result; // rax

  result = 69LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
