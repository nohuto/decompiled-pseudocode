/*
 * XREFs of WPP_RECORDER_SF_xx @ 0x1C000928C
 * Callers:
 *     SetPerfStateFFH @ 0x1C00094A0 (SetPerfStateFFH.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_xx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids,
      25LL,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 25;
  return WppAutoLogTrace(a1, 3LL, 3LL, &WPP_4fb804b79ee83e7d3d0dc001d18061c9_Traceguids, v7, (__int64 *)va);
}
