/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C001DB68
 * Callers:
 *     ACPIAmliEvaluatePcch @ 0x1C008A63C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008C830 (AcpiGetIdleWakeInfo.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008E8D0 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIThermalBuildConstraints @ 0x1C0090010 (ACPIThermalBuildConstraints.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0090694 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0091E50 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0093F28 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C009E0DC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C009E18C (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C009FF00 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C009FFC0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00A00A0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00A0184 (ACPIQuerySpareDsm.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A2FDC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C00776F8 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1u);
}
