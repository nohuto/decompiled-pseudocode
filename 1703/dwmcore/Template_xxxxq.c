/*
 * XREFs of Template_xxxxq @ 0x18013BFB4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x18013D22C (-PresentFrame@CIndependentRefreshRateScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxxxq(__int64 a1, __int64 a2, ...)
{
  int v3; // [rsp+20h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-31h] BYREF
  va_list v5; // [rsp+40h] [rbp-21h]
  __int64 v6; // [rsp+48h] [rbp-19h]
  va_list v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  int *v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+C0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+5Fh]
  __int64 v15; // [rsp+C8h] [rbp+67h] BYREF
  va_list va1; // [rsp+C8h] [rbp+67h]
  __int64 v17; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D0h] [rbp+6Fh]
  va_list va3; // [rsp+D8h] [rbp+77h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v3 = 0;
  va_copy(v5, va1);
  va_copy(v7, va2);
  va_copy(v9, va3);
  v6 = 8LL;
  v11 = &v3;
  v8 = 8LL;
  v10 = 8LL;
  v12 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_PRESENT_Start, 5u, &UserData);
}
