/*
 * XREFs of WPP_RECORDER_SF_qqdL @ 0x1C0005EE0
 * Callers:
 *     KeyboardClassDeviceControl @ 0x1C000C8D0 (KeyboardClassDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A80 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqdL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  _DWORD v8[4]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  __int64 v13; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v13 = va_arg(va2, _QWORD);
  v8[0] = -1073741808;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids,
      24LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      v8,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v7) = 24;
  return WppAutoLogTrace(
           a1,
           2LL,
           4LL,
           &WPP_02adfbfe7f403f9a791eda140aa72879_Traceguids,
           v7,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v8,
           4LL,
           va2);
}
