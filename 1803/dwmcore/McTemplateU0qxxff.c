/*
 * XREFs of McTemplateU0qxxff @ 0x180151554
 * Callers:
 *     ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x1800BC8A0 (-CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0qxxff(__int64 a1, __int64 a2, int a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-31h] BYREF
  int *v5; // [rsp+30h] [rbp-21h]
  __int64 v6; // [rsp+38h] [rbp-19h]
  va_list v7; // [rsp+40h] [rbp-11h]
  __int64 v8; // [rsp+48h] [rbp-9h]
  va_list v9; // [rsp+50h] [rbp-1h]
  __int64 v10; // [rsp+58h] [rbp+7h]
  va_list v11; // [rsp+60h] [rbp+Fh]
  __int64 v12; // [rsp+68h] [rbp+17h]
  va_list v13; // [rsp+70h] [rbp+1Fh]
  __int64 v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v16; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v18; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v20; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v15 = a3;
  v6 = 4LL;
  v5 = &v15;
  v8 = 8LL;
  va_copy(v7, va);
  v10 = 8LL;
  va_copy(v9, va1);
  v12 = 4LL;
  va_copy(v11, va2);
  v14 = 4LL;
  va_copy(v13, va3);
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_SCHEDULE_NEW_EFFECTIVE_REFRESH_PERIOD_DELTAS,
           6u,
           &v4);
}
