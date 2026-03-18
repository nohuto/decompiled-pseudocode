/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0007860
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000772C (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0007C58 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // eax
  ULONGLONG v3; // r10
  ULONGLONG v4; // r10
  int v5; // eax
  const GUID *v6; // r9
  unsigned int v7; // r10d
  const GUID *v8; // r9
  ULONGLONG v9; // r10
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-29h] BYREF
  void *v14; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  char *v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  struct _DXGK_DIAG_HEADER *v18; // [rsp+78h] [rbp+17h]
  _QWORD v19[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 >= 32 && (v1 <= 33 || v1 > 36 && (v1 <= 38 || v1 == 60)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v7) )
    {
      v14 = &unk_1C00561D0;
      v16 = (char *)v19;
      v19[0] = *((unsigned int *)a1 + 1);
      v15 = 4LL;
      v17 = 2LL;
      v18 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0058982, 0LL, v8, 5u, &pData);
    }
  }
  else if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1696) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000010uLL)
      && hProvider > 1u
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v9) )
    {
      v14 = &unk_1C00561D0;
      v16 = (char *)v19;
      v19[0] = *((unsigned int *)a1 + 1);
      v15 = 4LL;
      v17 = 2LL;
      v18 = a1;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0058959, 0LL, v10, 5u, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > 4u
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v3) )
  {
    v14 = &unk_1C00561D0;
    v16 = (char *)v19;
    v19[0] = *((unsigned int *)a1 + 1);
    v15 = 4LL;
    v17 = 2LL;
    v18 = a1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00588AC, 0LL, v6, 5u, &pData);
  }
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x400000000010uLL) )
  {
    v5 = *((_DWORD *)a1 + 12);
    if ( v5 == 88 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, v4) )
      {
        v14 = &unk_1C00561D0;
        v16 = (char *)a1 + 52;
        v18 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 56);
        v19[1] = (char *)a1 + 60;
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        v19[2] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C005890D, 0LL, v12, 6u, &pData);
      }
    }
    else if ( v5 == 94 && hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v4) )
      {
        v14 = &unk_1C00561D0;
        v16 = (char *)a1 + 52;
        v18 = (struct _DXGK_DIAG_HEADER *)((char *)a1 + 56);
        v15 = 4LL;
        v17 = 4LL;
        v19[0] = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00588D5, 0LL, v11, 5u, &pData);
      }
    }
  }
}
