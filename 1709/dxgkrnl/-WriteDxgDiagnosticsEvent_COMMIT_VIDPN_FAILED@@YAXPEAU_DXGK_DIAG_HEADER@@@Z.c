/*
 * XREFs of ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0027600
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v2; // r10
  const GUID *v3; // r9
  ULONGLONG v4; // r10
  const GUID *v5; // r9
  __int64 v6; // rax
  int v7; // [rsp+38h] [rbp-49h] BYREF
  int v8; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v9; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v11; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  int *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  struct _DXGK_DIAG_HEADER *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh] BYREF
  int v19; // [rsp+94h] [rbp+13h]
  char *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  int *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]
  int *v26; // [rsp+B8h] [rbp+37h]
  int v27; // [rsp+C0h] [rbp+3Fh]
  int v28; // [rsp+C4h] [rbp+43h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000100uLL)
    && hProvider > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v2) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v14 = &v18;
    v18 = *((_DWORD *)a1 + 1);
    v11 = &unk_1C003CA34;
    v12 = 4;
    v15 = 2;
    v17 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040984, 0LL, v3, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000100uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v4) )
    {
      v6 = *(_QWORD *)((char *)a1 + 52);
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v9 = v6;
      v14 = (int *)&v9;
      v17 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 60);
      v20 = (char *)a1 + 76;
      v7 = *((_DWORD *)a1 + 12);
      v23 = &v7;
      v8 = *((_DWORD *)a1 + 18);
      v26 = &v8;
      v11 = &unk_1C003CA34;
      v12 = 4;
      v15 = 8;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040919, 0LL, v5, 8u, &pData);
    }
  }
}
