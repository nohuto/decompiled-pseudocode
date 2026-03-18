/*
 * XREFs of KeInitializeDpc @ 0x140038FE0
 * Callers:
 *     PopCaptureTimeOnProcZero @ 0x140470D0C (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140470DF8 (PopHandleWakeSources.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140471260 (PfpStartLoggingHardFaultEvents.c)
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PopEndMirroring @ 0x140476E00 (PopEndMirroring.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140478A18 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x140479380 (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x14047B368 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x140481D94 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140483D08 (PnprQuiesceProcessors.c)
 *     PfSnBeginTrace @ 0x140494618 (PfSnBeginTrace.c)
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 *     PspThreadDelete @ 0x140511DD0 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     PfSnAsyncContextInitialize @ 0x140578264 (PfSnAsyncContextInitialize.c)
 *     EtwpInitLoggerContext @ 0x1405893D4 (EtwpInitLoggerContext.c)
 *     PoUserShutdownInitiated @ 0x1405EBBD0 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14060BCDC (IopConnectInterrupt.c)
 *     PopUserPresentSetWorker @ 0x1406145B0 (PopUserPresentSetWorker.c)
 *     PiDrvDbCreateNode @ 0x140622B38 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x140627EE8 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x140628674 (CmpInitializeLazyWriters.c)
 *     KeInitializeTimerTable @ 0x14062B1B4 (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x14062B2F4 (KiInitializeForceIdle.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     WheapEtwEnableCallback @ 0x140653460 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140720DDC (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407260B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140726D00 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140742260 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x140762D10 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     EtwpInitializeStackTracing @ 0x1407A72B8 (EtwpInitializeStackTracing.c)
 *     EtwpCovSampCaptureContextStart @ 0x1407B36B0 (EtwpCovSampCaptureContextStart.c)
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

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
