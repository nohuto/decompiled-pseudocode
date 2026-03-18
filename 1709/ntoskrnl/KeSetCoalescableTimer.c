/*
 * XREFs of KeSetCoalescableTimer @ 0x1400E1E80
 * Callers:
 *     PopPepArmIdleTimer @ 0x14000C2FC (PopPepArmIdleTimer.c)
 *     ExpTimerResume @ 0x14000C394 (ExpTimerResume.c)
 *     ExpTimerDpcRoutine @ 0x14000D400 (ExpTimerDpcRoutine.c)
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
 *     PopFxArmResidentTimer @ 0x14001ADF4 (PopFxArmResidentTimer.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E0BCC (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x1400E0C64 (EtwpRequestFlushTimer.c)
 *     ExpSetTimer @ 0x1400E1930 (ExpSetTimer.c)
 *     PopFxPluginWork @ 0x1400FD120 (PopFxPluginWork.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400FDF74 (PopFxScheduleDeviceIdleTimer.c)
 *     CmpCompleteLazyWrite @ 0x14012C128 (CmpCompleteLazyWrite.c)
 *     CcBcbProfiler @ 0x1401682E0 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1401F5058 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x140286A1C (ExpTimerAdjust.c)
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     sub_14043C010 @ 0x14043C010 (sub_14043C010.c)
 *     PiDrvDbUnloadNode @ 0x140533FE8 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14059516C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkQueueManagerThread @ 0x1405D0160 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x1406BBE28 (IopErrorLogQueueRequest.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1407CE288 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x1407D3C8C (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v9; // r9
  ULONG v10; // r8d
  ULONG v11; // eax

  v5 = 0;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( (__int64)(v9 + DueTime.QuadPart) < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( (__int64)(DueTime.QuadPart - v9) > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        v11 = -1;
        if ( Period + (int)v9 / 10000 >= Period )
          v11 = Period + (int)v9 / 10000;
        Period = v11;
      }
      LODWORD(v7) = 16515072;
      DueTime.LowPart = v10;
    }
    TolerableDelay = (unsigned int)v7 >> 18;
    if ( TolerableDelay > 0x3F )
      TolerableDelay = 63;
    v5 = 4 * TolerableDelay;
  }
  LOBYTE(TolerableDelay) = v5;
  return KiSetTimerEx((_DWORD)Timer, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
