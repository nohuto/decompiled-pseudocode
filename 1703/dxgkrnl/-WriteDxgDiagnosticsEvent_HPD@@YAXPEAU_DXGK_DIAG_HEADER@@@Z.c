/*
 * XREFs of ?WriteDxgDiagnosticsEvent_HPD@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003170
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_HPD(struct _DXGK_DIAG_HEADER *a1)
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
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  void *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  int *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  int *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  int *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  int *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  int *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  int *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  int *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  int *v46; // [rsp+170h] [rbp+70h]
  __int64 v47; // [rsp+178h] [rbp+78h]
  int *v48; // [rsp+180h] [rbp+80h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  unsigned __int16 *v50; // [rsp+190h] [rbp+90h]
  __int64 v51; // [rsp+198h] [rbp+98h]
  int *v52; // [rsp+1A0h] [rbp+A0h]
  int v53; // [rsp+1A8h] [rbp+A8h]
  int v54; // [rsp+1ACh] [rbp+ACh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000002uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000002uLL) )
    {
      v5 = v3[12];
      v14 = &unk_1C00541E4;
      v15 = v4;
      v16 = v3 + 10;
      v18 = v3 + 8;
      v7 = *v3;
      v20 = &v7;
      v22 = v3 + 11;
      v12 = *((_QWORD *)v3 + 8);
      v24 = &v12;
      v26 = v3 + 19;
      v17 = v4;
      v8 = (v5 >> 1) & 1;
      v28 = &v8;
      v19 = 8LL;
      v9 = v5 & 1;
      v30 = &v9;
      v10 = (v5 >> 3) & 1;
      v21 = v4;
      v32 = &v10;
      v34 = &v11;
      v36 = v3 + 13;
      v38 = v3 + 22;
      v40 = v3 + 23;
      v42 = v3 + 21;
      v44 = v3 + 14;
      v46 = v3 + 20;
      v48 = v3 + 18;
      v6 = *((_WORD *)v3 + 2);
      v53 = v6;
      v23 = v4;
      v25 = 8LL;
      v27 = v4;
      v29 = v4;
      v31 = v4;
      v33 = v4;
      v11 = (v5 >> 2) & 1;
      v35 = v4;
      v37 = v4;
      v39 = v4;
      v41 = v4;
      v43 = v4;
      v45 = 8LL;
      v47 = v4;
      v49 = v4;
      v50 = &v6;
      v51 = 2LL;
      v52 = v3;
      v54 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0050565, 0LL, v2, 0x16u, &pData);
    }
  }
}
