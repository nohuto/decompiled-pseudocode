/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C00215EC
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002D78C (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C005BBAC (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DDDd(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v9; // [rsp+20h] [rbp-58h]
  __int64 v10; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v12; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v14; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      va3,
      4LL,
      0LL);
  LOWORD(v9) = a4;
  return WppAutoLogTrace(a1, a2, 14LL, a5, v9, (__int64 *)va);
}
