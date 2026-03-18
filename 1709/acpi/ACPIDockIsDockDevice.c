/*
 * XREFs of ACPIDockIsDockDevice @ 0x1C000CF70
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1C00430C0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C00444A8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpQueryPower @ 0x1C0045500 (ACPIBusIrpQueryPower.c)
 *     ACPIFilterIrpQueryPower @ 0x1C004E1C0 (ACPIFilterIrpQueryPower.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEnum @ 0x1C005218C (OSNotifyDeviceEnum.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A014C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000CA64 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

bool __fastcall ACPIDockIsDockDevice(__int64 *a1)
{
  KIRQL v2; // bl
  __int64 v4; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD Src[32]; // [rsp+30h] [rbp-98h] BYREF

  strcpy((char *)Src, "_DCK");
  v2 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  LODWORD(a1) = AMLIGetNameSpaceObjectNoLock((const char *)Src, a1, &v4, 1);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v2);
  return (int)a1 >= 0;
}
