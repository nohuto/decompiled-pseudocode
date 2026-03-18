/*
 * XREFs of ACPIBuildCompleteCommon @ 0x1C001EE88
 * Callers:
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x1C00124D0 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x1C00125F0 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C0013EF0 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0014D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001CDC0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001D1F0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D460 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001D9D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001DBA0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C001EB90 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x1C001EC80 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C001F1C0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0025F20 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C0027F30 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildCompleteGeneric @ 0x1C002A9B0 (ACPIBuildCompleteGeneric.c)
 *     ACPIBuildDiscoverDeviceCompletion @ 0x1C0042BF0 (ACPIBuildDiscoverDeviceCompletion.c)
 *     ACPIBuildDiscoverPowerNodeCompletion @ 0x1C0042CE0 (ACPIBuildDiscoverPowerNodeCompletion.c)
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0043AB0 (ACPIBuildProcessPowerResourcePhasePep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0043BE0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C0043DB0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x1C0044100 (ACPIBuildProcessThermalZoneHid.c)
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
