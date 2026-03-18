/*
 * XREFs of WPP_RECORDER_SF_H @ 0x1C0026FD0
 * Callers:
 *     HUBMISC_GenerateControllerSuffix @ 0x1C002C7B0 (HUBMISC_GenerateControllerSuffix.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
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
      &WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids,
      120LL,
      va,
      2LL,
      0LL);
  LOWORD(v7) = 120;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_6dc2a34f378238ba241799b961c3ba51_Traceguids, v7, va);
}
