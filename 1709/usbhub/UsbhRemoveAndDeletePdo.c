/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x1C00565F4
 * Callers:
 *     UsbhDeleteOrphanPdo @ 0x1C0054EC4 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhFreeID @ 0x1C0028A88 (UsbhFreeID.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt((__int64)DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 666));
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  UsbhFreeID((__int64)(v2 + 522));
  UsbhFreeID((__int64)(v2 + 518));
  UsbhFreeID((__int64)(v2 + 526));
  UsbhFreeID((__int64)(v2 + 534));
  UsbhFreeID((__int64)(v2 + 530));
  UsbhFreeID((__int64)(v2 + 538));
  UsbhFreeID((__int64)(v2 + 542));
  UsbhFreeID((__int64)(v2 + 546));
  UsbhFreeID((__int64)(v2 + 554));
  UsbhFreeID((__int64)(v2 + 550));
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 350);
  if ( v2[702] == 1 )
  {
    v2[702] = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 350, v4);
  IoDeleteDevice(DeviceObject);
}
