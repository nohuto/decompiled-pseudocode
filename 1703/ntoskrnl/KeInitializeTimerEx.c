/*
 * XREFs of KeInitializeTimerEx @ 0x14010F0E0
 * Callers:
 *     KeInitThread @ 0x140404A30 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140409CB8 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14040EC08 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x140412130 (KiInitializeProcessor.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1405674B4 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     MiInitializeSections @ 0x1405A1DA8 (MiInitializeSections.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405A8DA0 (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x1405D4020 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140690160 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     AnFwProgressIndicatorTransition @ 0x140755324 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140757A8C (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140758E44 (AnFwDisplayBackgroundUpdate.c)
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140776988 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14077C448 (VfWdInit.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
