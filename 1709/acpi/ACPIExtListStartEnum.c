/*
 * XREFs of ACPIExtListStartEnum @ 0x1C00108A0
 * Callers:
 *     ACPIInitDeleteChildDeviceList @ 0x1C000123C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0010698 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C0010748 (ACPIDetectDockDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C001E140 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E1F8 (ACPIDetectDuplicateHID.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0020CDC (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042104 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C00474C4 (ACPIDetectEjectDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r8
  __int64 v3; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = **(_QWORD **)a1 - v3;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = **v2;
  if ( (_QWORD **)(result + v3) == v2 )
    return 0LL;
  return result;
}
