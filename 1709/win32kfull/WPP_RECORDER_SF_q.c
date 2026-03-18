/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C01E0B44
 * Callers:
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2a9961dc36d3321222848be42dab98fe_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 3LL, 5LL, &WPP_2a9961dc36d3321222848be42dab98fe_Traceguids, v8, va, 8LL, 0LL);
}
