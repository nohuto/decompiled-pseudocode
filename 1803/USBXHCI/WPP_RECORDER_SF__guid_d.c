/*
 * XREFs of WPP_RECORDER_SF__guid_d @ 0x1C000DE84
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF__guid_d(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v8; // [rsp+20h] [rbp-48h]
  int v9[6]; // [rsp+50h] [rbp-18h] BYREF

  v9[0] = -1073741670;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64, __int64, int *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      246LL,
      a6,
      16LL,
      v9,
      4LL,
      0LL);
  LOWORD(v8) = 246;
  return WppAutoLogTrace(a1, 2LL, 4LL, &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v8, a6);
}
