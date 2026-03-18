/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C0110000
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_i(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids,
      19LL,
      va,
      8LL,
      0LL);
  LOWORD(v7) = 19;
  return WppAutoLogTrace(a1, 3LL, 19LL, &WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids, v7, va, 8LL, 0LL);
}
