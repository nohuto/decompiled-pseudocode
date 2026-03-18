/*
 * XREFs of PsGetPagePriorityThread @ 0x140061EB0
 * Callers:
 *     SmSetThreadPagePriority @ 0x14000B6CC (SmSetThreadPagePriority.c)
 *     CcAsyncCopyRead @ 0x140020890 (CcAsyncCopyRead.c)
 *     CcPerformReadAhead @ 0x140020ED4 (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x1400215D4 (CcCompleteAsyncRead.c)
 *     MiGetEffectivePagePriorityThread @ 0x140028114 (MiGetEffectivePagePriorityThread.c)
 *     ExpWorkerThread @ 0x1400617A0 (ExpWorkerThread.c)
 *     CcScheduleReadAheadEx @ 0x1400625A0 (CcScheduleReadAheadEx.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     PfLogFileDataAccess @ 0x1402398E0 (PfLogFileDataAccess.c)
 *     EtwpTraceThreadRundown @ 0x14027EF38 (EtwpTraceThreadRundown.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x140453444 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x14074619C (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  v1 = (*(_DWORD *)(a1 + 1744) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) == 0 )
    return v1;
  result = 2LL;
  if ( v1 < 2 )
    return v1;
  return result;
}
