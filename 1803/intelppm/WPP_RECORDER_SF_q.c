/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000C1A4
 * Callers:
 *     DisplayKernelIdleStates @ 0x1C0002374 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C0003AA8 (DisplayKernelPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, _BYTE a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_4b1a1252e5e231eaf08fbaa84a8262c0_Traceguids, v8, va);
}
