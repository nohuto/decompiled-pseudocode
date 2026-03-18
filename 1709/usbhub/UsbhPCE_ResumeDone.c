/*
 * XREFs of UsbhPCE_ResumeDone @ 0x1C00419A8
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1C0018524 (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_ResumeDone(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x3Cu,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v7);
  }
  Log(a1, 512, 1346712113, 0LL, a3);
  result = UsbhGetPortData(a1, a3);
  if ( result )
  {
    LODWORD(v8) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, result, 21LL, a2, v8, 0, 0LL, 0LL);
  }
  return result;
}
