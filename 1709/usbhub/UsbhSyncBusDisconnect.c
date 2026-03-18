/*
 * XREFs of UsbhSyncBusDisconnect @ 0x1C003F66C
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0003480 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1111774014, 0LL, 0LL);
  v5 = UsbhDispatch_BusEvent(a1, a2, v4 + 11);
  Log((__int64)a1, 2048, 1111774012, 0LL, v5);
  return v6;
}
