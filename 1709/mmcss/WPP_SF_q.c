/*
 * XREFs of WPP_SF_q @ 0x1C0002194
 * Callers:
 *     CiDispatchCreateNotificationClient @ 0x1C0009930 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00012D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_q(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_98d2866517bd35d6c7950b9d0bdce9ac_Traceguids,
           14LL,
           (__int64 *)va,
           8LL,
           0LL);
}
