/*
 * XREFs of WPP_RECORDER_SF_x @ 0x1C01039D8
 * Callers:
 *     RIMGetLastInvertedPenTime @ 0x1C01024D0 (RIMGetLastInvertedPenTime.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_x(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      146LL,
      va,
      8LL,
      0LL);
  LOWORD(v7) = 146;
  return WppAutoLogTrace(a1, 3LL, 19LL, &WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids, v7, va, 8LL, 0LL);
}
