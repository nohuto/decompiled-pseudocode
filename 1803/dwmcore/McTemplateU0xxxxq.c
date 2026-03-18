/*
 * XREFs of McTemplateU0xxxxq @ 0x180149108
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxxxq(__int64 a1, __int64 a2, ...)
{
  int v3; // [rsp+20h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-31h] BYREF
  va_list v5; // [rsp+40h] [rbp-21h]
  __int64 v6; // [rsp+48h] [rbp-19h]
  va_list v7; // [rsp+50h] [rbp-11h]
  __int64 v8; // [rsp+58h] [rbp-9h]
  va_list v9; // [rsp+60h] [rbp-1h]
  __int64 v10; // [rsp+68h] [rbp+7h]
  va_list v11; // [rsp+70h] [rbp+Fh]
  __int64 v12; // [rsp+78h] [rbp+17h]
  int *v13; // [rsp+80h] [rbp+1Fh]
  __int64 v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+C0h] [rbp+5Fh] BYREF
  va_list va; // [rsp+C0h] [rbp+5Fh]
  __int64 v17; // [rsp+C8h] [rbp+67h] BYREF
  va_list va1; // [rsp+C8h] [rbp+67h]
  __int64 v19; // [rsp+D0h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+D0h] [rbp+6Fh]
  va_list va3; // [rsp+D8h] [rbp+77h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v19 = va_arg(va3, _QWORD);
  v6 = 8LL;
  v3 = 0;
  va_copy(v5, va);
  v8 = 8LL;
  va_copy(v7, va1);
  v10 = 8LL;
  va_copy(v9, va2);
  v12 = 8LL;
  va_copy(v11, va3);
  v14 = 4LL;
  v13 = &v3;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_PRESENT_Start, 6u, &v4);
}
