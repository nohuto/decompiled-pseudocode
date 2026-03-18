/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x140087D60
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140087DD0 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpReenableCompression @ 0x1402580F8 (EtwpReenableCompression.c)
 *     EtwpFreeTraceBufferPool @ 0x140435B54 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeSaveState @ 0x14045ECA8 (EtwpRealtimeSaveState.c)
 *     EtwpAdjustFreeBuffers @ 0x1404F1DEC (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1404F1E3C (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x14054F858 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeader @ 0x140557C2C (EtwpAddLogHeader.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreState @ 0x1405CF3FC (EtwpRealtimeRestoreState.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpBufferingModeFlush @ 0x14070F288 (EtwpBufferingModeFlush.c)
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
