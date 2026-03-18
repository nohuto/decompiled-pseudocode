/*
 * XREFs of UsbhReset1Complete @ 0x1C00092A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     UsbhRawWait @ 0x1C00096A0 (UsbhRawWait.c)
 *     UsbhCreateDevice @ 0x1C0009764 (UsbhCreateDevice.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0009A64 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0009AA4 (UsbhAllocateTimeoutObject.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhResetPort @ 0x1C0019070 (UsbhResetPort.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001DAF0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C00434E8 (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C0052DA4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  KSPIN_LOCK *v5; // rbx
  KIRQL v6; // al
  int FrameCounter; // eax
  int v8; // ecx
  unsigned int v9; // r9d
  int v11; // eax
  PVOID v12; // rbx
  int v13; // ebp
  int v14; // eax
  int v15; // [rsp+30h] [rbp-78h]
  int v16; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v18[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v19; // [rsp+60h] [rbp-48h]

  P = 0LL;
  v4 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  KeReleaseSpinLock(v5, v6);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v8 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v18[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v18[1] = v8;
  v19 = FrameCounter;
  if ( v8 )
  {
    UsbhWait(a1, 100);
  }
  else
  {
    Log(a1, 8, 2002872692, 32, 0LL);
    UsbhRawWait(v9);
  }
  if ( (int)UsbhCreateDevice(a1) < 0 )
    goto LABEL_15;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006A68C
    && (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1);
  }
  v11 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v12 = P;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v4 = 2;
LABEL_19:
    UsbhResetPort(a1);
    return v4;
  }
  if ( !P )
  {
LABEL_15:
    v14 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v12 = P;
    v13 = v14;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  else if ( v12 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v13);
    UsbhWait(a1, 500);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_19;
  }
  UsbhSetEnumerationFailed(a1, (int)v18, v13, v15, v16, 1509);
  return 0LL;
}
