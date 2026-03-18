/*
 * XREFs of WPP_RECORDER_SF_H @ 0x1C00263D4
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002B820 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_H(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      119LL,
      va,
      2LL,
      0LL);
  LOWORD(v7) = 119;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_1e5c473914e33d167f0525b500a65e26_Traceguids, v7, va);
}
