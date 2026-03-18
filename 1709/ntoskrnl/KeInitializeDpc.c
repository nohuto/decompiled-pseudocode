/*
 * XREFs of KeInitializeDpc @ 0x1400B2860
 * Callers:
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1404265E8 (PoInitializePrcb.c)
 *     KiInitPrcb @ 0x140427670 (KiInitPrcb.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1404291BC (PfSnAllocateEnablePrefetcherTimer.c)
 *     IopLiveDumpCorralProcessors @ 0x14042B290 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x14042D168 (PnprQuiesceProcessors.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1404311D8 (PfpStartLoggingHardFaultEvents.c)
 *     PopCaptureTimeOnProcZero @ 0x1404314C4 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x140431A40 (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x140432FE0 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x140453AA8 (PfSnBeginTrace.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 *     IopConnectInterrupt @ 0x1404EBE88 (IopConnectInterrupt.c)
 *     EtwpInitializeStackTracing @ 0x1404EC7C0 (EtwpInitializeStackTracing.c)
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 *     PspThreadDelete @ 0x1404FBC50 (PspThreadDelete.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     KeInitializeTimerTable @ 0x1405B79DC (KeInitializeTimerTable.c)
 *     KiInitializeForceIdle @ 0x1405B7B14 (KiInitializeForceIdle.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     PiDrvDbCreateNode @ 0x1405C6554 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x1405CBF00 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405CC658 (CmpInitializeLazyWriters.c)
 *     PopUserPresentSetWorker @ 0x1405EED00 (PopUserPresentSetWorker.c)
 *     WheapEtwEnableCallback @ 0x1405F0150 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x1406BBE28 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x1406C0670 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1406C1020 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x1406D83E0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1406FD890 (PopSetSystemAwayMode.c)
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

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
