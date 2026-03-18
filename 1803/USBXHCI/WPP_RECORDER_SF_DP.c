/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C003E094
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
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
      &WPP_8e4a88313dd436790ae6788f85b62921_Traceguids,
      14LL,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 14;
  return WppAutoLogTrace(a1, 2LL, 19LL, &WPP_8e4a88313dd436790ae6788f85b62921_Traceguids, v7, (__int64 *)va);
}
