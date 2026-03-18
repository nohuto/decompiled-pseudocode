/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009E6C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rsi
  unsigned int v3; // r10d
  const GUID *v4; // r9
  ULONGLONG v5; // r10
  const GUID *v6; // r9
  ULONGLONG v7; // r10
  const GUID *v8; // r9
  ULONGLONG v9; // r10
  int v10; // eax
  const GUID *v11; // r9
  const GUID *v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  void *v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  _QWORD *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  __int64 v18; // [rsp+78h] [rbp+17h]
  _QWORD v19[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = *(int *)(a1 + 48);
  v2 = a1;
  if ( (unsigned int)v1 <= 0x3C && (a1 = 0x1000006300000000LL, _bittest64(&a1, v1)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
    {
      v14 = &unk_1C003CA34;
      v16 = v19;
      v19[0] = *(unsigned int *)(v2 + 4);
      v15 = 4LL;
      v17 = 2LL;
      v18 = v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040BE3, 0LL, v4, 5u, &pData);
    }
  }
  else if ( *((_BYTE *)DXGGLOBAL::GetGlobal(a1) + 1568) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000010uLL)
      && hProvider > 1u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v5) )
    {
      v14 = &unk_1C003CA34;
      v16 = v19;
      v19[0] = *(unsigned int *)(v2 + 4);
      v15 = 4LL;
      v17 = 2LL;
      v18 = v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040CB9, 0LL, v6, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v7) )
  {
    v14 = &unk_1C003CA34;
    v16 = v19;
    v19[0] = *(unsigned int *)(v2 + 4);
    v15 = 4LL;
    v17 = 2LL;
    v18 = v2;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040C90, 0LL, v8, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v10 = *(_DWORD *)(v2 + 48);
    if ( v10 == 88 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v9) )
      {
        v14 = &unk_1C003CA34;
        v16 = (_QWORD *)(v2 + 52);
        v18 = v2 + 56;
        v19[1] = v2 + 60;
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        v19[2] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040C44, 0LL, v12, 6u, &pData);
      }
    }
    else if ( v10 == 94 && hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v9) )
      {
        v14 = &unk_1C003CA34;
        v16 = (_QWORD *)(v2 + 52);
        v18 = v2 + 56;
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0040C0C, 0LL, v11, 5u, &pData);
      }
    }
  }
}
