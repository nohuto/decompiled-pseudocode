/*
 * XREFs of UsbhPortDisconnect @ 0x1C0051BD0
 * Callers:
 *     UsbhHandleSuspend @ 0x1C0007790 (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x1C0051A30 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x1C00520E0 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00070F0 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSuspendEvent @ 0x1C0042180 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x1C0045B84 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0051360 (UsbhBusUnlatchPdo.c)
 *     UsbhDeleteUxdSettings @ 0x1C0058228 (UsbhDeleteUxdSettings.c)
 */

__int64 __fastcall UsbhPortDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  __int64 v7; // r9
  int v9; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xDu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v9);
  }
  Log(a1, 1024, 1883523411, a2, *(unsigned __int16 *)(a2 + 4));
  v6 = PdoExt(a3);
  UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740853, 1);
  Log(a1, 1024, 1682457651, a3, 0LL);
  UsbhSignalResumeEvent(a1, a2);
  UsbhSignalSuspendEvent(a1, a2);
  if ( (v6[353] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo(a1, a3, a2, v7, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
  return 0LL;
}
