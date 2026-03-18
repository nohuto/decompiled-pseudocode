/*
 * XREFs of UsbhReset2Timeout @ 0x1C0051D40
 * Callers:
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051F00 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00071B0 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0021CC4 (UsbhAllocateTimeoutObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042550 (UsbhAssertBusLock.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset2Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+30h] [rbp-58h]
  int v13; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  int v15[2]; // [rsp+58h] [rbp-30h] BYREF
  __int16 v16; // [rsp+60h] [rbp-28h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Bu,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v11);
  }
  Log(a1, 1024, 1884443186, a2, 0LL);
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v15[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v15[1] = *(_DWORD *)(a2 + 544);
  v16 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  if ( *(_DWORD *)(a2 + 544) >= 3u || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v10) = -1073741823;
    PdoExt(a3)[699] = 1073807362;
    v9[0] = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, *(_QWORD *)v9, v10);
    UsbhSetEnumerationFailed(a1, (int)v15, -1, v12, v13, 1366);
    return 0LL;
  }
  else
  {
    LODWORD(v10) = -1073741823;
    v9[0] = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(_QWORD *)v9, v10);
    ++*(_DWORD *)(a2 + 544);
    UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740857, 1);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
