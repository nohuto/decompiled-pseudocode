/*
 * XREFs of ?WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00277C4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0009B58 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000A194 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000A1C0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D3F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_DRIVER_RECOMMEND_VIDPN(struct _DXGK_DIAG_HEADER *a1)
{
  const struct _TlgProvider_t *v1; // r11
  const GUID *v2; // r9
  __int64 v3; // r10
  const struct _TlgProvider_t *v4; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  void *v6; // [rsp+50h] [rbp-48h]
  __int64 v7; // [rsp+58h] [rbp-40h]
  _DWORD *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  __int64 v10; // [rsp+70h] [rbp-28h]
  _DWORD v11[2]; // [rsp+78h] [rbp-20h] BYREF

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000100uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn(v1, 0x200000000100uLL) )
    {
      v7 = 4LL;
      v6 = &unk_1C003CA34;
      v8 = v11;
      v11[0] = *(_DWORD *)(v3 + 4);
      v9 = 2LL;
      v10 = v3;
      v11[1] = (_DWORD)v2;
      TlgWrite(v4, &unk_1C00408E4, 0LL, v2, 5u, &pData);
    }
  }
}
