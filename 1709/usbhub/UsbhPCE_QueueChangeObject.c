/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x1C00417E0
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x1C0044C20 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v12);
  }
  result = UsbhGetPortData(a1, a2);
  if ( result )
    result = UsbhDispatch_PortChangeQueueEventEx(a1, result, 4LL, a4, a3, 2, a6, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x4Eu,
             (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
             v11);
  }
  return result;
}
