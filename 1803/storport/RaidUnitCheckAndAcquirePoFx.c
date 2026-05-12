/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C00069E4
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0001F3C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0006648 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorPortUnitIdleCondition @ 0x1C0006790 (StorPortUnitIdleCondition.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C0006880 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C0006988 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     RaidStartIoPacket @ 0x1C0008A60 (RaidStartIoPacket.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C000E57C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000E868 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C000EA94 (StorUpdateCrashDumpPowerReady.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000EE14 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EEC8 (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0010FDC (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002BBD8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C002F5BC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0035A00 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0035AF0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C0035B7C (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0035CF0 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C0036BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0036EE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0036FA0 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C00370A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00373F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C003AB20 (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003B784 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003B7E4 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003D2BC (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003D324 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003E128 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C00426B0 (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0042A84 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C005FBD8 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00611B0 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C00671BC (RaidUnitCreateDumpData.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidUnitCheckAndAcquirePoFx(__int64 a1)
{
  BOOLEAN result; // al

  result = 0;
  if ( *(char *)(a1 + 153) < 0 )
    return ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  return result;
}
