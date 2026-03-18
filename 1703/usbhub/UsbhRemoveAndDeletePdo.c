/*
 * XREFs of UsbhRemoveAndDeletePdo @ 0x1C00566FC
 * Callers:
 *     UsbhDeleteOrphanPdo @ 0x1C0054E24 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 */

void __fastcall UsbhRemoveAndDeletePdo(struct _DEVICE_OBJECT *a1)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt((__int64)a1);
  RtlFreeUnicodeString((PUNICODE_STRING)(v2 + 662));
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
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 348);
  if ( v2[698] == 1 )
  {
    v2[698] = 0;
    USBD_RemoveDeviceFromGlobalList(a1);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 348, v4);
  IoDeleteDevice(a1);
}
