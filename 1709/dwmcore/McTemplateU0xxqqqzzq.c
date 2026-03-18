/*
 * XREFs of McTemplateU0xxqqqzzq @ 0x18012E7D4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG McTemplateU0xxqqqzzq(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rdx
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  const wchar_t *v7; // rcx
  bool v8; // zf
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-79h] BYREF
  va_list v11; // [rsp+30h] [rbp-69h]
  __int64 v12; // [rsp+38h] [rbp-61h]
  va_list v13; // [rsp+40h] [rbp-59h]
  __int64 v14; // [rsp+48h] [rbp-51h]
  va_list v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  va_list v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  va_list v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  const wchar_t *v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+9Ch] [rbp+3h]
  va_list v27; // [rsp+A0h] [rbp+7h]
  __int64 v28; // [rsp+A8h] [rbp+Fh]
  __int64 v29; // [rsp+E0h] [rbp+47h] BYREF
  va_list va; // [rsp+E0h] [rbp+47h]
  __int64 v31; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+4Fh]
  __int64 v33; // [rsp+F0h] [rbp+57h] BYREF
  va_list va2; // [rsp+F0h] [rbp+57h]
  __int64 v35; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+5Fh]
  __int64 v37; // [rsp+100h] [rbp+67h] BYREF
  va_list va4; // [rsp+100h] [rbp+67h]
  const wchar_t *v39; // [rsp+108h] [rbp+6Fh]
  const wchar_t *v40; // [rsp+110h] [rbp+77h]
  va_list va5; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v29 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v33 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v35 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v37 = va_arg(va5, _QWORD);
  v39 = va_arg(va5, const wchar_t *);
  v40 = va_arg(va5, const wchar_t *);
  v2 = v39;
  va_copy(v11, va);
  v12 = 8LL;
  va_copy(v13, va1);
  va_copy(v15, va2);
  va_copy(v17, va3);
  v3 = 10;
  v14 = 8LL;
  va_copy(v19, va4);
  v4 = -1LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 4LL;
  if ( v39 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v39[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v7 = v40;
  v22 = v6;
  v23 = 0;
  if ( !v39 )
    v2 = L"NULL";
  v21 = v2;
  v8 = v40 == 0LL;
  if ( v40 )
  {
    do
      ++v4;
    while ( v40[v4] );
    v3 = 2 * v4 + 2;
    v8 = v40 == 0LL;
  }
  if ( v8 )
    v7 = L"NULL";
  v25 = v3;
  v24 = v7;
  v26 = 0;
  va_copy(v27, va5);
  v28 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_ANIMATION_PERFORMANCE_ANALYSIS_EVENT,
           9u,
           &v10);
}
