/*
 * XREFs of UsbhPCE_SoftDisconnect @ 0x1C0040E24
 * Callers:
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_SoftDisconnect(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+78h] [rbp+20h]

  Log(a1, 512, 7562852, a3, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x52u,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v8);
  }
  LODWORD(v9) = 0;
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = UsbhDispatch_PortChangeQueueEventEx(a1, result, 8, a3, v9, 0, 0LL, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x53u,
             (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
             v7);
  }
  return result;
}
