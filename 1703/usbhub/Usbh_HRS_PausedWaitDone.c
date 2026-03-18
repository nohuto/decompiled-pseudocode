/*
 * XREFs of Usbh_HRS_PausedWaitDone @ 0x1C0046E5C
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     UsbhReleaseResetLock @ 0x1C00087A0 (UsbhReleaseResetLock.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_HRS_PausedWaitDone(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920161616, a1, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_358ef723348832925fa562e6167d1570_Traceguids,
      v8);
  }
  if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 7 )
  {
    v6 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 6u);
    KeSetEvent((PRKEVENT)(v4 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  return v6;
}
