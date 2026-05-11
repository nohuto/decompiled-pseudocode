/*
 * XREFs of WPP_RECORDER_SF_dd @ 0x1C0006ABC
 * Callers:
 *     IsDeviceInSidebandMode @ 0x1C0006F44 (IsDeviceInSidebandMode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0009630 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids,
      18LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 18;
  return WppAutoLogTrace(a1, 0LL, 9LL, &WPP_5a9852d7b15f3c8fd7b48c967f894db6_Traceguids, v7, (__int64 *)va);
}
