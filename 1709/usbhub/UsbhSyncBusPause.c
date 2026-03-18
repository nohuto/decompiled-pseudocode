/*
 * XREFs of UsbhSyncBusPause @ 0x1C00195FC
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 *     UsbhHardReset_Action @ 0x1C0047744 (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C0047DC4 (Usbh_HRS_Queued.c)
 *     UsbhAsyncStop @ 0x1C004BAD0 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusPause(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v3 = a3;
  FdoExt((__int64)a1);
  Log((__int64)a1, 2048, 1346458174, v3, a2);
  *(_DWORD *)(a2 + 128) = v3;
  v6 = UsbhDispatch_BusEvent(a1, a2, 7);
  Log((__int64)a1, 2048, 1346458172, 0LL, v6);
  return v7;
}
