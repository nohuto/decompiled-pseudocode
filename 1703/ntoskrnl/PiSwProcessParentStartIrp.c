/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140450F60
 * Callers:
 *     PnpStartDeviceNode @ 0x1404A7788 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1404DB7F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiSwFindChildren @ 0x140450FE0 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  char *DeviceNode; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  if ( DeviceObject )
    DeviceNode = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren(DeviceNode + 40);
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
