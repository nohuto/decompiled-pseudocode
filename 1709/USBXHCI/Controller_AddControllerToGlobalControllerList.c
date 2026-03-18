/*
 * XREFs of Controller_AddControllerToGlobalControllerList @ 0x1C000FF70
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddControllerToGlobalControllerList(__int64 a1)
{
  KIRQL v2; // al
  unsigned __int64 Lock; // rcx
  unsigned __int64 *v4; // rbx
  unsigned __int64 **v5; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 8),
    Controller_AddControllerToGlobalControllerList,
    6705LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(WPP_MAIN_CB.DeviceQueue.Lock + 16));
  Lock = WPP_MAIN_CB.DeviceQueue.Lock;
  v4 = (unsigned __int64 *)(a1 + 24);
  v5 = *(unsigned __int64 ***)(WPP_MAIN_CB.DeviceQueue.Lock + 8);
  if ( *v5 != (unsigned __int64 *)WPP_MAIN_CB.DeviceQueue.Lock )
    __fastfail(3u);
  *v4 = WPP_MAIN_CB.DeviceQueue.Lock;
  v4[1] = (unsigned __int64)v5;
  *v5 = v4;
  *(_QWORD *)(Lock + 8) = v4;
  ++*(_DWORD *)(Lock + 24);
  KeReleaseSpinLock((PKSPIN_LOCK)(Lock + 16), v2);
}
