/*
 * XREFs of UsbhSyncBusPause @ 0x1C0001BC0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CA0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C0046F40 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C004AC60 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BE90 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusPause(__int64 a1, __int64 a2, int a3)
{
  int v6; // eax
  unsigned int v7; // r10d

  FdoExt(a1);
  Log(a1, 2048, 1346458174, a3, a2);
  *(_DWORD *)(a2 + 128) = a3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7LL);
  Log(a1, 2048, 1346458172, 0, v6);
  return v7;
}
