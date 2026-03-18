/*
 * XREFs of AMLIGetNamedChild @ 0x1C0002B24
 * Callers:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C000B954 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000CE60 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000D090 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000D400 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000D5C0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000D820 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000DA30 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000DC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000E1F0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C000E360 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000E750 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C000E860 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C000E9C0 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C000ED50 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C000EF70 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C000F370 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0010200 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0010660 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0010B10 (ACPIBuildProcessThermalZoneUid.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C001CE80 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C00225DC (ACPIEcRunQueryMethod.c)
 *     ACPIFilterIrpSetPower @ 0x1C0024BB0 (ACPIFilterIrpSetPower.c)
 *     ACPIGetConvertToDevicePresence @ 0x1C0025C04 (ACPIGetConvertToDevicePresence.c)
 *     ACPIGetProcessorStatus @ 0x1C0026AB0 (ACPIGetProcessorStatus.c)
 *     ACPIInitDosDeviceName @ 0x1C0028768 (ACPIInitDosDeviceName.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     IsPciBusAsyncWorker @ 0x1C00314C0 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0031AD0 (IsPciDeviceWorker.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C0035B40 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C0036874 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     LinkNodeCrackPrt @ 0x1C0056F60 (LinkNodeCrackPrt.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0057900 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C0057B00 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIrpEject @ 0x1C0072DC0 (ACPIDockIrpEject.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007D3C0 (ACPIInitStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1C007DF7C (EnableDisableIPMIRegions.c)
 *     ACPIGetUniqueId @ 0x1C007E920 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007E9E0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007EAC0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C008D418 (LinkNodeWriteStateToHardware.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C008D5D0 (LinkNodepAddLinkNodeWorker.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall AMLIGetNamedChild(_QWORD *a1, int a2)
{
  KIRQL v4; // al
  __int64 **v5; // r8
  __int64 *i; // rbx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = (__int64 **)(*a1 + 24LL);
  for ( i = *v5; v5 != (__int64 **)i; i = (__int64 *)*i )
  {
    if ( a2 == *((_DWORD *)i + 10) )
      goto LABEL_4;
  }
  i = 0LL;
LABEL_4:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  if ( i )
  {
    dword_1C00677B8 = 0;
    i += 15;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)i + 2);
  }
  return i;
}
