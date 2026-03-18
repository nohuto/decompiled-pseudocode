/*
 * XREFs of KeInitializeDpc @ 0x140088A30
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140409CB8 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x14040A1B8 (PopHandleWakeSources.c)
 *     PopCaptureTimeOnProcZero @ 0x14040A76C (PopCaptureTimeOnProcZero.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     PopEndMirroring @ 0x14040CD30 (PopEndMirroring.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14040EC08 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x14040F940 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x140411D4C (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x140416250 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140418140 (PnprQuiesceProcessors.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x14054F348 (EtwpInitLoggerContext.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PfSnBeginTrace @ 0x140565618 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1405674B4 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1405768F0 (PoUserShutdownInitiated.c)
 *     PopUserPresentSetWorker @ 0x140586600 (PopUserPresentSetWorker.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     PiDrvDbCreateNode @ 0x14059E128 (PiDrvDbCreateNode.c)
 *     EtwpInitializeStackTracing @ 0x14059E618 (EtwpInitializeStackTracing.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     KeInitializeTimerTable @ 0x1405A79D0 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x1405A7B08 (KiInitializeForceIdle.c)
 *     CmpCmdInit @ 0x1405A8688 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405A8DA0 (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x1405D4020 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140690160 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406948A0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140695254 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1406AD0E0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1406CA0E0 (PopSetSystemAwayMode.c)
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

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
