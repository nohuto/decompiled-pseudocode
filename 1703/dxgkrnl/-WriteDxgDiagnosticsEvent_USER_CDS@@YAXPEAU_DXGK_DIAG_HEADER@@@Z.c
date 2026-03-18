/*
 * XREFs of ?WriteDxgDiagnosticsEvent_USER_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00034A0
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C001038C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_USER_CDS(struct _DXGK_DIAG_HEADER *a1)
{
  const WCHAR *v1; // r10
  unsigned int v2; // ecx
  __int64 v3; // r10
  int v4; // ecx
  int v5; // eax
  int v6; // r11d
  LPCGUID v7; // r9
  unsigned __int16 v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  int v19; // [rsp+5Ch] [rbp-A4h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+64h] [rbp-9Ch] BYREF
  int v22; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+6Ch] [rbp-94h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  void *v28; // [rsp+A0h] [rbp-60h]
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
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int *v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp+40h] BYREF
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  __int64 v64; // [rsp+1C8h] [rbp+C8h]
  int *v65; // [rsp+1D0h] [rbp+D0h]
  __int64 v66; // [rsp+1D8h] [rbp+D8h]
  int *v67; // [rsp+1E0h] [rbp+E0h]
  __int64 v68; // [rsp+1E8h] [rbp+E8h]
  int *v69; // [rsp+1F0h] [rbp+F0h]
  __int64 v70; // [rsp+1F8h] [rbp+F8h]
  int *v71; // [rsp+200h] [rbp+100h]
  __int64 v72; // [rsp+208h] [rbp+108h]
  int *v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  unsigned __int16 *v75; // [rsp+220h] [rbp+120h]
  __int64 v76; // [rsp+228h] [rbp+128h]
  __int64 v77; // [rsp+230h] [rbp+130h]
  int v78; // [rsp+238h] [rbp+138h]
  int v79; // [rsp+23Ch] [rbp+13Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000008uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000008uLL) )
    {
      v2 = *((_DWORD *)v1 + 35);
      v28 = &unk_1C00541E4;
      v29 = 4LL;
      v30 = (int *)(v1 + 20);
      v32 = (int *)(v1 + 16);
      v9 = *(_DWORD *)v1;
      v34 = &v9;
      v36 = (int *)(v1 + 22);
      v38 = (int *)(v1 + 28);
      v31 = 4LL;
      v10 = (v2 >> 1) & 1;
      v40 = &v10;
      v33 = 8LL;
      v11 = v2 & 1;
      v42 = &v11;
      v12 = (v2 >> 3) & 1;
      v13 = (v2 >> 2) & 1;
      v44 = &v12;
      v35 = 4LL;
      v46 = &v13;
      v37 = 4LL;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      TlgCreateWsz(&pDesc, v1 + 54);
      v4 = *(_DWORD *)(v3 + 48);
      v49 = &v14;
      v15 = *(_DWORD *)(v3 + 52);
      v51 = &v15;
      v16 = *(_DWORD *)(v3 + 76);
      v53 = &v16;
      v17 = *(_DWORD *)(v3 + 100);
      v55 = &v17;
      v18 = *(_DWORD *)(v3 + 104);
      v57 = &v18;
      v19 = *(_DWORD *)(v3 + 88);
      v59 = &v19;
      v5 = *(_DWORD *)(v3 + 96);
      v14 = v4;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v20 = v5;
      v62 = 4LL;
      v61 = &v20;
      v21 = *(_DWORD *)(v3 + 92);
      v63 = &v21;
      v22 = *(_DWORD *)(v3 + 64);
      v65 = &v22;
      v23 = *(_DWORD *)(v3 + 84);
      v67 = &v23;
      v24 = *(_DWORD *)(v3 + 80);
      v69 = &v24;
      v25 = *(_DWORD *)(v3 + 68);
      v71 = &v25;
      v26 = *(_DWORD *)(v3 + 72);
      v73 = &v26;
      v8 = *(_WORD *)(v3 + 4);
      v78 = v8;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 4LL;
      v75 = &v8;
      v76 = 2LL;
      v77 = v3;
      v79 = v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0050295, 0LL, v7, 0x1Cu, &pData);
    }
  }
}
