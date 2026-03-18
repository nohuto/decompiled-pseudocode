/*
 * XREFs of KeInitializeTimerEx @ 0x1401325F0
 * Callers:
 *     KeInitThread @ 0x140470370 (KeInitThread.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140471260 (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140478A18 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x14047C370 (KiInitializeProcessor.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 *     PfSnAsyncContextInitialize @ 0x140578264 (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14061BF24 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140628674 (CmpInitializeLazyWriters.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     ExpWorkQueueManagerInitialize @ 0x1406476EC (ExpWorkQueueManagerInitialize.c)
 *     WheapEtwEnableCallback @ 0x140653460 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140720DDC (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407260B0 (IoRequestDeviceRemovalForReset.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140820F38 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140825A08 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14082B7BC (VfWdInit.c)
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14083D254 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwProgressIndicatorTransition @ 0x1408403B4 (AnFwProgressIndicatorTransition.c)
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
