/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C000E7DC
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C0053F00 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q_guid_Ld(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-58h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v10; // [rsp+B0h] [rbp+38h]
  __int64 v11; // [rsp+B8h] [rbp+40h] BYREF
  va_list va1; // [rsp+B8h] [rbp+40h]
  va_list va2; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      247LL,
      (__int64 *)va,
      8LL,
      v10,
      16LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 247;
  return WppAutoLogTrace(a1, 4LL, 4LL, &WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v7, (__int64 *)va);
}
