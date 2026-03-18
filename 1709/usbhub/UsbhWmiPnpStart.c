/*
 * XREFs of UsbhWmiPnpStart @ 0x1C0026F90
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhWmiPnpStart(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_b17c68f1d29d390fab33e43047c86516_Traceguids);
  v2 = FdoExt((__int64)DeviceObject);
  v2[718] = 6;
  *((_QWORD *)v2 + 360) = &USB_WmiGuidList;
  *((_QWORD *)v2 + 361) = UsbhQueryWmiRegInfo;
  *((_QWORD *)v2 + 362) = UsbhQueryWmiDataBlock;
  *((_QWORD *)v2 + 363) = UsbhSetWmiDataBlock;
  *((_QWORD *)v2 + 365) = UsbhExecuteWmiMethod;
  *((_QWORD *)v2 + 364) = 0LL;
  *((_QWORD *)v2 + 366) = 0LL;
  IoWMIRegistrationControl(DeviceObject, 1u);
  v2[640] |= 2u;
  Log((__int64)DeviceObject, 64, 1098345833, 0LL, 0LL);
  return 0LL;
}
