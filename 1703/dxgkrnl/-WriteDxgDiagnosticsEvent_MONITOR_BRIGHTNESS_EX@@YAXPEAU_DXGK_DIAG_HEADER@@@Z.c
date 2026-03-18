/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000366C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MONITOR_BRIGHTNESS_EX(struct _DXGK_DIAG_HEADER *a1)
{
  unsigned int v1; // r11d
  const GUID *v2; // r9
  int *v3; // r10
  __int64 v4; // r11
  unsigned int v5; // ecx
  unsigned __int16 v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void *v13; // [rsp+70h] [rbp-90h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  int *v15; // [rsp+80h] [rbp-80h]
  __int64 v16; // [rsp+88h] [rbp-78h]
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  int *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  int *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  int *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  int *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  int *v43; // [rsp+160h] [rbp+60h]
  __int64 v44; // [rsp+168h] [rbp+68h]
  int *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  unsigned __int16 *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  int *v49; // [rsp+190h] [rbp+90h]
  int v50; // [rsp+198h] [rbp+98h]
  int v51; // [rsp+19Ch] [rbp+9Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000020uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000020uLL) )
    {
      v5 = v3[21];
      v13 = &unk_1C00541E4;
      v14 = v4;
      v15 = v3 + 10;
      v17 = v3 + 8;
      v7 = *v3;
      v19 = &v7;
      v21 = v3 + 11;
      v23 = v3 + 12;
      v25 = v3 + 14;
      v27 = v3 + 15;
      v29 = v3 + 16;
      v31 = v3 + 17;
      v33 = v3 + 18;
      v35 = v3 + 19;
      v37 = v3 + 20;
      v16 = v4;
      v8 = (v5 >> 1) & 1;
      v39 = &v8;
      v18 = 8LL;
      v9 = (v5 >> 2) & 1;
      v41 = &v9;
      v20 = v4;
      v10 = (v5 >> 3) & 1;
      v22 = v4;
      v43 = &v10;
      v45 = &v11;
      v6 = *((_WORD *)v3 + 2);
      v50 = v6;
      v24 = 8LL;
      v26 = v4;
      v28 = v4;
      v30 = v4;
      v32 = v4;
      v34 = v4;
      v36 = v4;
      v38 = v4;
      v40 = v4;
      v42 = v4;
      v44 = v4;
      v11 = v5 & 1;
      v46 = v4;
      v47 = &v6;
      v48 = 2LL;
      v49 = v3;
      v51 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004E7D7, 0LL, v2, 0x15u, &pData);
    }
  }
}
