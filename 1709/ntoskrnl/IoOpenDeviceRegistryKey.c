/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x14057EF40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  char v6; // bl
  _DWORD *DeviceNode; // rdx
  int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // r8d
  NTSTATUS v12; // ebx

  v6 = DevInstKeyType;
  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (v6 & 1) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      v9 = 18;
      goto LABEL_6;
    }
    return -1073741811;
  }
  v9 = 17;
LABEL_6:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v11 = v9 | 0x200;
  if ( (v6 & 4) == 0 )
    v11 = v9;
  v12 = CmOpenDeviceRegKey(
          *(__int64 *)&PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v11,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v12;
}
