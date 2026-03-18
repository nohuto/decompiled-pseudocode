/*
 * XREFs of ACPIExtListStartEnum @ 0x1C0016AB4
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0013214 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C00132C4 (ACPIDetectDockDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001341C (ACPIDetectDuplicateHID.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C00142F4 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C0027294 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0042598 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C0047D78 (ACPIDetectEjectDevices.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C004F634 (ACPIInitDeleteChildDeviceList.c)
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
