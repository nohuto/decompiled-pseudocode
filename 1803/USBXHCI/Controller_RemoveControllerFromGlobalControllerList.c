/*
 * XREFs of Controller_RemoveControllerFromGlobalControllerList @ 0x1C0009444
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C000B970 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_RemoveControllerFromGlobalControllerList(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  KIRQL v4; // al
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  unsigned __int64 Lock; // rcx

  v1 = a1 + 3;
  result = a1[3];
  if ( (result || a1[4]) && (_QWORD *)result != v1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.DeviceQueue.Lock + 16));
    v5 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v6 = (_QWORD *)v1[1], (_QWORD *)*v6 != v1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    Lock = WPP_MAIN_CB.DeviceQueue.Lock;
    --*(_DWORD *)(WPP_MAIN_CB.DeviceQueue.Lock + 24);
    KeReleaseSpinLock((PKSPIN_LOCK)(Lock + 16), v4);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(__int64), __int64, const char *))(WdfFunctions_01023 + 1648))(
             WdfDriverGlobals,
             a1[1],
             Controller_AddControllerToGlobalControllerList,
             6968LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  }
  return result;
}
