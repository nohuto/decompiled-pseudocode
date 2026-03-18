/*
 * XREFs of WPP_RECORDER_SF_qi @ 0x1C010C928
 * Callers:
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0094074 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimQueueCompleteFrame @ 0x1C010CE04 (rimQueueCompleteFrame.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qi(__int64 a1, _BYTE a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_ec5b4285555b30105b420c8c4957b6f6_Traceguids, v8, (__int64 *)va, 8LL, va1);
}
