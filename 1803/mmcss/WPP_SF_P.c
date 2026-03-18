/*
 * XREFs of WPP_SF_P @ 0x1C0002208
 * Callers:
 *     CiTaskDump @ 0x1C000C444 (CiTaskDump.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_P(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_b16952c3df223b48f0e350525c9a1e30_Traceguids,
           17LL,
           (__int64 *)va,
           8LL,
           0LL);
}
