/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140592060
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
