/*
 * XREFs of UsbhReset1Debounce @ 0x1C0051320
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhCancelResetTimeout @ 0x1C00218C4 (UsbhCancelResetTimeout.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_QueueChange @ 0x1C0040908 (UsbhPCE_QueueChange.c)
 *     UsbhAssertBusLock @ 0x1C0042550 (UsbhAssertBusLock.c)
 *     UsbhPortDisconnect @ 0x1C0050E10 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhReset1Debounce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp+10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v8);
  }
  Log(a1, 1024, 1883393603, a2, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v7);
  }
  UsbhAssertBusLock(a1);
  if ( (*(_DWORD *)(a2 + 2408) & 1) == 0 )
    return 1LL;
  Log(a1, 1024, 1852785730, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhSignalSyncDeviceResetPdo(a1, a3, -1073741823);
  UsbhSignalDriverResetEvent(a1, a2);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhPortDisconnect(a1, a2, a3);
  LODWORD(v9) = 1;
  UsbhPCE_QueueChange(a1, *(_WORD *)(a2 + 4), v9, *(_QWORD *)(a2 + 376));
  return 0LL;
}
