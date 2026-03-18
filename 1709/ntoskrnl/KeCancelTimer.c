/*
 * XREFs of KeCancelTimer @ 0x1400E2110
 * Callers:
 *     PfSnCancelTraceTimer @ 0x14001093C (PfSnCancelTraceTimer.c)
 *     CmpArmLazyWriter @ 0x140016954 (CmpArmLazyWriter.c)
 *     PopSetWatchdog @ 0x1400B1A00 (PopSetWatchdog.c)
 *     EtwpResetFlushTimer @ 0x1400E09B8 (EtwpResetFlushTimer.c)
 *     ExpDeleteTimer @ 0x1400E0CF0 (ExpDeleteTimer.c)
 *     ExpCancelTimer @ 0x1400E1D98 (ExpCancelTimer.c)
 *     PopFxPluginWork @ 0x1400FD120 (PopFxPluginWork.c)
 *     PopFxProcessWork @ 0x1400FD9F8 (PopFxProcessWork.c)
 *     PopDequeueQuerySetIrp @ 0x140123128 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401550A4 (PopFxUpdateDeviceIdleTimer.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x1401F4E3C (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14020B154 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetActiveState @ 0x140240E38 (PopCoalescingSetActiveState.c)
 *     PopIgnoreBatteryStatusChange @ 0x14024240C (PopIgnoreBatteryStatusChange.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x140248A1C (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopBuildDeviceNotifyList @ 0x140437204 (PopBuildDeviceNotifyList.c)
 *     PfSnPowerBoost @ 0x140443BEC (PfSnPowerBoost.c)
 *     CmThawRegistry @ 0x14044F478 (CmThawRegistry.c)
 *     PiDrvDbLoadNode @ 0x140533E84 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     KiStartDpcThread @ 0x1405BF270 (KiStartDpcThread.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405C1FB4 (ExpRefreshTimeZoneInformation.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     PpmWmiDispatch @ 0x1405DABB0 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x1405F1760 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406AE390 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x1406F5B90 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x1406FA190 (PopCoalescingNotify.c)
 *     PopUserShutdownCancelled @ 0x1406FDB68 (PopUserShutdownCancelled.c)
 *     TtmpResetEvaluationTimer @ 0x14070ECC4 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x14075E934 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x1407B3D88 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1407BE2EC (VfWdCheckForSettingsChange.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1407CE288 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x1407CE2F4 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x1407CE49C (AnFwpDisableProgressTimer.c)
 *     AnFwpFadeAnimationTimer @ 0x1407CF6D0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x1400E22F0 (KiCancelTimer.c)
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
