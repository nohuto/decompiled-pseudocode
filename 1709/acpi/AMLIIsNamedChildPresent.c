/*
 * XREFs of AMLIIsNamedChildPresent @ 0x1C00058A0
 * Callers:
 *     EnableDisableCMOSRegions @ 0x1C0013D70 (EnableDisableCMOSRegions.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00142A0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     GetPciAddressWorker @ 0x1C0017E10 (GetPciAddressWorker.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C001F1C0 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00228C0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildPdo @ 0x1C0022C94 (ACPIBuildPdo.c)
 *     ACPIDockIrpQueryPower @ 0x1C0042210 (ACPIDockIrpQueryPower.c)
 *     ACPIBusIrpQueryPower @ 0x1C0045500 (ACPIBusIrpQueryPower.c)
 *     CmosGetOpRegionType @ 0x1C0047364 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0049830 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00499D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIFilterIrpQueryPower @ 0x1C004E1C0 (ACPIFilterIrpQueryPower.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057D20 (ACPIRootIrpQueryPower.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0086720 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIInternalSetProximityDomain @ 0x1C008C778 (ACPIInternalSetProximityDomain.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009027C (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009E210 (ACPIDockIrpQueryCapabilities.c)
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
