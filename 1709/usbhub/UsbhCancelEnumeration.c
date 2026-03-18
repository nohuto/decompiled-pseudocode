/*
 * XREFs of UsbhCancelEnumeration @ 0x1C0027D3C
 * Callers:
 *     UsbhEnumerate1 @ 0x1C00091C0 (UsbhEnumerate1.c)
 *     UsbhBusPause_Action @ 0x1C000D4D0 (UsbhBusPause_Action.c)
 *     UsbhPCE_Disable @ 0x1C00413FC (UsbhPCE_Disable.c)
 *     UsbhEnumerate2 @ 0x1C00510E0 (UsbhEnumerate2.c)
 *     UsbhHandleOvercurrent @ 0x1C00515E0 (UsbhHandleOvercurrent.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0043398 (UsbhAssertBusLock.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C004544C (Usbh_BusPause_PdoEvent.c)
 *     UsbhBusUnlatchPdo @ 0x1C0051360 (UsbhBusUnlatchPdo.c)
 */

__int64 __fastcall UsbhCancelEnumeration(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v9; // r9d

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      42,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      *(_WORD *)(a3 + 4));
  Log(a1, 1024, 1668826446, a3, 0LL);
  if ( a2 - 1 > 1 )
    return a2;
  FdoExt(a1);
  UsbhCancelResetTimeout(a1, a3, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a3 + 376), *(_WORD *)(a3 + 4));
  UsbhBusUnlatchPdo(a1, a4, a3, v9, 0LL);
  Usbh_BusPause_PdoEvent(a1, a4, a3, *(_QWORD *)(a3 + 376));
  return 4LL;
}
