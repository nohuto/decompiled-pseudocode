/*
 * XREFs of UsbhSetPdo_FailIo @ 0x1C0043FC8
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AA8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044F2C (Usbh_PdoRemove_PdoEvent.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004BB18 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C0056000 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
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
