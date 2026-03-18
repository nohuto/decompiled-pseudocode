/*
 * XREFs of WPP_SF_dd @ 0x1C0002118
 * Callers:
 *     CiDispatchCreateMmThreadClient @ 0x1C0009760 (CiDispatchCreateMmThreadClient.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C0009A30 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchFastIoDeviceControl @ 0x1C0009BC0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001300 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_0cf46c375129332dca7ac6861072a04e_Traceguids,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
