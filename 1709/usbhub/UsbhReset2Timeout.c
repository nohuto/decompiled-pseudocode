/*
 * XREFs of UsbhReset2Timeout @ 0x1C0052B00
 * Callers:
 *     UsbhReset2TimeoutBadEnable @ 0x1C0052CC0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00070F0 (UsbhUnlinkPdoDeviceHandle.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009A64 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0009AA4 (UsbhAllocateTimeoutObject.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0043398 (UsbhAssertBusLock.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // eax
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+30h] [rbp-58h]
  int v11; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  int v13[2]; // [rsp+58h] [rbp-30h] BYREF
  __int16 v14; // [rsp+60h] [rbp-28h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Bu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v9);
  }
  Log(a1, 1024, 1884443186, a2, 0LL);
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v13[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v13[1] = *(_DWORD *)(a2 + 544);
  v14 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  if ( *(_DWORD *)(a2 + 544) >= 3u || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    PdoExt(a3)[703] = 1073807362;
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT);
    UsbhSetEnumerationFailed(a1, (int)v13, -1, v10, v11, 1366);
    return 0LL;
  }
  else
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    ++*(_DWORD *)(a2 + 544);
    UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740857, 1);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
