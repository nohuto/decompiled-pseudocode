/*
 * XREFs of WPP_SF_dI @ 0x1C0002568
 * Callers:
 *     CiThreadCreate @ 0x1C000AA4C (CiThreadCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_dI(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_f6806cb8b818300a6165f8fb8ae15b34_Traceguids,
           11LL,
           &v5,
           4LL,
           (__int64 *)va,
           8LL,
           0LL);
}
