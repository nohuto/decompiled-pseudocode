/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C003F9E4
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DP(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d3b706e0f10d373cc7042ef29394172c_Traceguids,
      13LL,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 13;
  return WppAutoLogTrace(a1, 2LL, 19LL, &WPP_d3b706e0f10d373cc7042ef29394172c_Traceguids, v7, (__int64 *)va);
}
