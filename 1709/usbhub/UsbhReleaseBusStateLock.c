/*
 * XREFs of UsbhReleaseBusStateLock @ 0x1C000B640
 * Callers:
 *     Usbh_BS_BusSuspend @ 0x1C00073A4 (Usbh_BS_BusSuspend.c)
 *     Usbh_BS_BusStop @ 0x1C000A758 (Usbh_BS_BusStop.c)
 *     Usbh_BS_BusInit @ 0x1C000A80C (Usbh_BS_BusInit.c)
 *     Usbh_BS_BusRun @ 0x1C000B258 (Usbh_BS_BusRun.c)
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusPause @ 0x1C000B548 (Usbh_BS_BusPause.c)
 *     Usbh_BS_BusRemove @ 0x1C003F6E0 (Usbh_BS_BusRemove.c)
 * Callees:
 *     UsbhBusSuspend_Action @ 0x1C0007D9C (UsbhBusSuspend_Action.c)
 *     UsbhBusResume_Action @ 0x1C000E6C0 (UsbhBusResume_Action.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhReleaseBusStateLock(struct _DEVICE_OBJECT *a1, __int64 a2, unsigned int a3)
{
  unsigned int *DeviceExtension; // rbx
  __int64 v6; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  if ( DeviceExtension[610] != a3 )
  {
    DeviceExtension[610] = a3;
    *(_DWORD *)(a2 + 80) = a3;
    if ( a3 == 3 )
    {
      UsbhBusResume_Action(a1);
    }
    else if ( a3 == 5 )
    {
      UsbhBusSuspend_Action((__int64)a1, a2);
    }
  }
  *(_DWORD *)(a2 + 76) = 1734964085;
  v6 = 8LL * DeviceExtension[208];
  *((_QWORD *)DeviceExtension + 167) = 0LL;
  DeviceExtension[v6 + 137] = a3;
  KeReleaseSemaphore((PRKSEMAPHORE)(DeviceExtension + 612), 16, 1, 0);
  return a3;
}
