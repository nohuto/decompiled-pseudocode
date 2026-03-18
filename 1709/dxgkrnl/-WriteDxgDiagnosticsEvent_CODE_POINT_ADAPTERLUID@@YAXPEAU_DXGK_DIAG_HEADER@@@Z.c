/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009CD0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // eax
  ULONGLONG v3; // r11
  unsigned int v4; // r10d
  ULONGLONG v5; // r11
  int v6; // eax
  ULONGLONG v7; // r11
  const GUID *v8; // r9
  const GUID *v9; // r9
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  _QWORD v13[2]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v15; // [rsp+68h] [rbp-19h]
  __int64 v16; // [rsp+70h] [rbp-11h]
  __int64 *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  struct _DXGK_DIAG_HEADER *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh] BYREF
  const GUID *v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  char *v23; // [rsp+A8h] [rbp+27h]
  __int64 v24; // [rsp+B0h] [rbp+2Fh]

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 >= 32 && (v1 <= 33 || v1 > 36 && (v1 <= 38 || v1 == 60)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v15 = &unk_1C003CA34;
      v17 = &v20;
      v20 = *((unsigned int *)a1 + 1);
      v16 = 4LL;
      v18 = 2LL;
      v19 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040BE3, 0LL, v9, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v7) )
  {
    v15 = &unk_1C003CA34;
    v17 = &v20;
    v20 = *((unsigned int *)a1 + 1);
    v16 = 4LL;
    v18 = 2LL;
    v19 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040C90, 0LL, v8, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v6 = *((_DWORD *)a1 + 12);
    if ( v6 == 88 )
    {
      if ( v4 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
      {
        v13[0] = *((_QWORD *)a1 + 8);
        v17 = v13;
        v19 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
        v21 = (const GUID *)((char *)a1 + 56);
        v23 = (char *)a1 + 60;
        v15 = &unk_1C003CA34;
        v16 = 4LL;
        v18 = 8LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040B8A, 0LL, v12, 7u, &pData);
      }
    }
    else if ( v6 == 96 )
    {
      if ( v4 > 4 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
      {
        v13[0] = *((_QWORD *)a1 + 8);
        v17 = v13;
        v19 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
        v21 = (const GUID *)((char *)a1 + 56);
        v23 = (char *)a1 + 60;
        v15 = &unk_1C003CA34;
        v16 = 4LL;
        v18 = 8LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040B24, 0LL, v11, 7u, &pData);
      }
    }
    else if ( v6 == 98 && *((int *)a1 + 14) < 0 && v4 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
      {
        v13[0] = *((_QWORD *)a1 + 8);
        v17 = v13;
        v19 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 52);
        v15 = &unk_1C003CA34;
        v16 = 4LL;
        v18 = 8LL;
        v20 = 4LL;
        v21 = v10;
        v22 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040AB0, 0LL, v10, 6u, &pData);
      }
    }
  }
}
