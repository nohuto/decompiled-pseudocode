/*
 * XREFs of UsbhDisableHardReset @ 0x1C0046808
 * Callers:
 *     UsbhBusPnpStop @ 0x1C0042590 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B330 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}
