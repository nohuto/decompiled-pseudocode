/*
 * XREFs of WPP_RECORDER_SF__guid_dd @ 0x1C0010FD4
 * Callers:
 *     HUBPDO_ReEnumerationCallback @ 0x1C00177A0 (HUBPDO_ReEnumerationCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF__guid_dd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v9 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      147LL,
      a6,
      16LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v8) = 147;
  return WppAutoLogTrace(a1, 4LL, 5LL, &WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids, v8, a6);
}
