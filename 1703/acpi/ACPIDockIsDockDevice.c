/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C00172D0
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000E8E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C0043700 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C0045EA0 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C004E540 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C005155C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C005174C (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C008EB70 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C009D17C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C0017370 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

bool ACPIDockIsDockDevice()
{
  KIRQL v0; // di
  int v1; // ebx
  _DWORD Src[32]; // [rsp+30h] [rbp-98h] BYREF

  strcpy((char *)Src, "_DCK");
  v0 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v1 = AMLIGetNameSpaceObjectNoLock(Src);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v0);
  return v1 >= 0;
}
