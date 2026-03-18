/*
 * XREFs of KeCancelTimer @ 0x14004D010
 * Callers:
 *     ExpCancelTimer @ 0x140049910 (ExpCancelTimer.c)
 *     PopFxPluginWork @ 0x1400685A0 (PopFxPluginWork.c)
 *     PopFxProcessWork @ 0x140069444 (PopFxProcessWork.c)
 *     PopSetWatchdog @ 0x14006FDA8 (PopSetWatchdog.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     EtwpResetFlushTimer @ 0x140121FCC (EtwpResetFlushTimer.c)
 *     ExpDeleteTimer @ 0x14012B620 (ExpDeleteTimer.c)
 *     PfSnCancelTraceTimer @ 0x14012D1A0 (PfSnCancelTraceTimer.c)
 *     PopIgnoreBatteryStatusChange @ 0x14013E02C (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140164134 (PopFxUpdateDeviceIdleTimer.c)
 *     IopDisableTimer @ 0x1401EF740 (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140204F5C (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetActiveState @ 0x14022D8DC (PopCoalescingSetActiveState.c)
 *     PopBuildDeviceNotifyList @ 0x14040AE30 (PopBuildDeviceNotifyList.c)
 *     EtwpFreeLoggerContext @ 0x1404358CC (EtwpFreeLoggerContext.c)
 *     PfSnPowerBoost @ 0x140467398 (PfSnPowerBoost.c)
 *     PiDrvDbLoadNode @ 0x140489A54 (PiDrvDbLoadNode.c)
 *     PopUserShutdownCancelled @ 0x140576B08 (PopUserShutdownCancelled.c)
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A588C (ExpRefreshTimeZoneInformation.c)
 *     KiStartDpcThread @ 0x1405BD340 (KiStartDpcThread.c)
 *     PpmWmiDispatch @ 0x1405C71C0 (PpmWmiDispatch.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x140668BE4 (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406830A0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x1406C95B0 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x1406D8934 (TtmpResetEvaluationTimer.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407557D8 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140755A34 (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x140757430 (AnFwpFadeAnimationTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140758E44 (AnFwDisplayBackgroundUpdate.c)
 *     ViPendingDelayCompletion @ 0x140771FE0 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14077C3C4 (VfWdCheckForSettingsChange.c)
 * Callees:
 *     KiCancelTimer @ 0x14004D1D0 (KiCancelTimer.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // bl
  char v2; // dl
  BOOLEAN result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = 1;
  result = KiCancelTimer(a1, v2);
  __writecr8(CurrentIrql);
  return result;
}
