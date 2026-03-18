/*
 * XREFs of PsGetPagePriorityThread @ 0x140128140
 * Callers:
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     MiGetEffectivePagePriorityThread @ 0x14005605C (MiGetEffectivePagePriorityThread.c)
 *     SmSetThreadPagePriority @ 0x14009725C (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     ExpWorkerThread @ 0x1401261B0 (ExpWorkerThread.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiAllocateKernelStackPages @ 0x1401278E0 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x140127F00 (MiInitializeInPageSupport.c)
 *     CcScheduleReadAheadEx @ 0x1401357B0 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x1401392C0 (CcAsyncCopyRead.c)
 *     EtwpTraceThreadRundown @ 0x140172374 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x140271128 (PfLogFileDataAccess.c)
 *     PfSnCheckActionsNeeded @ 0x14048E8FC (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x1404FD384 (EtwTraceThread.c)
 *     PfSnAsyncContextInitialize @ 0x140578264 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1744) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 772LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
