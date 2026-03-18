/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00079C0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000772C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0007C58 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // eax
  ULONGLONG v3; // r11
  unsigned int v4; // r10d
  int v5; // eax
  ULONGLONG v6; // r11
  const GUID *v7; // r9
  int v8; // r15d
  const GUID *v9; // r9
  unsigned __int8 v10; // r11
  const GUID *v11; // r9
  const GUID *v12; // r9
  const GUID *v13; // r9
  const GUID *v14; // r9
  __int64 v15; // [rsp+38h] [rbp-89h] BYREF
  __int64 v16; // [rsp+40h] [rbp-81h] BYREF
  int v17; // [rsp+48h] [rbp-79h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-69h] BYREF
  void *v20; // [rsp+78h] [rbp-49h]
  __int64 v21; // [rsp+80h] [rbp-41h]
  __int64 *v22; // [rsp+88h] [rbp-39h]
  __int64 v23; // [rsp+90h] [rbp-31h]
  struct _DXGK_DIAG_HEADER *v24; // [rsp+98h] [rbp-29h]
  __int64 v25; // [rsp+A0h] [rbp-21h] BYREF
  const GUID *v26; // [rsp+A8h] [rbp-19h]
  __int64 v27; // [rsp+B0h] [rbp-11h]
  char *v28; // [rsp+B8h] [rbp-9h]
  __int64 v29; // [rsp+C0h] [rbp-1h]
  int *v30; // [rsp+C8h] [rbp+7h]
  __int64 v31; // [rsp+D0h] [rbp+Fh]
  __int64 *v32; // [rsp+D8h] [rbp+17h]
  __int64 v33; // [rsp+E0h] [rbp+1Fh]

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 >= 32 && (v1 <= 33 || v1 > 36 && (v1 <= 38 || v1 == 60)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v20 = &unk_1C00561D0;
      v22 = &v25;
      v25 = *((unsigned int *)a1 + 1);
      v21 = 4LL;
      v23 = 2LL;
      v24 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0058982, 0LL, v11, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v6) )
  {
    v20 = &unk_1C00561D0;
    v22 = &v25;
    v25 = *((unsigned int *)a1 + 1);
    v21 = 4LL;
    v23 = 2LL;
    v24 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00588AC, 0LL, v7, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v5 = *((_DWORD *)a1 + 12);
    switch ( v5 )
    {
      case 'D':
        v8 = *((_DWORD *)a1 + 13);
        if ( v8 < 0 != ((v8 & 0x40000000) != 0)
          && v4 > 4
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v18 = *((_QWORD *)a1 + 8);
          v22 = &v18;
          v24 = (struct _DXGK_DIAG_HEADER *)&v15;
          v26 = (const GUID *)((char *)a1 + 56);
          v28 = (char *)a1 + 60;
          v17 = v10;
          v30 = &v17;
          LODWORD(v16) = (unsigned __int8)v9;
          v32 = &v16;
          v20 = &unk_1C00561D0;
          v21 = 4LL;
          v23 = 8LL;
          LOBYTE(v15) = v8;
          v25 = 1LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00586F2, 0LL, v9, 9u, &pData);
        }
        break;
      case 'X':
        if ( v4 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v16 = *((_QWORD *)a1 + 8);
          v22 = &v16;
          v24 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
          v26 = (const GUID *)((char *)a1 + 56);
          v28 = (char *)a1 + 60;
          v20 = &unk_1C00561D0;
          v21 = 4LL;
          v23 = 8LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0058853, 0LL, v14, 7u, &pData);
        }
        break;
      case '`':
        if ( v4 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
        {
          v16 = *((_QWORD *)a1 + 8);
          v22 = &v16;
          v24 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
          v26 = (const GUID *)((char *)a1 + 56);
          v28 = (char *)a1 + 60;
          v20 = &unk_1C00561D0;
          v21 = 4LL;
          v23 = 8LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00587ED, 0LL, v13, 7u, &pData);
        }
        break;
      default:
        if ( v5 == 98 && *((int *)a1 + 14) < 0 && v4 > 4 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000010uLL) )
          {
            v16 = *((_QWORD *)a1 + 8);
            v22 = &v16;
            v24 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
            v20 = &unk_1C00561D0;
            v21 = 4LL;
            v23 = 8LL;
            v25 = 4LL;
            v26 = v12;
            v27 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0058779, 0LL, v12, 6u, &pData);
          }
        }
        break;
    }
  }
}
