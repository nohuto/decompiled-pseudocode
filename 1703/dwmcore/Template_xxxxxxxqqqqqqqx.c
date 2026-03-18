/*
 * XREFs of Template_xxxxxxxqqqqqqqx @ 0x180141C48
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxxxxxxqqqqqqqx(__int64 a1, __int64 a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  va_list v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  va_list v6; // [rsp+40h] [rbp-C0h]
  __int64 v7; // [rsp+48h] [rbp-B8h]
  va_list v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+58h] [rbp-A8h]
  va_list v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h]
  va_list v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  va_list v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  va_list v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  va_list v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  va_list v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  va_list v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  va_list v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  va_list v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  va_list v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  va_list v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  __int64 v32; // [rsp+150h] [rbp+50h] BYREF
  va_list va; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h] BYREF
  va_list va1; // [rsp+158h] [rbp+58h]
  __int64 v36; // [rsp+160h] [rbp+60h] BYREF
  va_list va2; // [rsp+160h] [rbp+60h]
  __int64 v38; // [rsp+168h] [rbp+68h] BYREF
  va_list va3; // [rsp+168h] [rbp+68h]
  __int64 v40; // [rsp+170h] [rbp+70h] BYREF
  va_list va4; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h] BYREF
  va_list va5; // [rsp+178h] [rbp+78h]
  __int64 v44; // [rsp+180h] [rbp+80h] BYREF
  va_list va6; // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+188h] [rbp+88h] BYREF
  va_list va7; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+190h] [rbp+90h] BYREF
  va_list va8; // [rsp+190h] [rbp+90h]
  __int64 v50; // [rsp+198h] [rbp+98h] BYREF
  va_list va9; // [rsp+198h] [rbp+98h]
  __int64 v52; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va10; // [rsp+1A0h] [rbp+A0h]
  __int64 v54; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va11; // [rsp+1A8h] [rbp+A8h]
  __int64 v56; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va12; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va13; // [rsp+1B8h] [rbp+B8h]
  va_list va14; // [rsp+1C0h] [rbp+C0h] BYREF

  va_start(va14, a2);
  va_start(va13, a2);
  va_start(va12, a2);
  va_start(va11, a2);
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
  v32 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v34 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v38 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v40 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v42 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v44 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v46 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v48 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v50 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v52 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v54 = va_arg(va12, _QWORD);
  va_copy(va13, va12);
  v56 = va_arg(va13, _QWORD);
  va_copy(va14, va13);
  v58 = va_arg(va14, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v4, va1);
  v5 = 8LL;
  va_copy(v6, va2);
  v7 = 8LL;
  va_copy(v8, va3);
  va_copy(v10, va4);
  va_copy(v12, va5);
  va_copy(v14, va6);
  va_copy(v16, va7);
  va_copy(v18, va8);
  va_copy(v20, va9);
  va_copy(v22, va10);
  va_copy(v24, va11);
  va_copy(v26, va12);
  va_copy(v28, va13);
  va_copy(v30, va14);
  v9 = 8LL;
  v11 = 8LL;
  v13 = 8LL;
  v15 = 8LL;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 8LL;
  return EventWrite(
           Microsoft_Windows_Dwm_CoreHandle,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_LATENCIESCALCULATED_EVENT,
           0xFu,
           &UserData);
}
