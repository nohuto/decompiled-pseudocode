/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037DE0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const GUID *v2; // r9
  int *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  int *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  int *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  int *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  int *v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+108h] [rbp+8h]
  unsigned __int16 *v31; // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  int *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  int v35; // [rsp+12Ch] [rbp+2Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000020uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000020uLL) )
    {
      v12 = v4;
      v11 = &unk_1C00541E4;
      v14 = v4;
      v13 = v3 + 10;
      v15 = v3 + 8;
      v6 = *v3;
      v17 = &v6;
      v19 = v3 + 11;
      v7 = v3[14];
      v21 = &v7;
      v23 = v3 + 12;
      v8 = v3[16];
      v25 = &v8;
      v27 = v3 + 17;
      v9 = v3[15];
      v29 = &v9;
      v5 = *((_WORD *)v3 + 2);
      v34 = v5;
      v16 = 8LL;
      v18 = v4;
      v20 = v4;
      v22 = v4;
      v24 = 8LL;
      v26 = v4;
      v28 = v4;
      v30 = v4;
      v31 = &v5;
      v32 = 2LL;
      v33 = v3;
      v35 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004E955, 0LL, v2, 0xEu, &pData);
    }
  }
}
