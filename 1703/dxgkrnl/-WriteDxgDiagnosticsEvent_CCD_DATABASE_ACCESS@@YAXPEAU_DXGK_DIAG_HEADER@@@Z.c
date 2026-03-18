/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002DFC
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CCD_DATABASE_ACCESS(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  const GUID *v2; // r9
  int *v3; // r10
  int v4; // r11d
  unsigned __int16 Data1; // cx
  const GUID *v6; // r9
  int *v7; // r10
  int v8; // r11d
  unsigned __int16 v9; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v10; // [rsp+3Ah] [rbp-CEh] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  void *v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  const GUID *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  int *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  int *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  __int64 *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  int *v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  int *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  int *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  int *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  int *v54; // [rsp+188h] [rbp+80h]
  __int64 v55; // [rsp+190h] [rbp+88h]
  int *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  int *v58; // [rsp+1A8h] [rbp+A0h]
  __int64 v59; // [rsp+1B0h] [rbp+A8h]
  int *v60; // [rsp+1B8h] [rbp+B0h]
  __int64 v61; // [rsp+1C0h] [rbp+B8h]
  int *v62; // [rsp+1C8h] [rbp+C0h]
  __int64 v63; // [rsp+1D0h] [rbp+C8h]
  int *v64; // [rsp+1D8h] [rbp+D0h]
  __int64 v65; // [rsp+1E0h] [rbp+D8h]
  int *v66; // [rsp+1E8h] [rbp+E0h]
  __int64 v67; // [rsp+1F0h] [rbp+E8h]
  int *v68; // [rsp+1F8h] [rbp+F0h]
  __int64 v69; // [rsp+200h] [rbp+F8h]
  int *v70; // [rsp+208h] [rbp+100h]
  __int64 v71; // [rsp+210h] [rbp+108h]
  int *v72; // [rsp+218h] [rbp+110h]
  __int64 v73; // [rsp+220h] [rbp+118h]
  int *v74; // [rsp+228h] [rbp+120h]
  __int64 v75; // [rsp+230h] [rbp+128h]
  int *v76; // [rsp+238h] [rbp+130h]
  __int64 v77; // [rsp+240h] [rbp+138h]
  int *v78; // [rsp+248h] [rbp+140h]
  __int64 v79; // [rsp+250h] [rbp+148h]
  int *v80; // [rsp+258h] [rbp+150h]
  __int64 v81; // [rsp+260h] [rbp+158h]
  int *v82; // [rsp+268h] [rbp+160h]
  __int64 v83; // [rsp+270h] [rbp+168h]
  int *v84; // [rsp+278h] [rbp+170h]
  __int64 v85; // [rsp+280h] [rbp+178h]
  int *v86; // [rsp+288h] [rbp+180h]
  __int64 v87; // [rsp+290h] [rbp+188h]
  int *v88; // [rsp+298h] [rbp+190h]
  __int64 v89; // [rsp+2A0h] [rbp+198h]
  int *v90; // [rsp+2A8h] [rbp+1A0h]
  __int64 v91; // [rsp+2B0h] [rbp+1A8h]
  int *v92; // [rsp+2B8h] [rbp+1B0h]
  __int64 v93; // [rsp+2C0h] [rbp+1B8h]
  int *v94; // [rsp+2C8h] [rbp+1C0h]
  __int64 v95; // [rsp+2D0h] [rbp+1C8h]
  int *v96; // [rsp+2D8h] [rbp+1D0h]
  __int64 v97; // [rsp+2E0h] [rbp+1D8h]
  int *v98; // [rsp+2E8h] [rbp+1E0h]
  __int64 v99; // [rsp+2F0h] [rbp+1E8h]
  int *v100; // [rsp+2F8h] [rbp+1F0h]
  __int64 v101; // [rsp+300h] [rbp+1F8h]
  int *v102; // [rsp+308h] [rbp+200h]
  __int64 v103; // [rsp+310h] [rbp+208h]
  __int16 *v104; // [rsp+318h] [rbp+210h]
  __int64 v105; // [rsp+320h] [rbp+218h]
  int *v106; // [rsp+328h] [rbp+220h]
  int v107; // [rsp+330h] [rbp+228h]
  int v108; // [rsp+334h] [rbp+22Ch]
  unsigned __int16 *v109; // [rsp+338h] [rbp+230h]
  __int64 v110; // [rsp+340h] [rbp+238h]
  int *v111; // [rsp+348h] [rbp+240h]
  int v112; // [rsp+350h] [rbp+248h]
  int v113; // [rsp+354h] [rbp+24Ch]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+368h] [rbp+260h] BYREF
  void *v115; // [rsp+388h] [rbp+280h]
  __int64 v116; // [rsp+390h] [rbp+288h]
  int *v117; // [rsp+398h] [rbp+290h]
  __int64 v118; // [rsp+3A0h] [rbp+298h]
  int *v119; // [rsp+3A8h] [rbp+2A0h]
  __int64 v120; // [rsp+3B0h] [rbp+2A8h]
  int *v121; // [rsp+3B8h] [rbp+2B0h]
  __int64 v122; // [rsp+3C0h] [rbp+2B8h]
  int *v123; // [rsp+3C8h] [rbp+2C0h]
  __int64 v124; // [rsp+3D0h] [rbp+2C8h]
  int *v125; // [rsp+3D8h] [rbp+2D0h]
  __int64 v126; // [rsp+3E0h] [rbp+2D8h]
  int *v127; // [rsp+3E8h] [rbp+2E0h]
  __int64 v128; // [rsp+3F0h] [rbp+2E8h]
  const GUID *v129; // [rsp+3F8h] [rbp+2F0h]
  __int64 v130; // [rsp+400h] [rbp+2F8h]
  int *v131; // [rsp+408h] [rbp+300h]
  __int64 v132; // [rsp+410h] [rbp+308h]
  int *v133; // [rsp+418h] [rbp+310h]
  __int64 v134; // [rsp+420h] [rbp+318h]
  unsigned __int16 *v135; // [rsp+428h] [rbp+320h]
  __int64 v136; // [rsp+430h] [rbp+328h]
  int *v137; // [rsp+438h] [rbp+330h]
  int v138; // [rsp+440h] [rbp+338h]
  int v139; // [rsp+444h] [rbp+33Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000040uLL) )
  {
    if ( *(_DWORD *)(v1 + 60) )
    {
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000040uLL) )
        {
          v25 = 4LL;
          v24 = &unk_1C00541E4;
          v27 = 4LL;
          v26 = v3 + 10;
          v28 = v3 + 8;
          v12 = *v3;
          v30 = &v12;
          v32 = v3 + 11;
          v34 = v3 + 14;
          v36 = v3 + 16;
          v40 = v3 + 12;
          v42 = v3 + 13;
          v22 = *((_QWORD *)v3 + 11);
          v44 = &v22;
          v46 = v3 + 20;
          v13 = v3[51];
          v50 = &v13;
          v14 = v3[52];
          v52 = &v14;
          v15 = v3[48];
          v54 = &v15;
          v16 = v3[50];
          v56 = &v16;
          v17 = v3[49];
          v58 = &v17;
          v18 = v3[46];
          v60 = &v18;
          v19 = v3[45];
          v62 = &v19;
          v20 = v3[47];
          v64 = &v20;
          v29 = 8LL;
          v31 = 4LL;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v38 = v2;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 8LL;
          v47 = 8LL;
          v48 = v3 + 18;
          v49 = 8LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          Data1 = v2->Data1;
          v66 = v3 + 40;
          v68 = v3 + 41;
          v21 = v3[44];
          v70 = &v21;
          v72 = v3 + 42;
          v74 = v3 + 43;
          v76 = v3 + 30;
          v78 = v3 + 31;
          v80 = v3 + 35;
          v82 = v3 + 34;
          v84 = v3 + 26;
          v86 = v3 + 37;
          v88 = v3 + 28;
          v90 = v3 + 29;
          v92 = v3 + 36;
          v94 = v3 + 33;
          v96 = v3 + 32;
          v11 = v3[38];
          v98 = &v11;
          v100 = v3 + 24;
          v102 = v3 + 25;
          Data1 *= 144;
          v104 = (__int16 *)&v10;
          v106 = v3 + 18;
          v65 = 4LL;
          v67 = 4LL;
          v107 = Data1;
          v9 = *((_WORD *)v3 + 2);
          v112 = v9;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 8LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v93 = 4LL;
          v95 = 4LL;
          v97 = 4LL;
          v99 = 4LL;
          v101 = 4LL;
          v103 = 4LL;
          v10 = Data1;
          v105 = 2LL;
          v108 = v4;
          v109 = &v9;
          v110 = 2LL;
          v111 = v3;
          v113 = v4;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004E326, 0LL, v2, 0x2Eu, &pData);
        }
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000040uLL) )
    {
      v116 = 4LL;
      v115 = &unk_1C00541E4;
      v118 = 4LL;
      v117 = v7 + 10;
      v119 = v7 + 8;
      v11 = *v7;
      v121 = &v11;
      v123 = v7 + 11;
      v125 = v7 + 14;
      v127 = v7 + 16;
      v131 = v7 + 12;
      v133 = v7 + 13;
      v9 = *((_WORD *)v7 + 2);
      v138 = v9;
      v120 = 8LL;
      v122 = 4LL;
      v124 = 4LL;
      v126 = 4LL;
      v128 = 4LL;
      v129 = v6;
      v130 = 4LL;
      v132 = 4LL;
      v134 = 4LL;
      v135 = &v9;
      v136 = 2LL;
      v137 = v7;
      v139 = v8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004E281, 0LL, v6, 0xEu, &v114);
    }
  }
}
