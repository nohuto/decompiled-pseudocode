/*
 * XREFs of PsGetPagePriorityThread @ 0x1400FBE90
 * Callers:
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcAsyncCopyRead @ 0x140023470 (CcAsyncCopyRead.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     CcScheduleReadAheadEx @ 0x14004D5C0 (CcScheduleReadAheadEx.c)
 *     EtwpTraceThreadRundown @ 0x14006B3EC (EtwpTraceThreadRundown.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiInitializeInPageSupport @ 0x1400FC010 (MiInitializeInPageSupport.c)
 *     ExpWorkerThread @ 0x1400FC140 (ExpWorkerThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x1400FE040 (MiGetEffectivePagePriorityThread.c)
 *     SmSetThreadPagePriority @ 0x140121D78 (SmSetThreadPagePriority.c)
 *     PfLogFileDataAccess @ 0x140226EBC (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x1404B07F4 (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140564F88 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1405674B4 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1736) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
