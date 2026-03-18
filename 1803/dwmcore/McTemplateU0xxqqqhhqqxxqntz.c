/*
 * XREFs of McTemplateU0xxqqqhhqqxxqntz @ 0x18014FEF0
 * Callers:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180014BC4 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxqqqhhqqxxqntz(
        _DWORD a1,
        _DWORD a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        ...)
{
  const wchar_t *v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int64 *v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  char *v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  char *v24; // [rsp+60h] [rbp-A0h]
  __int64 v25; // [rsp+68h] [rbp-98h]
  char *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  char *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  char *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  char *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  va_list v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  va_list v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  const wchar_t *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  __int64 v49; // [rsp+150h] [rbp+50h] BYREF
  __int64 v50; // [rsp+158h] [rbp+58h] BYREF
  __int64 v51; // [rsp+1A8h] [rbp+A8h] BYREF
  va_list va; // [rsp+1A8h] [rbp+A8h]
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  __int64 v55; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va1; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v57; // [rsp+1C8h] [rbp+C8h]
  va_list va2; // [rsp+1D0h] [rbp+D0h] BYREF

  va_start(va2, a13);
  va_start(va1, a13);
  va_start(va, a13);
  v51 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _QWORD);
  v54 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v55 = va_arg(va2, _QWORD);
  v57 = va_arg(va2, const wchar_t *);
  v50 = a4;
  v49 = a3;
  v13 = v57;
  v18 = &v49;
  v19 = 8LL;
  v20 = &v50;
  v22 = &a5;
  v24 = &a6;
  v26 = &a7;
  v28 = &a8;
  v30 = &a9;
  v32 = &a10;
  v34 = &a11;
  v36 = &a12;
  v38 = &a13;
  va_copy(v40, va);
  v42 = v54;
  va_copy(v44, va1);
  v21 = 8LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 2LL;
  v31 = 2LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 8LL;
  v45 = 4LL;
  if ( v57 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v57[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v47 = v15;
  v48 = 0;
  if ( !v57 )
    v13 = L"NULL";
  v46 = v13;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOEND_EVENT,
           0x10u,
           &v17);
}
