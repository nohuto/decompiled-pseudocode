/*
 * XREFs of RaidUnitCheckAndAcquirePoFx @ 0x1C00052E0
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0003E1C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0004FF0 (RaidUnitPoFxActivateComponent.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C00050D0 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitFlushActivePendingRequestQueue @ 0x1C00051C4 (StorPortUnitFlushActivePendingRequestQueue.c)
 *     StorPortUnitIdleCondition @ 0x1C0005220 (StorPortUnitIdleCondition.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00053A0 (RaidUnitPoFxIdleComponent.c)
 *     RaidStartIoPacket @ 0x1C0007770 (RaidStartIoPacket.c)
 *     StorPortExtendedFunction @ 0x1C000CB50 (StorPortExtendedFunction.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000EB58 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000ED30 (StorPortUnitPoFxD0Completion.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C000EDE4 (RaidUnitCancelWaitWakeIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017668 (RaUnitScsiGetDumpPointersIoctl.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00187C8 (StorUpdateCrashDumpPowerReady.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00306D8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0033174 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0037E40 (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0038050 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x1C0038170 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitMaintenanceTime @ 0x1C00381FC (RaidUnitMaintenanceTime.c)
 *     RaidUnitPowerSettingCallback @ 0x1C0038370 (RaidUnitPowerSettingCallback.c)
 *     StorPortUnitIdleState @ 0x1C0038D50 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0039080 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0039140 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0039240 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C0039580 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitPowerCapIoctl @ 0x1C003C3BC (RaUnitPowerCapIoctl.c)
 *     RaUnitStoragePowerActive @ 0x1C003D158 (RaUnitStoragePowerActive.c)
 *     RaUnitStoragePowerIdle @ 0x1C003D1B8 (RaUnitStoragePowerIdle.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C003ECD4 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C003ED3C (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaidUnitSubmitResetRequest @ 0x1C003FBC4 (RaidUnitSubmitResetRequest.c)
 *     StorpCSEntryTelemetry @ 0x1C004335C (StorpCSEntryTelemetry.c)
 *     StorpCSExitTelemetry @ 0x1C0043730 (StorpCSExitTelemetry.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0060A88 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C00645A4 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1C006901C (RaidUnitCreateDumpData.c)
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
