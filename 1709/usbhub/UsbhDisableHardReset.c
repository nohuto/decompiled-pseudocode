/*
 * XREFs of UsbhDisableHardReset @ 0x1C004768C
 * Callers:
 *     UsbhBusPnpStop @ 0x1C00433D0 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004C1A0 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDispatch_HardResetEvent @ 0x1C00141E0 (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}
