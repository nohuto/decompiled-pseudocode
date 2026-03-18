/*
 * XREFs of UsbhHardErrorReset1BadEnable @ 0x1C0050B40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C00218C4 (UsbhCancelResetTimeout.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042550 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorReset1BadEnable(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v6[2]; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+28h] [rbp-30h]

  v4 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x16u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v8);
  }
  Log(a1, 1024, 1883391045, a2, 0LL);
  UsbhCancelResetTimeout(a1, a2, 0);
  if ( v4[768] == *(unsigned __int16 *)(a2 + 4) )
  {
    UsbhAssertBusLock(a1);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  }
  LODWORD(v7) = -1073741823;
  v6[0] = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET_BAD_ENABLE, *(_QWORD *)v6, v7);
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x3Eu, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1061, 0);
  return 3LL;
}
