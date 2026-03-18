/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x1400D4558
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x1400D3FB4 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x1402B3DEC (EtwpReenableCompression.c)
 *     EtwpFreeTraceBufferPool @ 0x140493744 (EtwpFreeTraceBufferPool.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x14058896C (EtwpAddLogHeader.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1405898CC (EtwpAllocateTraceBufferPool.c)
 *     EtwpAdjustFreeBuffers @ 0x14058F250 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x140591300 (EtwpFlushActiveBuffers.c)
 *     EtwpRealtimeSaveState @ 0x1405C3F44 (EtwpRealtimeSaveState.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwpRealtimeRestoreState @ 0x14064C26C (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x1407AD440 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryUsedProcessorCount(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
    return (unsigned int)KeNumberProcessors_0;
  return result;
}
