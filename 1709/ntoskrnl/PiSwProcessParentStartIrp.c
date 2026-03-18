/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140553AF8
 * Callers:
 *     PnpStartDeviceNode @ 0x140552F08 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140553144 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x140553A24 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
