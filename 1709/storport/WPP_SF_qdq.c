/*
 * XREFs of WPP_SF_qdq @ 0x1C004018C
 * Callers:
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qdq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return (*(__int64 (__fastcall **)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))&WPP_MAIN_CB.SectorSize)(
           a1,
           43LL,
           &WPP_5155b04a891832e57879a5a4e4c79a88_Traceguids,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2,
           8LL,
           0LL);
}
