/*
 * XREFs of EtwpQueryUsedProcessorCount @ 0x1400E08AC
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x14002441C (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpSwitchBuffer @ 0x1400E041C (EtwpSwitchBuffer.c)
 *     EtwpReenableCompression @ 0x140281B58 (EtwpReenableCompression.c)
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     EtwpAllocateTraceBufferPool @ 0x1404EFFE4 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAdjustFreeBuffers @ 0x140532278 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushActiveBuffers @ 0x1405322C8 (EtwpFlushActiveBuffers.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x14057866C (EtwpAddLogHeader.c)
 *     EtwpFreeTraceBufferPool @ 0x14058E374 (EtwpFreeTraceBufferPool.c)
 *     EtwpRealtimeRestoreState @ 0x1405E5B60 (EtwpRealtimeRestoreState.c)
 *     EtwpBufferingModeFlush @ 0x14074AF90 (EtwpBufferingModeFlush.c)
 *     EtwpRealtimeSaveState @ 0x140752394 (EtwpRealtimeSaveState.c)
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
