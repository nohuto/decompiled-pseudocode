/*
 * XREFs of UsbhReset1Timeout @ 0x1C00517A0
 * Callers:
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519A0 (UsbhReset1TimeoutBadEnable.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0021CC4 (UsbhAllocateTimeoutObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042550 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Timeout(__int64 a1, __int64 a2, __int64 a3)
{
  int FrameCounter; // eax
  int v7; // esi
  unsigned int v8; // eax
  int v10[2]; // [rsp+20h] [rbp-78h]
  __int64 v11; // [rsp+28h] [rbp-70h]
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]
  PVOID P; // [rsp+50h] [rbp-48h] BYREF
  int v16[2]; // [rsp+58h] [rbp-40h] BYREF
  __int16 v17; // [rsp+60h] [rbp-38h]

  P = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x10u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v12);
  }
  Log(a1, 1024, 1884443476, a2, *(unsigned int *)(a2 + 544));
  UsbhAssertBusLock(a1);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v16[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v16[1] = *(_DWORD *)(a2 + 544);
  v17 = *(_WORD *)(a2 + 4);
  v7 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v8 = *(_DWORD *)(a2 + 544);
  if ( v8 >= 3 || v7 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    LODWORD(v11) = -1073741823;
    PdoExt(a3)[699] = 1073807362;
    v10[0] = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_TIMEOUT, *(_QWORD *)v10, v11);
    UsbhSetEnumerationFailed(a1, (int)v16, v7, v13, v14, 743);
    return 0LL;
  }
  else
  {
    LODWORD(v11) = -1073741823;
    *(_DWORD *)(a2 + 544) = v8 + 1;
    v10[0] = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(_QWORD *)v10, v11);
    UsbhException(a1, *(_WORD *)(a2 + 4), 0x51u, v16, 0xCu, v7, -1, usbfile_busfunc_c, 726, 0);
    UsbhResetPort(a1, a2, (__int64)P);
    return 1LL;
  }
}
