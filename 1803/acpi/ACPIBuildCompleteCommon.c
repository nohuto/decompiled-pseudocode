/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C0009C00
 * Callers:
 *     ACPIBuildCompleteGeneric @ 0x1C0009C40 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C000AD40 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C000AE30 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C000C2A0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C000C3E0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000D6A0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C000DB80 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000E360 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C000EE40 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C000F140 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C00108E0 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C00113C4 (ACPIBuildScheduleDpc.c)
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  ACPIBuildScheduleDpc();
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}
