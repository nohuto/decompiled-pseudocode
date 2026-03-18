/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0037A10
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C001038C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START_DONE_EX2(struct _DXGK_DIAG_HEADER *a1)
{
  ULONGLONG v1; // r11
  const WCHAR *v2; // r10
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  unsigned int v7; // ecx
  __int64 v8; // r10
  int v9; // edx
  LPCGUID v10; // r9
  __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+54h] [rbp-ACh] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  void *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  int *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  int *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  int *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int *v34; // [rsp+D0h] [rbp-30h]
  __int64 v35; // [rsp+D8h] [rbp-28h]
  int *v36; // [rsp+E0h] [rbp-20h]
  __int64 v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  int *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+130h] [rbp+30h] BYREF
  __int64 v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  __int64 v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  __int64 v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  __int64 v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+180h] [rbp+80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+190h] [rbp+90h] BYREF
  __int64 v56; // [rsp+1A0h] [rbp+A0h]
  __int64 v57; // [rsp+1A8h] [rbp+A8h]
  __int64 v58; // [rsp+1B0h] [rbp+B0h]
  __int64 v59; // [rsp+1B8h] [rbp+B8h]
  __int64 v60; // [rsp+1C0h] [rbp+C0h]
  __int64 v61; // [rsp+1C8h] [rbp+C8h]
  __int64 v62; // [rsp+1D0h] [rbp+D0h]
  __int64 v63; // [rsp+1D8h] [rbp+D8h]
  int *v64; // [rsp+1E0h] [rbp+E0h]
  __int64 v65; // [rsp+1E8h] [rbp+E8h]
  int *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  int *v68; // [rsp+200h] [rbp+100h]
  __int64 v69; // [rsp+208h] [rbp+108h]
  int *v70; // [rsp+210h] [rbp+110h]
  __int64 v71; // [rsp+218h] [rbp+118h]
  int *v72; // [rsp+220h] [rbp+120h]
  __int64 v73; // [rsp+228h] [rbp+128h]
  int *v74; // [rsp+230h] [rbp+130h]
  __int64 v75; // [rsp+238h] [rbp+138h]
  int *v76; // [rsp+240h] [rbp+140h]
  __int64 v77; // [rsp+248h] [rbp+148h]
  __int64 v78; // [rsp+250h] [rbp+150h]
  __int64 v79; // [rsp+258h] [rbp+158h]
  __int64 v80; // [rsp+260h] [rbp+160h]
  __int64 v81; // [rsp+268h] [rbp+168h]
  __int64 v82; // [rsp+270h] [rbp+170h]
  __int64 v83; // [rsp+278h] [rbp+178h]
  int *v84; // [rsp+280h] [rbp+180h]
  __int64 v85; // [rsp+288h] [rbp+188h]
  __int64 v86; // [rsp+290h] [rbp+190h]
  __int64 v87; // [rsp+298h] [rbp+198h]
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int16 *v89; // [rsp+2B0h] [rbp+1B0h]
  __int64 v90; // [rsp+2B8h] [rbp+1B8h]
  __int64 v91; // [rsp+2C0h] [rbp+1C0h]
  int v92; // [rsp+2C8h] [rbp+1C8h]
  int v93; // [rsp+2CCh] [rbp+1CCh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000400uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, v1) )
    {
      v25 = 4LL;
      v24 = &unk_1C00541E4;
      v27 = 4LL;
      v26 = (int *)(v2 + 20);
      v29 = 8LL;
      v28 = (int *)(v2 + 16);
      v12 = *(_DWORD *)v2;
      v30 = &v12;
      v32 = (int *)(v2 + 22);
      v34 = (int *)(v2 + 438);
      v36 = (int *)(v2 + 402);
      v13 = *((_DWORD *)v2 + 23);
      v38 = &v13;
      v14 = *((_DWORD *)v2 + 22);
      v40 = &v14;
      v42 = (int *)(v2 + 440);
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 16LL;
      TlgCreateWsz(&pDesc, v2 + 128);
      TlgCreateWsz(&v45, (LPCWSTR)(v3 + 96));
      v47 = 4LL;
      v48 = v4 + 772;
      v46 = v4 + 784;
      v50 = v4 + 776;
      v49 = 4LL;
      v52 = v4 + 780;
      v51 = 4LL;
      v53 = 4LL;
      TlgCreateWsz(&v54, (LPCWSTR)(v4 + 124));
      TlgCreateWsz(&v55, (LPCWSTR)(v5 + 190));
      v57 = 4LL;
      v58 = v6 + 788;
      v56 = v6 + 800;
      v7 = *(_DWORD *)(v6 + 72);
      v60 = v6 + 792;
      v62 = v6 + 796;
      v59 = 4LL;
      v15 = (v7 >> 4) & 1;
      v64 = &v15;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 4LL;
      v69 = 4LL;
      v16 = (v7 >> 1) & 1;
      v66 = &v16;
      v71 = 4LL;
      v17 = (v7 >> 6) & 1;
      v68 = &v17;
      v73 = 4LL;
      v18 = (v7 >> 3) & 1;
      v70 = &v18;
      v75 = 4LL;
      v19 = (v7 >> 2) & 1;
      v72 = &v19;
      v21 = v7 & 1;
      v20 = (v7 >> 5) & 1;
      v77 = 4LL;
      v74 = &v20;
      v79 = 8LL;
      v76 = &v21;
      v78 = v6 + 48;
      v80 = v6 + 56;
      v82 = v6 + 64;
      v22 = *(_DWORD *)(v6 + 80);
      v84 = &v22;
      v86 = v6 + 84;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 4LL;
      v87 = 4LL;
      TlgCreateWsz(&v88, (LPCWSTR)(v6 + 808));
      v9 = *(unsigned __int16 *)(v8 + 4);
      v89 = &v11;
      v11 = v9;
      v90 = 2LL;
      v91 = v8;
      v92 = v9;
      v93 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004DD98, 0LL, v10, 0x27u, &pData);
    }
  }
}
