/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1C0007B6C
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x1C0007B20 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x1C00174D0 (Usbh_SSH_Event.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  FdoExt(a1);
  Usbh_SSH_Event(a1);
  Log((_DWORD)a1, 32, 1734503506, (_DWORD)a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_71ec4cc7b02c3748b3a59ce77a672e2e_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
