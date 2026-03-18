/*
 * XREFs of KeInitializeTimerEx @ 0x140025A80
 * Callers:
 *     KeInitThread @ 0x140424040 (KeInitThread.c)
 *     KiInitializeProcessor @ 0x140426A8C (KiInitializeProcessor.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1404291BC (PfSnAllocateEnablePrefetcherTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1404311D8 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     MiInitializeSections @ 0x1405B353C (MiInitializeSections.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405CC658 (CmpInitializeLazyWriters.c)
 *     ExpWorkQueueManagerInitialize @ 0x1405DE038 (ExpWorkQueueManagerInitialize.c)
 *     WheapEtwEnableCallback @ 0x1405F0150 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x1406BBE28 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406C0670 (IoRequestDeviceRemovalForReset.c)
 *     PoUserShutdownInitiated @ 0x1406FDA60 (PoUserShutdownInitiated.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1407B3D88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1407B8778 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1407BE370 (VfWdInit.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1407CE288 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1407CFA7C (AnFwDisplayProgressIndicator.c)
 *     AnFwProgressIndicatorTransition @ 0x1407D3C8C (AnFwProgressIndicatorTransition.c)
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
