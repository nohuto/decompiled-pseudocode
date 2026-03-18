/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C000DDD4
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C000AB20 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-28h]

  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      197LL,
      a6,
      16LL,
      0LL);
  LOWORD(v8) = 197;
  return WppAutoLogTrace(a1, 4LL, 4LL, &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v8, a6);
}
