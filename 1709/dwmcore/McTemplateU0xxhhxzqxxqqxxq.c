/*
 * XREFs of McTemplateU0xxhhxzqxxqqxxq @ 0x18012D568
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0xxhhxzqxxqqxxq(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rax
  int v4; // edx
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+20h] [rbp-E0h] BYREF
  va_list v7; // [rsp+30h] [rbp-D0h]
  __int64 v8; // [rsp+38h] [rbp-C8h]
  va_list v9; // [rsp+40h] [rbp-C0h]
  __int64 v10; // [rsp+48h] [rbp-B8h]
  va_list v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  va_list v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  va_list v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  const wchar_t *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  va_list v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  va_list v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  va_list v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  va_list v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  va_list v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  va_list v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  va_list v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  va_list v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 v36; // [rsp+140h] [rbp+40h] BYREF
  va_list va; // [rsp+140h] [rbp+40h]
  __int64 v38; // [rsp+148h] [rbp+48h] BYREF
  va_list va1; // [rsp+148h] [rbp+48h]
  __int64 v40; // [rsp+150h] [rbp+50h] BYREF
  va_list va2; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h] BYREF
  va_list va3; // [rsp+158h] [rbp+58h]
  __int64 v44; // [rsp+160h] [rbp+60h] BYREF
  va_list va4; // [rsp+160h] [rbp+60h]
  const wchar_t *v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+170h] [rbp+70h] BYREF
  va_list va5; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h] BYREF
  va_list va6; // [rsp+178h] [rbp+78h]
  __int64 v51; // [rsp+180h] [rbp+80h] BYREF
  va_list va7; // [rsp+180h] [rbp+80h]
  __int64 v53; // [rsp+188h] [rbp+88h] BYREF
  va_list va8; // [rsp+188h] [rbp+88h]
  __int64 v55; // [rsp+190h] [rbp+90h] BYREF
  va_list va9; // [rsp+190h] [rbp+90h]
  __int64 v57; // [rsp+198h] [rbp+98h] BYREF
  va_list va10; // [rsp+198h] [rbp+98h]
  __int64 v59; // [rsp+1A0h] [rbp+A0h] BYREF
  va_list va11; // [rsp+1A0h] [rbp+A0h]
  va_list va12; // [rsp+1A8h] [rbp+A8h] BYREF

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
  v36 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v38 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v40 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v42 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v44 = va_arg(va5, _QWORD);
  v46 = va_arg(va5, const wchar_t *);
  va_copy(va6, va5);
  v47 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v49 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v51 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v53 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v55 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v57 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v59 = va_arg(va12, _QWORD);
  v2 = v46;
  va_copy(v7, va);
  v8 = 8LL;
  va_copy(v9, va1);
  va_copy(v11, va2);
  va_copy(v13, va3);
  va_copy(v15, va4);
  v10 = 8LL;
  v12 = 2LL;
  v14 = 2LL;
  v16 = 8LL;
  if ( v46 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( v46[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v18 = v4;
  v19 = 0;
  if ( !v46 )
    v2 = L"NULL";
  v21 = 4LL;
  v17 = v2;
  va_copy(v20, va5);
  v23 = 8LL;
  va_copy(v22, va6);
  v25 = 8LL;
  va_copy(v24, va7);
  v27 = 4LL;
  va_copy(v26, va8);
  v29 = 4LL;
  va_copy(v28, va9);
  va_copy(v30, va10);
  va_copy(v32, va11);
  va_copy(v34, va12);
  v31 = 8LL;
  v33 = 8LL;
  v35 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOUPDATED_EVENT,
           0xFu,
           &v6);
}
