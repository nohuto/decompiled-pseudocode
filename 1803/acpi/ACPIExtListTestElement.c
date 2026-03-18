/*
 * XREFs of ACPIExtListTestElement @ 0x1C00236D0
 * Callers:
 *     ACPIDockFindCorrespondingDock @ 0x1C0008104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C000FA10 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0011568 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectDockDevices @ 0x1C0017A8C (ACPIDetectDockDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C0017E78 (ACPIDetectDuplicateHID.c)
 *     ACPIDetectEjectDevices @ 0x1C0018144 (ACPIDetectEjectDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0025034 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C00276F8 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C00282F4 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C0029D4C (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0035BDC (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C0039BF8 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      ACPIInitReferenceDeviceExtension(v3);
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(v4 + 16), *(_BYTE *)(v4 + 24));
    }
    return 1;
  }
}
