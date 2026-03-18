/*
 * XREFs of UsbhReset2DropDeviceTimeout @ 0x1C0051BE0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042550 (UsbhAssertBusLock.c)
 *     UsbhDropDevice @ 0x1C0050694 (UsbhDropDevice.c)
 */

__int64 __fastcall UsbhReset2DropDeviceTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Au,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884447794, a2, 0LL);
  UsbhAssertBusLock(a1);
  LODWORD(v8) = -1073741823;
  LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, v7, v8);
  UsbhDropDevice(a1, a2, a3);
  return 0LL;
}
