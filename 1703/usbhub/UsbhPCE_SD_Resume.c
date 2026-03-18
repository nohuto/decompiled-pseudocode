/*
 * XREFs of UsbhPCE_SD_Resume @ 0x1C0040D60
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1C0041FDC (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhPCE_SD_Resume(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x45u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711859, 0LL, *(unsigned __int16 *)(a2 + 4));
  LODWORD(v10) = 0;
  return UsbhDispatch_PortChangeQueueEventEx(a1, a2, 13, a3, v10, 0, 0LL, 0LL);
}
