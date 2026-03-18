/*
 * XREFs of WPP_RECORDER_SF_dDdddDdd @ 0x1C0105468
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0103CF8 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dDdddDdd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+28h] [rbp-81h]
  __int64 v8; // [rsp+F0h] [rbp+47h] BYREF
  va_list va; // [rsp+F0h] [rbp+47h]
  __int64 v10; // [rsp+F8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+F8h] [rbp+4Fh]
  __int64 v12; // [rsp+100h] [rbp+57h] BYREF
  va_list va2; // [rsp+100h] [rbp+57h]
  __int64 v14; // [rsp+108h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+108h] [rbp+5Fh]
  __int64 v16; // [rsp+110h] [rbp+67h] BYREF
  va_list va4; // [rsp+110h] [rbp+67h]
  __int64 v18; // [rsp+118h] [rbp+6Fh] BYREF
  va_list va5; // [rsp+118h] [rbp+6Fh]
  __int64 v20; // [rsp+120h] [rbp+77h] BYREF
  va_list va6; // [rsp+120h] [rbp+77h]
  va_list va7; // [rsp+128h] [rbp+7Fh] BYREF

  va_start(va7, a5);
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
  va_copy(va7, va6);
  v20 = va_arg(va7, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
      13LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      4LL,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  LOWORD(v7) = 13;
  return WppAutoLogTrace(
           a1,
           3LL,
           20LL,
           &WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
