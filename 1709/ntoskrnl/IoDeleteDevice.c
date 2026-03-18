/*
 * XREFs of IoDeleteDevice @ 0x1400FAC00
 * Callers:
 *     RawDeleteVcb @ 0x140547910 (RawDeleteVcb.c)
 *     RawMountVolume @ 0x140554038 (RawMountVolume.c)
 *     IopLegacyResourceAllocation @ 0x14055B6A0 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14055B7D0 (IopRemoveLegacyDeviceNode.c)
 *     IopPnPDispatch @ 0x1405B9E90 (IopPnPDispatch.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     PiSwGetChildPdo @ 0x1405E3DF8 (PiSwGetChildPdo.c)
 *     VrpRegistryUnload @ 0x1406A38E0 (VrpRegistryUnload.c)
 *     PiSwDestroyDeviceObject @ 0x1406CDAA0 (PiSwDestroyDeviceObject.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     RawShutdown @ 0x14071D3E0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x1407A88B0 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x1407C2A44 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x1407C2D20 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     RawInitialize @ 0x140844430 (RawInitialize.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A4D50 (KeReleaseQueuedSpinLock.c)
 *     PoRunDownDeviceObject @ 0x1400FACA0 (PoRunDownDeviceObject.c)
 *     IopCompleteUnloadOrDelete @ 0x1400FAE1C (IopCompleteUnloadOrDelete.c)
 *     IopRemoveTimerFromTimerList @ 0x1401FA1E8 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x14042A8C0 (IoUnregisterShutdownNotification.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     PnpFreeInterruptInformation @ 0x140549C20 (PnpFreeInterruptInformation.c)
 *     IovDeleteDevice @ 0x1407A4FCC (IovDeleteDevice.c)
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
