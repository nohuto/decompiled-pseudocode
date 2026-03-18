/*
 * XREFs of Usbh_PnpRemove @ 0x1C004CE64
 * Callers:
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0008730 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0016BD0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0017910 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C004CAC0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C004CB60 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004CD00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C00087D8 (UsbhReleaseFdoPnpLock.c)
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     UsbhSetFdoPnpState @ 0x1C001F38C (UsbhSetFdoPnpState.c)
 *     GET_FDO_PNPSTATE @ 0x1C00467D4 (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x1C004B78C (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x1C004C5DC (UsbhModuleDispatch.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0, v4, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
