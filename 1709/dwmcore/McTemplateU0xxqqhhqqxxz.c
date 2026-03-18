/*
 * XREFs of McTemplateU0xxqqhhqqxxz @ 0x18012D878
 * Callers:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x18012B638 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0xxqqhhqqxxz(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rax
  int v4; // edx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-C1h] BYREF
  va_list v7; // [rsp+30h] [rbp-B1h]
  __int64 v8; // [rsp+38h] [rbp-A9h]
  va_list v9; // [rsp+40h] [rbp-A1h]
  __int64 v10; // [rsp+48h] [rbp-99h]
  va_list v11; // [rsp+50h] [rbp-91h]
  __int64 v12; // [rsp+58h] [rbp-89h]
  va_list v13; // [rsp+60h] [rbp-81h]
  __int64 v14; // [rsp+68h] [rbp-79h]
  va_list v15; // [rsp+70h] [rbp-71h]
  __int64 v16; // [rsp+78h] [rbp-69h]
  va_list v17; // [rsp+80h] [rbp-61h]
  __int64 v18; // [rsp+88h] [rbp-59h]
  va_list v19; // [rsp+90h] [rbp-51h]
  __int64 v20; // [rsp+98h] [rbp-49h]
  va_list v21; // [rsp+A0h] [rbp-41h]
  __int64 v22; // [rsp+A8h] [rbp-39h]
  va_list v23; // [rsp+B0h] [rbp-31h]
  __int64 v24; // [rsp+B8h] [rbp-29h]
  va_list v25; // [rsp+C0h] [rbp-21h]
  __int64 v26; // [rsp+C8h] [rbp-19h]
  const wchar_t *v27; // [rsp+D0h] [rbp-11h]
  int v28; // [rsp+D8h] [rbp-9h]
  int v29; // [rsp+DCh] [rbp-5h]
  __int64 v30; // [rsp+110h] [rbp+2Fh] BYREF
  va_list va; // [rsp+110h] [rbp+2Fh]
  __int64 v32; // [rsp+118h] [rbp+37h] BYREF
  va_list va1; // [rsp+118h] [rbp+37h]
  __int64 v34; // [rsp+120h] [rbp+3Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+3Fh]
  __int64 v36; // [rsp+128h] [rbp+47h] BYREF
  va_list va3; // [rsp+128h] [rbp+47h]
  __int64 v38; // [rsp+130h] [rbp+4Fh] BYREF
  va_list va4; // [rsp+130h] [rbp+4Fh]
  __int64 v40; // [rsp+138h] [rbp+57h] BYREF
  va_list va5; // [rsp+138h] [rbp+57h]
  __int64 v42; // [rsp+140h] [rbp+5Fh] BYREF
  va_list va6; // [rsp+140h] [rbp+5Fh]
  __int64 v44; // [rsp+148h] [rbp+67h] BYREF
  va_list va7; // [rsp+148h] [rbp+67h]
  __int64 v46; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va8; // [rsp+150h] [rbp+6Fh]
  __int64 v48; // [rsp+158h] [rbp+77h] BYREF
  va_list va9; // [rsp+158h] [rbp+77h]
  const wchar_t *v50; // [rsp+160h] [rbp+7Fh]
  va_list va10; // [rsp+168h] [rbp+87h] BYREF

  va_start(va10, a2);
  va_start(va9, a2);
  va_start(va8, a2);
  va_start(va7, a2);
  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v34 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v36 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v38 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v40 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v42 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v44 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v46 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v48 = va_arg(va10, _QWORD);
  v50 = va_arg(va10, const wchar_t *);
  v2 = v50;
  va_copy(v7, va);
  v8 = 8LL;
  va_copy(v9, va1);
  va_copy(v11, va2);
  va_copy(v13, va3);
  va_copy(v15, va4);
  va_copy(v17, va5);
  va_copy(v19, va6);
  va_copy(v21, va7);
  va_copy(v23, va8);
  va_copy(v25, va9);
  v10 = 8LL;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 2LL;
  v18 = 2LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  v26 = 8LL;
  if ( v50 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v50[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v28 = v4;
  v29 = 0;
  if ( !v50 )
    v2 = L"NULL";
  v27 = v2;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOEND_EVENT,
           0xCu,
           &v6);
}
