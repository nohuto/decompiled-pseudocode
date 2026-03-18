/*
 * XREFs of WPP_RECORDER_SF_qdx @ 0x1C003F454
 * Callers:
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C003F978 (XilCoreDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qdx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  __int64 v10; // [rsp+A0h] [rbp+38h] BYREF
  va_list va1; // [rsp+A0h] [rbp+38h]
  va_list va2; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v10 = va_arg(va2, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_13340aaa62fe39736047da1387542cf1_Traceguids,
      11LL,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      va2,
      8LL,
      0LL);
  LOWORD(v7) = 11;
  return WppAutoLogTrace(a1, 4LL, 10LL, &WPP_13340aaa62fe39736047da1387542cf1_Traceguids, v7, (__int64 *)va);
}
