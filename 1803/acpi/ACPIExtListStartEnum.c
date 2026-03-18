/*
 * XREFs of ACPIExtListStartEnum @ 0x1C002367C
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
 *     <none>
 */

char *__fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  _QWORD **v3; // r8
  char *result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = **(_QWORD ****)a1;
  result = (char *)v3 - *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = result;
  if ( v3 == v2 )
    result = 0LL;
  *(_QWORD *)(a1 + 8) = **v2;
  return result;
}
