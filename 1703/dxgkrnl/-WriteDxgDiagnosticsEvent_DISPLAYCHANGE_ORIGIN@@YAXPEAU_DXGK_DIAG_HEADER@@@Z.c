/*
 * XREFs of ?WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000338C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_DISPLAYCHANGE_ORIGIN(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const GUID *v2; // r9
  int *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h]
  int *v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  int *v14; // [rsp+80h] [rbp-80h]
  __int64 v15; // [rsp+88h] [rbp-78h]
  int *v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  int *v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  int *v20; // [rsp+B0h] [rbp-50h]
  __int64 v21; // [rsp+B8h] [rbp-48h]
  int *v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  int *v26; // [rsp+E0h] [rbp-20h]
  __int64 v27; // [rsp+E8h] [rbp-18h]
  int *v28; // [rsp+F0h] [rbp-10h]
  __int64 v29; // [rsp+F8h] [rbp-8h]
  unsigned __int16 *v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  int *v32; // [rsp+110h] [rbp+10h]
  int v33; // [rsp+118h] [rbp+18h]
  int v34; // [rsp+11Ch] [rbp+1Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000004uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000004uLL) )
    {
      v11 = v4;
      v10 = &unk_1C00541E4;
      v13 = v4;
      v12 = v3 + 10;
      v14 = v3 + 8;
      v6 = *v3;
      v16 = &v6;
      v18 = v3 + 11;
      v20 = v3 + 13;
      v7 = v3[12];
      v22 = &v7;
      v24 = v3 + 14;
      v26 = v3 + 16;
      v8 = v3[15];
      v28 = &v8;
      v5 = *((_WORD *)v3 + 2);
      v33 = v5;
      v15 = 8LL;
      v17 = v4;
      v19 = v4;
      v21 = 1LL;
      v23 = v4;
      v25 = v4;
      v27 = 8LL;
      v29 = v4;
      v30 = &v5;
      v31 = 2LL;
      v32 = v3;
      v34 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C00504A7, 0LL, v2, 0xEu, &pData);
    }
  }
}
