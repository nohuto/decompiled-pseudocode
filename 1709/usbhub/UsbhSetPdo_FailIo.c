/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C0044DF8
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0043994 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C00458DC (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045DDC (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004C988 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0055EB0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

void __fastcall UsbhSetPdo_FailIo(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KIRQL v2; // al

  v1 = (KSPIN_LOCK *)PdoExt(a1);
  v2 = KeAcquireSpinLockRaiseToDpc(v1 + 151);
  *((_DWORD *)v1 + 196) = 2;
  KeReleaseSpinLock(v1 + 151, v2);
}
