/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C000FF78
 * Callers:
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000B3A0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000BAF0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000BE90 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C000C600 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000D310 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000D3D0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C000E9F0 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EEA0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F160 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0012240 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C001EBB0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0025FC0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C0027970 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C0027A90 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0029AB0 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0043230 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0043320 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C00440F0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044220 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C00443F0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0044740 (ACPIBuildProcessThermalZoneHid.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIBuildCompleteCommon(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl
  int v3; // edx

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v3 = AcpiBuildDpcFlags | 2;
  AcpiBuildDpcFlags = v3;
  if ( (v3 & 1) == 0 )
  {
    AcpiBuildDpcFlags = v3 | 1;
    KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v2);
}
