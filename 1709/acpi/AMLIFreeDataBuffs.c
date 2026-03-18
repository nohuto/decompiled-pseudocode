/*
 * XREFs of AMLIFreeDataBuffs @ 0x1C0023374
 * Callers:
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00851E0 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C00853E4 (ACPIPepPlatformEntryExitNotify.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C0085D20 (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     AcpiGetIdleWakeInfo @ 0x1C008CA30 (AcpiGetIdleWakeInfo.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C008FCEC (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     ACPIProcessorDeviceControl @ 0x1C008FFC0 (ACPIProcessorDeviceControl.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0091D9C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0092480 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 *     ACPIThermalStartDevice @ 0x1C0092740 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0096E50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C00A10B4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00A1164 (ACPIEcGetUid.c)
 *     ACPIGetUniqueId @ 0x1C00A2C30 (ACPIGetUniqueId.c)
 *     ACPIModuleGetSpareProperties @ 0x1C00A2CF0 (ACPIModuleGetSpareProperties.c)
 *     ACPIModuleIsValidSpare @ 0x1C00A2DD0 (ACPIModuleIsValidSpare.c)
 *     ACPIQuerySpareDsm @ 0x1C00A2EB4 (ACPIQuerySpareDsm.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00A5C28 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 */

__int64 __fastcall AMLIFreeDataBuffs(__int64 a1)
{
  dword_1C00797B8 = 0;
  pszDest = 0;
  return FreeDataBuffs(a1, 1u);
}
