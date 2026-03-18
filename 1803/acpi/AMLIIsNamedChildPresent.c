/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C0043DAC
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C0008210 (ACPIDockIrpQueryPower.c)
 *     ACPIBuildPdo @ 0x1C000BBF0 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000C9F0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000CF60 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBusIrpQueryPower @ 0x1C00143D0 (ACPIBusIrpQueryPower.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00150E0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     CmosGetOpRegionType @ 0x1C00177E4 (CmosGetOpRegionType.c)
 *     EnableDisableCMOSRegions @ 0x1C001791C (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C001EB40 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C001ECE0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C0024840 (ACPIFilterIrpQueryPower.c)
 *     GetPciAddressWorker @ 0x1C0030F70 (GetPciAddressWorker.c)
 *     ACPIRootIrpQueryPower @ 0x1C00393B0 (ACPIRootIrpQueryPower.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00795B8 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIInternalSetProximityDomain @ 0x1C007DC08 (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(_QWORD *a1, int a2)
{
  KIRQL v4; // al
  __int64 **v5; // r8
  __int64 *i; // rbx

  v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v5 = (__int64 **)(*a1 + 24LL);
  for ( i = *v5; v5 != (__int64 **)i; i = (__int64 *)*i )
  {
    if ( a2 == *((_DWORD *)i + 10) )
      goto LABEL_6;
  }
  i = 0LL;
LABEL_6:
  ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
  return i != 0LL;
}
