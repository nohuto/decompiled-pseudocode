/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CAA0C
 * Callers:
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CADD0 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00CAE7C (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C0105170 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(KeyboardInputTelemetry *this)
{
  LPCGUID v1; // r8
  LPCGUID v2; // r9
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  int v10; // [rsp+4Ch] [rbp-B4h] BYREF
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  int v17; // [rsp+68h] [rbp-98h] BYREF
  int v18; // [rsp+6Ch] [rbp-94h] BYREF
  int v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+74h] [rbp-8Ch] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  int v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+84h] [rbp-7Ch] BYREF
  int v25; // [rsp+88h] [rbp-78h] BYREF
  int v26; // [rsp+8Ch] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  int *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  int *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  int *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  int *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  int *v55; // [rsp+190h] [rbp+90h]
  __int64 v56; // [rsp+198h] [rbp+98h]
  int *v57; // [rsp+1A0h] [rbp+A0h]
  __int64 v58; // [rsp+1A8h] [rbp+A8h]
  int *v59; // [rsp+1B0h] [rbp+B0h]
  __int64 v60; // [rsp+1B8h] [rbp+B8h]
  int *v61; // [rsp+1C0h] [rbp+C0h]
  __int64 v62; // [rsp+1C8h] [rbp+C8h]
  int *v63; // [rsp+1D0h] [rbp+D0h]
  __int64 v64; // [rsp+1D8h] [rbp+D8h]
  int *v65; // [rsp+1E0h] [rbp+E0h]
  __int64 v66; // [rsp+1E8h] [rbp+E8h]
  int *v67; // [rsp+1F0h] [rbp+F0h]
  __int64 v68; // [rsp+1F8h] [rbp+F8h]
  int *v69; // [rsp+200h] [rbp+100h]
  __int64 v70; // [rsp+208h] [rbp+108h]
  int *v71; // [rsp+210h] [rbp+110h]
  __int64 v72; // [rsp+218h] [rbp+118h]
  int *v73; // [rsp+220h] [rbp+120h]
  __int64 v74; // [rsp+228h] [rbp+128h]
  int *v75; // [rsp+230h] [rbp+130h]
  __int64 v76; // [rsp+238h] [rbp+138h]

  if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x400000000000uLL) )
  {
    TlgCreateWsz(&pDesc, &pwsz);
    v29 = &v3;
    v4 = dword_1C032EE6C;
    v31 = &v4;
    v5 = dword_1C032EE70;
    v33 = &v5;
    v6 = dword_1C032EE74;
    v35 = &v6;
    v7 = dword_1C032EE78;
    v37 = &v7;
    v8 = dword_1C032EE7C;
    v39 = &v8;
    v9 = dword_1C032EE80;
    v41 = &v9;
    v10 = dword_1C032EE84;
    v43 = &v10;
    v11 = dword_1C032EE88;
    v45 = &v11;
    v12 = dword_1C032EE8C;
    v47 = &v12;
    v13 = dword_1C032EE90;
    v49 = &v13;
    v14 = dword_1C032EE94;
    v51 = &v14;
    v15 = dword_1C032EE38;
    v53 = &v15;
    v16 = dword_1C032EE3C;
    v55 = &v16;
    v17 = dword_1C032EE40;
    v57 = &v17;
    v18 = dword_1C032EE44;
    v3 = dword_1C032EE68;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v59 = &v18;
    v19 = dword_1C032EE48;
    v61 = &v19;
    v20 = dword_1C032EE4C;
    v63 = &v20;
    v21 = dword_1C032EE50;
    v65 = &v21;
    v22 = dword_1C032EE54;
    v67 = &v22;
    v23 = dword_1C032EE58;
    v69 = &v23;
    v24 = dword_1C032EE5C;
    v71 = &v24;
    v25 = dword_1C032EE60;
    v73 = &v25;
    v26 = dword_1C032EE64;
    v75 = &v26;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 4LL;
    v70 = 4LL;
    v72 = 4LL;
    v74 = 4LL;
    v76 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EBDF5, v1, v2, 0x1Bu, &pData);
  }
  memset(&dword_1C032EE38, 0, 0x60uLL);
  gKeyboardInputTelemetry = 0LL;
}
