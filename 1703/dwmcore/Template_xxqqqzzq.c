/*
 * XREFs of Template_xxqqqzzq @ 0x180142998
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxqqqzzq(__int64 a1, __int64 a2, ...)
{
  const wchar_t *v2; // rdx
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r8d
  const wchar_t *v7; // rcx
  bool v8; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-79h] BYREF
  va_list v11; // [rsp+30h] [rbp-69h]
  __int64 v12; // [rsp+38h] [rbp-61h]
  va_list v13; // [rsp+40h] [rbp-59h]
  __int64 v14; // [rsp+48h] [rbp-51h]
  va_list v15; // [rsp+50h] [rbp-49h]
  __int64 v16; // [rsp+58h] [rbp-41h]
  va_list v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  const wchar_t *v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  int v21; // [rsp+7Ch] [rbp-1Dh]
  const wchar_t *v22; // [rsp+80h] [rbp-19h]
  int v23; // [rsp+88h] [rbp-11h]
  int v24; // [rsp+8Ch] [rbp-Dh]
  va_list v25; // [rsp+90h] [rbp-9h]
  __int64 v26; // [rsp+98h] [rbp-1h]
  __int64 v27; // [rsp+E0h] [rbp+47h] BYREF
  va_list va; // [rsp+E0h] [rbp+47h]
  __int64 v29; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+4Fh]
  __int64 v31; // [rsp+F0h] [rbp+57h] BYREF
  va_list va2; // [rsp+F0h] [rbp+57h]
  __int64 v33; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+5Fh]
  __int64 v35; // [rsp+100h] [rbp+67h] BYREF
  va_list va4; // [rsp+100h] [rbp+67h]
  const wchar_t *v37; // [rsp+108h] [rbp+6Fh]
  const wchar_t *v38; // [rsp+110h] [rbp+77h]
  va_list va5; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v27 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v29 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v31 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v33 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v35 = va_arg(va5, _QWORD);
  v37 = va_arg(va5, const wchar_t *);
  v38 = va_arg(va5, const wchar_t *);
  v2 = v37;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v11, va1);
  va_copy(v13, va2);
  va_copy(v15, va3);
  v3 = 10;
  v12 = 8LL;
  va_copy(v17, va4);
  v4 = -1LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 4LL;
  if ( v37 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( v37[v5] );
    v6 = 2 * v5 + 2;
  }
  else
  {
    v6 = 10;
  }
  v7 = v38;
  v20 = v6;
  v21 = 0;
  if ( !v37 )
    v2 = L"NULL";
  v19 = v2;
  v8 = v38 == 0LL;
  if ( v38 )
  {
    do
      ++v4;
    while ( v38[v4] );
    v3 = 2 * v4 + 2;
    v8 = v38 == 0LL;
  }
  if ( v8 )
    v7 = L"NULL";
  v23 = v3;
  v22 = v7;
  v24 = 0;
  va_copy(v25, va5);
  v26 = 4LL;
  return EventWrite(
           Microsoft_Windows_Dwm_CoreHandle,
           &EVTDESC_TELEMETRY_ANIMATION_PERFORMANCE_ANALYSIS_EVENT,
           8u,
           &UserData);
}
