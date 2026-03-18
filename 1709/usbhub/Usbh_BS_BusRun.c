/*
 * XREFs of Usbh_BS_BusRun @ 0x1C000B258
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000B320 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhReleaseBusStateLock @ 0x1C000B640 (UsbhReleaseBusStateLock.c)
 *     UsbhBusPause_Action @ 0x1C000D4D0 (UsbhBusPause_Action.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSshBusBusy @ 0x1C001E468 (UsbhSshBusBusy.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F41C (UsbhBusPnpStop_Action.c)
 */

__int64 __fastcall Usbh_BS_BusRun(PDEVICE_OBJECT DeviceObject, __int64 a2, int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // rcx
  int v8; // ebx
  int v9; // ebx

  v3 = a3;
  FdoExt(DeviceObject);
  FdoExt(*(_QWORD *)(a2 + 8));
  Log((_DWORD)DeviceObject, 2048, 1651724878, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v3);
  if ( (_DWORD)v3 != 7 )
    *(_DWORD *)(a2 + 128) = 1;
  v6 = a2;
  v7 = DeviceObject;
  v8 = v3 - 3;
  if ( !v8 )
  {
    UsbhBusPause_Action(DeviceObject);
    UsbhBusPnpStop_Action(DeviceObject, a2);
    goto LABEL_13;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    UsbhBusPause_Action(DeviceObject);
    UsbhSshBusBusy(DeviceObject, a2);
LABEL_13:
    v7 = DeviceObject;
    v6 = a2;
    return UsbhReleaseBusStateLock(v7, v6);
  }
  if ( v9 == 1 )
  {
    UsbhBusPause_Action(DeviceObject);
    v6 = a2;
    v7 = DeviceObject;
  }
  return UsbhReleaseBusStateLock(v7, v6);
}
