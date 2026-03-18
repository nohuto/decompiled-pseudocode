/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C0043994
 * Callers:
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0078CF4 (ACPIQueryCacheCoherencyAttribute.c)
 *     AcpiGetIdleWakeInfo @ 0x1C0079900 (AcpiGetIdleWakeInfo.c)
 *     ACPIEcGetGpeVector @ 0x1C007A0E4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C007A194 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C007E920 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C007E9E0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C007EAC0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C007EBA4 (ACPIQuerySpareDsm.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C007F340 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C007FF58 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C0080160 (ACPIPepPlatformEntryExitNotify.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIThermalBuildConstraints @ 0x1C0088E6C (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C008B9B8 (ACPIProcessPhysicalDeviceLocationPackage.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C00677B8 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1u);
}
