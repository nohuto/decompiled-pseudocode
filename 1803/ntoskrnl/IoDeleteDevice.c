/*
 * XREFs of IoDeleteDevice @ 0x14009F890
 * Callers:
 *     RawMountVolume @ 0x140495738 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x14053FEDC (RawDeleteVcb.c)
 *     PiSwDestroyDeviceObject @ 0x1405C3E28 (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x1405DC950 (IopPnPDispatch.c)
 *     PiSwGetChildPdo @ 0x1405E7FB8 (PiSwGetChildPdo.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x140650B94 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x140650CC4 (IopRemoveLegacyDeviceNode.c)
 *     VrpRegistryUnload @ 0x140707F50 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     RawShutdown @ 0x140780C10 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1408158E0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1408302A0 (ViFilterDispatchPnp.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x1408B7610 (RawInitialize.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140068140 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x14009F930 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x14009FB48 (IopCompleteUnloadOrDelete.c)
 *     KeAcquireQueuedSpinLock @ 0x1400DF7F0 (KeAcquireQueuedSpinLock.c)
 *     IopRemoveTimerFromTimerList @ 0x14023730C (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x140477A40 (IoUnregisterShutdownNotification.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     PnpFreeInterruptInformation @ 0x140541544 (PnpFreeInterruptInformation.c)
 *     IovDeleteDevice @ 0x140811F98 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  PIO_TIMER Timer; // rdi
  KIRQL v3; // al
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v3 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
