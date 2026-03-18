/*
 * XREFs of ?WriteDxgDiagnosticsEvent_ADAPTER_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0013B7C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_ADAPTER_START(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v2; // r10
  ULONGLONG v3; // r10
  const GUID *v4; // r9
  const GUID *v5; // r9
  __int64 v6; // rax
  int v7; // [rsp+38h] [rbp-49h] BYREF
  __int64 v8; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  void *v10; // [rsp+68h] [rbp-19h]
  int v11; // [rsp+70h] [rbp-11h]
  int v12; // [rsp+74h] [rbp-Dh]
  int *v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+80h] [rbp-1h]
  int v15; // [rsp+84h] [rbp+3h]
  struct _DXGK_DIAG_HEADER *v16; // [rsp+88h] [rbp+7h]
  int v17; // [rsp+90h] [rbp+Fh] BYREF
  int v18; // [rsp+94h] [rbp+13h]
  char *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  char *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]
  char *v25; // [rsp+B8h] [rbp+37h]
  int v26; // [rsp+C0h] [rbp+3Fh]
  int v27; // [rsp+C4h] [rbp+43h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000001000uLL)
    && hProvider > 4u
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v2) )
  {
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v13 = &v17;
    v17 = *((_DWORD *)a1 + 1);
    v10 = &unk_1C003CA34;
    v11 = 4;
    v14 = 2;
    v16 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00406A9, 0LL, v4, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000001000uLL)
    && *((int *)a1 + 12) < 0
    && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v6 = *((_QWORD *)a1 + 7);
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v8 = v6;
      v13 = (int *)&v8;
      v16 = (struct _DXGK_DIAG_HEADER *)&v7;
      v19 = (char *)a1 + 52;
      v22 = (char *)a1 + 64;
      v25 = (char *)a1 + 72;
      v10 = &unk_1C003CA34;
      v11 = 4;
      v14 = 8;
      v7 = (int)v5;
      v17 = 4;
      v20 = 4;
      v23 = 4;
      v26 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040648, 0LL, v5, 8u, &pData);
    }
  }
}
