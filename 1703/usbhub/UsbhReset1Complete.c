/*
 * XREFs of UsbhReset1Complete @ 0x1C0021170
 * Callers:
 *     <none>
 * Callees:
 *     UsbhWait @ 0x1C0007FB8 (UsbhWait.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhReset2Complete @ 0x1C0015860 (UsbhReset2Complete.c)
 *     Usbh_UsbdReadFrameCounter @ 0x1C0018B28 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhResetPort @ 0x1C001ED40 (UsbhResetPort.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 *     UsbhCancelResetTimeout @ 0x1C00218C4 (UsbhCancelResetTimeout.c)
 *     UsbhAllocateTimeoutObject @ 0x1C0021CC4 (UsbhAllocateTimeoutObject.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1C00426A8 (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FE4 (UsbhSetEnumerationFailed.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  KSPIN_LOCK *v7; // rbx
  KIRQL v8; // al
  int FrameCounter; // eax
  int v10; // ecx
  unsigned int v11; // r9d
  int v13; // eax
  PVOID v14; // rbx
  int v15; // ebp
  int v16; // eax
  int v17; // [rsp+30h] [rbp-78h]
  int v18; // [rsp+38h] [rbp-70h]
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  int v20[2]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v21; // [rsp+60h] [rbp-48h]

  P = 0LL;
  v6 = 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884434787, a2, 0LL);
  v7 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v8 = KeAcquireSpinLockRaiseToDpc(v7);
  KeReleaseSpinLock(v7, v8);
  UsbhCancelResetTimeout(a1, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET1_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v10 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v20[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v20[1] = v10;
  v21 = FrameCounter;
  if ( v10 )
  {
    UsbhWait(a1, 100);
  }
  else
  {
    Log(a1, 8, 2002872692, 32LL, 0LL);
    UsbhRawWait(v11);
  }
  if ( (int)UsbhCreateDevice(a1) < 0 )
    goto LABEL_15;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
    && !*(_DWORD *)(a2 + 544)
    && !dword_1C006968C
    && (FdoExt(a1)[640] & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1, a2, a3);
  }
  v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v14 = P;
  v15 = v13;
  if ( v13 >= 0 )
  {
    v6 = 2;
LABEL_19:
    UsbhResetPort(a1, a2, (__int64)v14);
    return v6;
  }
  if ( !P )
  {
LABEL_15:
    v16 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v14 = P;
    v15 = v16;
  }
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
  }
  else if ( v14 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v15);
    UsbhWait(a1, 500);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1);
    goto LABEL_19;
  }
  UsbhSetEnumerationFailed(a1, (int)v20, v15, v17, v18, 1509);
  return 0LL;
}
