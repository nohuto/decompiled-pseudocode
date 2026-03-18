/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140532700
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
