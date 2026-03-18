/*
 * XREFs of McTemplateU0xxhhxqntzqq @ 0x18014FBB4
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001473C (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0xxhhxqntzqq(
        _DWORD a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rcx
  __int64 v9; // rax
  int v10; // edx
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+20h] [rbp-C9h] BYREF
  __int64 *v13; // [rsp+30h] [rbp-B9h]
  __int64 v14; // [rsp+38h] [rbp-B1h]
  __int64 *v15; // [rsp+40h] [rbp-A9h]
  __int64 v16; // [rsp+48h] [rbp-A1h]
  char *v17; // [rsp+50h] [rbp-99h]
  __int64 v18; // [rsp+58h] [rbp-91h]
  char *v19; // [rsp+60h] [rbp-89h]
  __int64 v20; // [rsp+68h] [rbp-81h]
  char *v21; // [rsp+70h] [rbp-79h]
  __int64 v22; // [rsp+78h] [rbp-71h]
  va_list v23; // [rsp+80h] [rbp-69h]
  __int64 v24; // [rsp+88h] [rbp-61h]
  __int64 v25; // [rsp+90h] [rbp-59h]
  __int64 v26; // [rsp+98h] [rbp-51h]
  va_list v27; // [rsp+A0h] [rbp-49h]
  __int64 v28; // [rsp+A8h] [rbp-41h]
  const wchar_t *v29; // [rsp+B0h] [rbp-39h]
  int v30; // [rsp+B8h] [rbp-31h]
  int v31; // [rsp+BCh] [rbp-2Dh]
  va_list v32; // [rsp+C0h] [rbp-29h]
  __int64 v33; // [rsp+C8h] [rbp-21h]
  va_list v34; // [rsp+D0h] [rbp-19h]
  __int64 v35; // [rsp+D8h] [rbp-11h]
  __int64 v36; // [rsp+110h] [rbp+27h] BYREF
  __int64 v37; // [rsp+118h] [rbp+2Fh] BYREF
  __int64 v38; // [rsp+138h] [rbp+4Fh] BYREF
  va_list va; // [rsp+138h] [rbp+4Fh]
  __int64 v40; // [rsp+140h] [rbp+57h]
  __int64 v41; // [rsp+148h] [rbp+5Fh]
  __int64 v42; // [rsp+150h] [rbp+67h] BYREF
  va_list va1; // [rsp+150h] [rbp+67h]
  const wchar_t *v44; // [rsp+158h] [rbp+6Fh]
  __int64 v45; // [rsp+160h] [rbp+77h] BYREF
  va_list va2; // [rsp+160h] [rbp+77h]
  va_list va3; // [rsp+168h] [rbp+7Fh] BYREF

  va_start(va3, a7);
  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  v38 = va_arg(va1, _QWORD);
  v40 = va_arg(va1, _QWORD);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v42 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, const wchar_t *);
  va_copy(va3, va2);
  v45 = va_arg(va3, _QWORD);
  v37 = a4;
  v36 = a3;
  v7 = v44;
  v13 = &v36;
  v14 = 8LL;
  v15 = &v37;
  v17 = &a5;
  v19 = &a6;
  v21 = &a7;
  va_copy(v23, va);
  v25 = v41;
  va_copy(v27, va1);
  v16 = 8LL;
  v18 = 2LL;
  v20 = 2LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 8LL;
  v28 = 4LL;
  if ( v44 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v44[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v30 = v10;
  v31 = 0;
  if ( !v44 )
    v7 = L"NULL";
  v33 = 4LL;
  v29 = v7;
  va_copy(v32, va2);
  v35 = 4LL;
  va_copy(v34, va3);
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 0xCu, &v12);
}
