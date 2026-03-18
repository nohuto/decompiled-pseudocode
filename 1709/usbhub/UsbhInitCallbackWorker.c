/*
 * XREFs of UsbhInitCallbackWorker @ 0x1C0008010
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_FDO_Pnp_State @ 0x1C00085E0 (Usbh_FDO_Pnp_State.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x1C001CC00 (UsbhDisableTimerObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallbackWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbp

  v4 = a2;
  v6 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_6271d31ce3fc35b37f87279b5c49118e_Traceguids);
  Log(a1, 2, 1766015607, a1, v4);
  UsbhDisableTimerObject(a1, *(_QWORD *)(v6 + 2768));
  return Usbh_FDO_Pnp_State(a3, 8LL);
}
