/*
 * XREFs of KeSetCoalescableTimer @ 0x14005A690
 * Callers:
 *     CmpArmLazyWriter @ 0x1400690C0 (CmpArmLazyWriter.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x140079B30 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x140079CB0 (PopFxArmResidentTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140079F7C (PopFxEnableWorkOrderWatchdog.c)
 *     ExpTimerResume @ 0x14008A0C0 (ExpTimerResume.c)
 *     CcRescheduleLazyWriteScan @ 0x1400C4F70 (CcRescheduleLazyWriteScan.c)
 *     ExpTimerDpcRoutine @ 0x1400CD640 (ExpTimerDpcRoutine.c)
 *     CmpCompleteLazyWrite @ 0x1400CD934 (CmpCompleteLazyWrite.c)
 *     EtwpRequestFlushTimer @ 0x1400D3EF8 (EtwpRequestFlushTimer.c)
 *     CcBcbProfiler @ 0x140192390 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x140232588 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1402790BC (PopPepArmIdleTimer.c)
 *     ExpTimerAdjust @ 0x1402BAF2C (ExpTimerAdjust.c)
 *     KiInitializeProcessor @ 0x14047C370 (KiInitializeProcessor.c)
 *     sub_140489010 @ 0x140489010 (sub_140489010.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x14052EF74 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     PiDrvDbUnloadNode @ 0x1405653D8 (PiDrvDbUnloadNode.c)
 *     ExpWorkQueueManagerThread @ 0x140636B70 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x140720DDC (IopErrorLogQueueRequest.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1408403B4 (AnFwProgressIndicatorTransition.c)
 *     CcInitializeBcbProfiler @ 0x14087C364 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // r10
  int v6; // r11d
  unsigned __int64 v7; // r9
  signed __int64 v9; // r9
  ULONG v10; // ecx

  v5 = 0;
  v6 = (int)Timer;
  if ( TolerableDelay )
  {
    v7 = 10000LL * TolerableDelay;
    if ( v7 > 0xFC0000 )
    {
      v9 = v7 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v10 = v9 + DueTime.LowPart;
        if ( v9 + DueTime.QuadPart < DueTime.QuadPart )
          v10 = -1;
      }
      else
      {
        v10 = DueTime.LowPart - v9;
        if ( DueTime.QuadPart - v9 > DueTime.QuadPart )
          v10 = 0;
      }
      if ( Period )
      {
        if ( (unsigned int)(v9 / 10000) + Period < Period )
          Period = -1;
        else
          Period += v9 / 10000;
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
  return KiSetTimerEx(v6, DueTime.LowPart, Period, TolerableDelay, (__int64)Dpc);
}
