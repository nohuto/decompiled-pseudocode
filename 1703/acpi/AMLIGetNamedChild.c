/*
 * XREFs of AMLIGetNamedChild @ 0x1C000E580
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0007478 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00097D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000C430 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000E1B0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000E7E0 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000EAF0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000ECB0 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000EEA0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000FFF0 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIGetWorkerForInteger @ 0x1C0010510 (ACPIGetWorkerForInteger.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C00126D0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     LinkNodeCrackPrt @ 0x1C001B96C (LinkNodeCrackPrt.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C001ED90 (ACPIBuildProcessDevicePhaseHid.c)
 *     IsPciDeviceWorker @ 0x1C001F2D0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C001FBD0 (IsPciBusAsyncWorker.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0020B40 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0022BA8 (ACPIThermalGetSensorDevice.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     ACPIGetProcessorStatus @ 0x1C00259D4 (ACPIGetProcessorStatus.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0027CC0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0027DA0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0028280 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0028420 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIFilterIrpSetPower @ 0x1C002A8B0 (ACPIFilterIrpSetPower.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C0043A04 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044000 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0044220 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0044800 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0049900 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C004CEE4 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0050074 (ACPIInternalEvaluateOST.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0055160 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0055A5C (ACPIProcessorContainerEvaluateLpiObject.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0062CA0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0062EA0 (LinkNodepRunSrsWorker.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C0084D20 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0088CC8 (LinkNodeWriteStateToHardware.c)
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008A63C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0091F2C (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0093F28 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIDockIrpEject @ 0x1C009AFB0 (ACPIDockIrpEject.c)
 *     ACPIEcGetGpeVector @ 0x1C009E0DC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009E18C (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C009F658 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C009FB40 (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C009FF00 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009FFC0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00A00A0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00A0184 (ACPIQuerySpareDsm.c)
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
  dword_1C00776F8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v6 + 32);
  return result;
}
