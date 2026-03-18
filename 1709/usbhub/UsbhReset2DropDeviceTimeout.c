/*
 * XREFs of UsbhReset2DropDeviceTimeout @ 0x1C00529A0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0043398 (UsbhAssertBusLock.c)
 *     UsbhDropDevice @ 0x1C0051458 (UsbhDropDevice.c)
 */

__int64 __fastcall UsbhReset2DropDeviceTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Au,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884447794, a2, 0LL);
  UsbhAssertBusLock(a1);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
