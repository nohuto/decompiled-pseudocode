/*
 * XREFs of ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000CDCC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_SDC(struct _DXGK_DIAG_HEADER *a1)
{
  const struct _TlgProvider_t *v2; // r10
  ULONGLONG v3; // r11
  const GUID *v4; // r9
  const struct _TlgProvider_t *v5; // r10
  const struct _TlgProvider_t *v6; // r10
  ULONGLONG v7; // r11
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  void *v11; // [rsp+50h] [rbp+17h]
  int v12; // [rsp+58h] [rbp+1Fh]
  int v13; // [rsp+5Ch] [rbp+23h]
  int *v14; // [rsp+60h] [rbp+27h]
  int v15; // [rsp+68h] [rbp+2Fh]
  int v16; // [rsp+6Ch] [rbp+33h]
  struct _DXGK_DIAG_HEADER *v17; // [rsp+70h] [rbp+37h]
  int v18; // [rsp+78h] [rbp+3Fh] BYREF
  int v19; // [rsp+7Ch] [rbp+43h]

  if ( *((_BYTE *)DXGGLOBAL::GetGlobal((__int64)a1) + 1568) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 1u, 0x200000000001uLL) && hProvider > 1u )
    {
      if ( TlgKeywordOn(v2, v3) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v11 = &unk_1C003CA34;
        v14 = &v18;
        v18 = *((_DWORD *)a1 + 1);
        v12 = 4;
        v15 = 2;
        v17 = a1;
        TlgWrite(v5, &unk_1C0040DC8, 0LL, v4, 5u, &pData);
      }
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000001uLL)
         && hProvider > 4u
         && TlgKeywordOn(v6, v7) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = &unk_1C003CA34;
    v14 = &v18;
    v18 = *((_DWORD *)a1 + 1);
    v12 = 4;
    v15 = 2;
    v17 = a1;
    TlgWrite(v9, &unk_1C0040DA6, 0LL, v8, 5u, &pData);
  }
}
