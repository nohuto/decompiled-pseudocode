/*
 * XREFs of UsbhInitializeTtHub @ 0x1C002604C
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 *     UsbhReinitialize @ 0x1C003C894 (UsbhReinitialize.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_HubInitialize20Hub @ 0x1C0026134 (Usbh_HubInitialize20Hub.c)
 *     UsbhGetDeviceHandle @ 0x1C00261D0 (UsbhGetDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitializeTtHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r14
  unsigned int v5; // edi
  __int64 DeviceHandle; // rsi
  __int64 v7; // r14
  _DWORD *v8; // rax

  v4 = FdoExt(a1);
  v5 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_d37a3ce2334c39017fdc7968bb1b570f_Traceguids);
  DeviceHandle = UsbhGetDeviceHandle(a1, a2);
  if ( !DeviceHandle )
    return 3221225473LL;
  if ( (v4[640] & 0x80u) != 0 )
    v5 = *((unsigned __int8 *)FdoExt(a1) + 2938);
  v7 = (int)Usbh_HubInitialize20Hub(a1, DeviceHandle, v5);
  Log(a1, 8, 1768838228, v7, v5);
  v8 = FdoExt(a1);
  if ( *((_QWORD *)v8 + 559) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64))v8 + 559))(
      *((_QWORD *)v8 + 529),
      DeviceHandle,
      a2,
      1212445810LL);
  return (unsigned int)v7;
}
