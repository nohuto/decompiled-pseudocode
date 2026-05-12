/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C0004AE0
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E70 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0004738 (RaidUnitPoFxActivateComponent.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0004820 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0004914 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0004970 (StorPortUnitIdleCondition.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 *     RaUnitRemoveFromPendingList @ 0x1C0006C50 (RaUnitRemoveFromPendingList.c)
 *     RaidStartIoPacket @ 0x1C00073D0 (RaidStartIoPacket.c)
 *     RaidUnitCompleteRequest @ 0x1C0008A50 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E860 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000EA38 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EAD8 (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C00174F0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0018D48 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002F848 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003209C (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0036190 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0036350 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0036440 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C00364CC (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0036640 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C0036EB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C00371E0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0037280 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0037350 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0037690 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C003A678 (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003B858 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B8B4 (RaUnitStoragePowerIdle.c)
 *     RaidUnitCreateDumpDiskData @ 0x1C003D184 (RaidUnitCreateDumpDiskData.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003DE10 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003DE78 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003F380 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004272C (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042B08 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005E704 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0062238 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 153) >= 0x80u )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  return result;
}
