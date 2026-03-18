/*
 * XREFs of IoDeleteDevice @ 0x1400058A0
 * Callers:
 *     RawMountVolume @ 0x140421790 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x1404222EC (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x14045A090 (PiSwGetChildPdo.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x14055A4F0 (IopPnPDispatch.c)
 *     PiSwDestroyDeviceObject @ 0x14056D64C (PiSwDestroyDeviceObject.c)
 *     IopLegacyResourceAllocation @ 0x1405966EC (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14059681C (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     RegistryUnload @ 0x140679000 (RegistryUnload.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     RawShutdown @ 0x1406E4FF0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140766D10 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140780888 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140780B70 (ViFilterDispatchPnp.c)
 *     RawInitialize @ 0x1407FAB30 (RawInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 * Callees:
 *     PoRegisterDeviceForIdleDetection @ 0x140005970 (PoRegisterDeviceForIdleDetection.c)
 *     IopCompleteUnloadOrDelete @ 0x140005A00 (IopCompleteUnloadOrDelete.c)
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     IopRemoveTimerFromTimerList @ 0x1401F4678 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x140415880 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x140422318 (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     MmLockPagableSectionByHandle @ 0x1404B2EC0 (MmLockPagableSectionByHandle.c)
 *     IovDeleteDevice @ 0x140763308 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  PIO_TIMER Timer; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rsi
  struct _DEVICE_OBJECT_POWER_EXTENSION *Dope; // rdi
  KIRQL v5; // al
  KIRQL v6; // al
  _LIST_ENTRY *p_Volume; // rcx
  KIRQL v8; // bp
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
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
  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  PoRegisterDeviceForIdleDetection(DeviceObject, 0, 0, PowerDeviceUnspecified);
  Dope = DeviceObjectExtension->Dope;
  if ( Dope )
  {
    MmLockPagableSectionByHandle(ExPageLockHandle);
    ExAcquireFastMutex(&PopVolumeLock);
    v6 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    p_Volume = &Dope->Volume;
    v8 = v6;
    if ( Dope->Volume.Flink )
    {
      Flink = p_Volume->Flink;
      Blink = Dope->Volume.Blink;
      if ( p_Volume->Flink->Blink != p_Volume || Blink->Flink != p_Volume )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      p_Volume->Flink = 0LL;
      Dope->Volume.Blink = 0LL;
    }
    DeviceObjectExtension->Dope = 0LL;
    ExFreePoolWithTag(Dope, 0);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v8);
    KeReleaseGuardedMutex(&PopVolumeLock);
    MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
  }
  PnpFreeInterruptInformation(DeviceObject);
  v5 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v5);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject);
}
