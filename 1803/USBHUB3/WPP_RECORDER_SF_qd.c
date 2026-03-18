/*
 * XREFs of WPP_RECORDER_SF_qd @ 0x1C00029F8
 * Callers:
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004B64 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHSM_WaitingForOvercurrentToClear @ 0x1C0008120 (HUBHSM_WaitingForOvercurrentToClear.c)
 *     HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C00279F8 (HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax.c)
 *     HUBMISC_StartOverCurrentTimer @ 0x1C002ADE0 (HUBMISC_StartOverCurrentTimer.c)
 *     HUBMISC_StartD3ColdReconnectTimer @ 0x1C002AED4 (HUBMISC_StartD3ColdReconnectTimer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qd(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      (__int64 *)va,
      8LL,
      va1,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, (__int64 *)va);
}
