/*
 * XREFs of AMLIGetNamedChild @ 0x1C0003F20
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0001960 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0002E90 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0003350 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C0003610 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIGetWorkerForInteger @ 0x1C00074D0 (ACPIGetWorkerForInteger.c)
 *     LinkNodeCrackPrt @ 0x1C000D438 (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012820 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     EnableDisableCMOSRegions @ 0x1C0013D70 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C00140D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0014470 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0014530 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0014610 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0014680 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0014840 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0014940 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0014D00 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciDeviceWorker @ 0x1C00153F0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0015870 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001D9D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C001EF00 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0025510 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIGetProcessorStatus @ 0x1C0027710 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028F80 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029090 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002B480 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C00433C4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C00439C0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0043BE0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C00441C0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0048CE0 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00492B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0049450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004C324 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C004F9C8 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0055D50 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0056654 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0063E70 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0064070 (LinkNodepRunSrsWorker.c)
 *     ACPIInitStopDevice @ 0x1C0085A38 (ACPIInitStopDevice.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0085DFC (ACPIAmliEvaluateDsm.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008B18C (LinkNodeWriteStateToHardware.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008CA30 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIRootInitialize @ 0x1C0091A00 (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0091D9C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0092480 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalStartDevice @ 0x1C0092740 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0096A70 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C009DFA0 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C00A10B4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00A1164 (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C00A1DB0 (ACPIFanStartDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C00A2874 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C00A2C30 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00A2CF0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00A2DD0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00A2EB4 (ACPIQuerySpareDsm.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8
  __int64 *result; // rax

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = *a1;
  v6 = *(__int64 **)(*a1 + 24);
  v7 = (__int64 *)(v5 + 24);
  if ( v7 == v6 )
  {
LABEL_4:
    v6 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v6 + 10) )
    {
      v6 = (__int64 *)*v6;
      if ( v7 == v6 )
        goto LABEL_4;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( !v6 )
    return 0LL;
  result = v6 + 15;
  dword_1C00797B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
