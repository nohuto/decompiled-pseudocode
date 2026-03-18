/*
 * XREFs of KeCancelTimer @ 0x14005A760
 * Callers:
 *     ExpCancelTimer @ 0x14005AA70 (ExpCancelTimer.c)
 *     ExpSetTimerObject @ 0x14005B0B0 (ExpSetTimerObject.c)
 *     CmpArmLazyWriter @ 0x1400690C0 (CmpArmLazyWriter.c)
 *     PnpDisableWatchdog @ 0x140075428 (PnpDisableWatchdog.c)
 *     PopSetWatchdog @ 0x1400754B0 (PopSetWatchdog.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140077884 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x140077B28 (PopFxProcessWork.c)
 *     PfSnCancelTraceTimer @ 0x14007A4F8 (PfSnCancelTraceTimer.c)
 *     ExpDeleteTimer @ 0x1400C00C0 (ExpDeleteTimer.c)
 *     EtwpResetFlushTimer @ 0x1400D3E40 (EtwpResetFlushTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x1400E4144 (MiUnlinkUnusedControlArea.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401562A4 (PopIgnoreBatteryStatusChange.c)
 *     PopDequeueQuerySetIrp @ 0x140166088 (PopDequeueQuerySetIrp.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140182F14 (PopFxUpdateDeviceIdleTimer.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     IopDisableTimer @ 0x14023236C (IopDisableTimer.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetActiveState @ 0x1402783CC (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x14027EAA4 (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopBuildDeviceNotifyList @ 0x140475B44 (PopBuildDeviceNotifyList.c)
 *     PfSnPowerBoost @ 0x14048C930 (PfSnPowerBoost.c)
 *     EtwpFreeLoggerContext @ 0x140493884 (EtwpFreeLoggerContext.c)
 *     PiDrvDbLoadNode @ 0x140565274 (PiDrvDbLoadNode.c)
 *     PopUserShutdownCancelled @ 0x1405EACD0 (PopUserShutdownCancelled.c)
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x14062FA98 (ExpRefreshTimeZoneInformation.c)
 *     KiStartDpcThread @ 0x1406328F4 (KiStartDpcThread.c)
 *     PpmWmiDispatch @ 0x14064A790 (PpmWmiDispatch.c)
 *     PopExecutionRequiredSettingCallback @ 0x140654A90 (PopExecutionRequiredSettingCallback.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     CmThawRegistry @ 0x1406F6B0C (CmThawRegistry.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140712C40 (DbgkpWerDeferredWriteRoutine.c)
 *     PopPowerRequestNotifyStandbyStateChanged @ 0x14075D7B0 (PopPowerRequestNotifyStandbyStateChanged.c)
 *     PopCoalescingNotify @ 0x140761620 (PopCoalescingNotify.c)
 *     TtmpResetEvaluationTimer @ 0x140772424 (TtmpResetEvaluationTimer.c)
 *     ExpPartitionDestroy @ 0x1407C56B0 (ExpPartitionDestroy.c)
 *     ViPendingDelayCompletion @ 0x140820F38 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x14082B738 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x14083C5F0 (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwpDisableProgressTimer @ 0x14083C60C (AnFwpDisableProgressTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14083D910 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x1408404D0 (AnFwpFadeAnimationTimer.c)
 * Callees:
 *     KiCancelTimer @ 0x14005B820 (KiCancelTimer.c)
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
