/*
 * XREFs of Template_xxhhxzqq @ 0x18014179C
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1@Z @ 0x180028730 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG Template_xxhhxzqq(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  const wchar_t *v2; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-79h] BYREF
  va_list v8; // [rsp+30h] [rbp-69h]
  __int64 v9; // [rsp+38h] [rbp-61h]
  va_list v10; // [rsp+40h] [rbp-59h]
  __int64 v11; // [rsp+48h] [rbp-51h]
  va_list v12; // [rsp+50h] [rbp-49h]
  __int64 v13; // [rsp+58h] [rbp-41h]
  va_list v14; // [rsp+60h] [rbp-39h]
  __int64 v15; // [rsp+68h] [rbp-31h]
  const wchar_t *v16; // [rsp+70h] [rbp-29h]
  int v17; // [rsp+78h] [rbp-21h]
  int v18; // [rsp+7Ch] [rbp-1Dh]
  va_list v19; // [rsp+80h] [rbp-19h]
  __int64 v20; // [rsp+88h] [rbp-11h]
  va_list v21; // [rsp+90h] [rbp-9h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  __int64 v23; // [rsp+E0h] [rbp+47h] BYREF
  va_list va; // [rsp+E0h] [rbp+47h]
  __int64 v25; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list va1; // [rsp+E8h] [rbp+4Fh]
  __int64 v27; // [rsp+F0h] [rbp+57h] BYREF
  va_list va2; // [rsp+F0h] [rbp+57h]
  __int64 v29; // [rsp+F8h] [rbp+5Fh] BYREF
  va_list va3; // [rsp+F8h] [rbp+5Fh]
  __int64 v31; // [rsp+100h] [rbp+67h] BYREF
  va_list va4; // [rsp+100h] [rbp+67h]
  const wchar_t *v33; // [rsp+108h] [rbp+6Fh]
  __int64 v34; // [rsp+110h] [rbp+77h] BYREF
  va_list va5; // [rsp+110h] [rbp+77h]
  va_list va6; // [rsp+118h] [rbp+7Fh] BYREF

  va_start(va6, a2);
  va_start(va5, a2);
  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v29 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v31 = va_arg(va5, _QWORD);
  v33 = va_arg(va5, const wchar_t *);
  va_copy(va6, va5);
  v34 = va_arg(va6, _QWORD);
  v2 = v33;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v8, va1);
  v9 = 8LL;
  va_copy(v10, va2);
  va_copy(v12, va3);
  va_copy(v14, va4);
  v11 = 2LL;
  v13 = 2LL;
  v15 = 8LL;
  if ( v33 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v33[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v17 = v5;
  v18 = 0;
  if ( !v33 )
    v2 = L"NULL";
  v20 = 4LL;
  v16 = v2;
  va_copy(v19, va5);
  v22 = 4LL;
  va_copy(v21, va6);
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 8u, &UserData);
}
