/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C000A900
 * Callers:
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C0006410 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C00089D4 (ACPIBuildPdo.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000E610 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C000F160 (ACPIBuildProcessDevicePhaseCrs.c)
 *     GetPciAddressWorker @ 0x1C0011980 (GetPciAddressWorker.c)
 *     EnableDisableCMOSRegions @ 0x1C0024B70 (EnableDisableCMOSRegions.c)
 *     ACPIDockIrpQueryPower @ 0x1C00426A0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C0045EA0 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C0047C24 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A450 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C004E540 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057120 (ACPIRootIrpQueryPower.c)
 *     ACPIInternalSetProximityDomain @ 0x1C008E63C (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008E8D0 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C008EA40 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C008F080 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009B220 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsNamedChildPresent(__int64 *a1, int a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 *v6; // rbx
  __int64 *v7; // r8

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
  return v6 != 0LL;
}
