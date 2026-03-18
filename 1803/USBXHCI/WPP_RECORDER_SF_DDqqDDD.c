/*
 * XREFs of WPP_RECORDER_SF_DDqqDDD @ 0x1C002B168
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C002894C (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDqqDDD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+28h] [rbp-69h]
  __int64 v8; // [rsp+E0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+E0h] [rbp+4Fh]
  __int64 v10; // [rsp+E8h] [rbp+57h] BYREF
  va_list va1; // [rsp+E8h] [rbp+57h]
  __int64 v12; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+F0h] [rbp+5Fh]
  __int64 v14; // [rsp+F8h] [rbp+67h] BYREF
  va_list va3; // [rsp+F8h] [rbp+67h]
  __int64 v16; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+100h] [rbp+6Fh]
  __int64 v18; // [rsp+108h] [rbp+77h] BYREF
  va_list va5; // [rsp+108h] [rbp+77h]
  va_list va6; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v12 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v14 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v16 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v18 = va_arg(va6, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
      50LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      8LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      va6,
      4LL,
      0LL);
  LOWORD(v7) = 50;
  return WppAutoLogTrace(a1, 2LL, 14LL, &WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids, v7, (__int64 *)va);
}
