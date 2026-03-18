/*
 * XREFs of ?WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0036A5C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_COMMIT_VIDPN_FAILED(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  const GUID *v2; // r9
  int *v3; // r10
  int v4; // r11d
  unsigned int v5; // ecx
  int v6; // eax
  const GUID *v7; // r9
  int *v8; // r10
  int v9; // r11d
  unsigned int v10; // ecx
  unsigned __int16 v11; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v12; // [rsp+3Ah] [rbp-CEh] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  int v24; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+74h] [rbp-94h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  void *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  int *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  int *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  int *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  const GUID *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  int *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  __int64 *v52; // [rsp+158h] [rbp+50h]
  __int64 v53; // [rsp+160h] [rbp+58h]
  int *v54; // [rsp+168h] [rbp+60h]
  __int64 v55; // [rsp+170h] [rbp+68h]
  int *v56; // [rsp+178h] [rbp+70h]
  __int64 v57; // [rsp+180h] [rbp+78h]
  int *v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int *v60; // [rsp+198h] [rbp+90h]
  __int64 v61; // [rsp+1A0h] [rbp+98h]
  int *v62; // [rsp+1A8h] [rbp+A0h]
  __int64 v63; // [rsp+1B0h] [rbp+A8h]
  int *v64; // [rsp+1B8h] [rbp+B0h]
  __int64 v65; // [rsp+1C0h] [rbp+B8h]
  int *v66; // [rsp+1C8h] [rbp+C0h]
  __int64 v67; // [rsp+1D0h] [rbp+C8h]
  int *v68; // [rsp+1D8h] [rbp+D0h]
  __int64 v69; // [rsp+1E0h] [rbp+D8h]
  int *v70; // [rsp+1E8h] [rbp+E0h]
  __int64 v71; // [rsp+1F0h] [rbp+E8h]
  int *v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  int *v74; // [rsp+208h] [rbp+100h]
  __int64 v75; // [rsp+210h] [rbp+108h]
  int *v76; // [rsp+218h] [rbp+110h]
  __int64 v77; // [rsp+220h] [rbp+118h]
  int *v78; // [rsp+228h] [rbp+120h]
  __int64 v79; // [rsp+230h] [rbp+128h]
  int *v80; // [rsp+238h] [rbp+130h]
  __int64 v81; // [rsp+240h] [rbp+138h]
  int *v82; // [rsp+248h] [rbp+140h]
  __int64 v83; // [rsp+250h] [rbp+148h]
  int *v84; // [rsp+258h] [rbp+150h]
  __int64 v85; // [rsp+260h] [rbp+158h]
  int *v86; // [rsp+268h] [rbp+160h]
  __int64 v87; // [rsp+270h] [rbp+168h]
  int *v88; // [rsp+278h] [rbp+170h]
  __int64 v89; // [rsp+280h] [rbp+178h]
  int *v90; // [rsp+288h] [rbp+180h]
  __int64 v91; // [rsp+290h] [rbp+188h]
  int *v92; // [rsp+298h] [rbp+190h]
  __int64 v93; // [rsp+2A0h] [rbp+198h]
  int *v94; // [rsp+2A8h] [rbp+1A0h]
  __int64 v95; // [rsp+2B0h] [rbp+1A8h]
  int *v96; // [rsp+2B8h] [rbp+1B0h]
  __int64 v97; // [rsp+2C0h] [rbp+1B8h]
  int *v98; // [rsp+2C8h] [rbp+1C0h]
  __int64 v99; // [rsp+2D0h] [rbp+1C8h]
  int *v100; // [rsp+2D8h] [rbp+1D0h]
  __int64 v101; // [rsp+2E0h] [rbp+1D8h]
  int *v102; // [rsp+2E8h] [rbp+1E0h]
  __int64 v103; // [rsp+2F0h] [rbp+1E8h]
  int *v104; // [rsp+2F8h] [rbp+1F0h]
  __int64 v105; // [rsp+300h] [rbp+1F8h]
  int *v106; // [rsp+308h] [rbp+200h]
  __int64 v107; // [rsp+310h] [rbp+208h]
  int *v108; // [rsp+318h] [rbp+210h]
  __int64 v109; // [rsp+320h] [rbp+218h]
  int *v110; // [rsp+328h] [rbp+220h]
  __int64 v111; // [rsp+330h] [rbp+228h]
  __int16 *v112; // [rsp+338h] [rbp+230h]
  __int64 v113; // [rsp+340h] [rbp+238h]
  int *v114; // [rsp+348h] [rbp+240h]
  int v115; // [rsp+350h] [rbp+248h]
  int v116; // [rsp+354h] [rbp+24Ch]
  unsigned __int16 *v117; // [rsp+358h] [rbp+250h]
  __int64 v118; // [rsp+360h] [rbp+258h]
  int *v119; // [rsp+368h] [rbp+260h]
  int v120; // [rsp+370h] [rbp+268h]
  int v121; // [rsp+374h] [rbp+26Ch]
  EVENT_DATA_DESCRIPTOR v122; // [rsp+388h] [rbp+280h] BYREF
  void *v123; // [rsp+3A8h] [rbp+2A0h]
  __int64 v124; // [rsp+3B0h] [rbp+2A8h]
  int *v125; // [rsp+3B8h] [rbp+2B0h]
  __int64 v126; // [rsp+3C0h] [rbp+2B8h]
  int *v127; // [rsp+3C8h] [rbp+2C0h]
  __int64 v128; // [rsp+3D0h] [rbp+2C8h]
  int *v129; // [rsp+3D8h] [rbp+2D0h]
  __int64 v130; // [rsp+3E0h] [rbp+2D8h]
  int *v131; // [rsp+3E8h] [rbp+2E0h]
  __int64 v132; // [rsp+3F0h] [rbp+2E8h]
  int *v133; // [rsp+3F8h] [rbp+2F0h]
  __int64 v134; // [rsp+400h] [rbp+2F8h]
  int *v135; // [rsp+408h] [rbp+300h]
  __int64 v136; // [rsp+410h] [rbp+308h]
  int *v137; // [rsp+418h] [rbp+310h]
  __int64 v138; // [rsp+420h] [rbp+318h]
  const GUID *v139; // [rsp+428h] [rbp+320h]
  __int64 v140; // [rsp+430h] [rbp+328h]
  int *v141; // [rsp+438h] [rbp+330h]
  __int64 v142; // [rsp+440h] [rbp+338h]
  int *v143; // [rsp+448h] [rbp+340h]
  __int64 v144; // [rsp+450h] [rbp+348h]
  unsigned __int16 *v145; // [rsp+458h] [rbp+350h]
  __int64 v146; // [rsp+460h] [rbp+358h]
  int *v147; // [rsp+468h] [rbp+360h]
  int v148; // [rsp+470h] [rbp+368h]
  int v149; // [rsp+474h] [rbp+36Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000100uLL) )
  {
    if ( *(_DWORD *)(v1 + 68) )
    {
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000100uLL) )
        {
          v5 = v3[15];
          v30 = &unk_1C00541E4;
          v31 = 4LL;
          v32 = v3 + 10;
          v34 = v3 + 8;
          v18 = *v3;
          v36 = &v18;
          v38 = v3 + 11;
          v40 = v3 + 13;
          v19 = v3[16];
          v42 = &v19;
          v20 = v3[14];
          v44 = &v20;
          v33 = 4LL;
          v21 = (v5 >> 1) & 1;
          v35 = 8LL;
          v48 = &v21;
          v50 = &v22;
          v28 = *((_QWORD *)v3 + 11);
          v52 = &v28;
          v54 = v3 + 20;
          v23 = v3[51];
          v58 = &v23;
          v24 = v3[52];
          v60 = &v24;
          v25 = v3[48];
          v62 = &v25;
          v26 = v3[50];
          v64 = &v26;
          v27 = v3[49];
          v66 = &v27;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v46 = v2;
          v47 = 4LL;
          v49 = 4LL;
          v22 = v5 & 1;
          v51 = 4LL;
          v53 = 8LL;
          v55 = 8LL;
          v56 = v3 + 18;
          v57 = 8LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          LOWORD(v5) = v2->Data1;
          v13 = v3[46];
          v68 = &v13;
          v14 = v3[45];
          v70 = &v14;
          v15 = v3[47];
          v72 = &v15;
          v74 = v3 + 40;
          v76 = v3 + 41;
          v16 = v3[44];
          v78 = &v16;
          v80 = v3 + 42;
          v82 = v3 + 43;
          v84 = v3 + 30;
          v86 = v3 + 31;
          v88 = v3 + 35;
          v90 = v3 + 34;
          v92 = v3 + 26;
          v94 = v3 + 37;
          v96 = v3 + 28;
          v98 = v3 + 29;
          v100 = v3 + 36;
          v102 = v3 + 33;
          v104 = v3 + 32;
          v17 = v3[38];
          v106 = &v17;
          v108 = v3 + 24;
          v110 = v3 + 25;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v12 = 144 * v5;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          v83 = 4LL;
          v85 = 4LL;
          v87 = 4LL;
          v89 = 4LL;
          v91 = 4LL;
          v93 = 8LL;
          v95 = 4LL;
          v97 = 4LL;
          v99 = 4LL;
          v101 = 4LL;
          v103 = 4LL;
          v105 = 4LL;
          v107 = 4LL;
          v109 = 4LL;
          v111 = 4LL;
          v112 = &v12;
          v115 = (unsigned __int16)(144 * v5);
          v6 = *((unsigned __int16 *)v3 + 2);
          v114 = v3 + 18;
          v11 = v6;
          v120 = v6;
          v113 = 2LL;
          v116 = v4;
          v117 = &v11;
          v118 = 2LL;
          v119 = v3;
          v121 = v4;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004F159, 0LL, v2, 0x2Fu, &pData);
        }
      }
    }
    else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000100uLL) )
    {
      v10 = v8[15];
      v123 = &unk_1C00541E4;
      v125 = v8 + 10;
      v127 = v8 + 8;
      v17 = *v8;
      v129 = &v17;
      v131 = v8 + 11;
      v133 = v8 + 13;
      v16 = v8[16];
      v135 = &v16;
      v15 = v8[14];
      v137 = &v15;
      v124 = 4LL;
      v14 = (v10 >> 1) & 1;
      v13 = v10 & 1;
      v141 = &v14;
      v126 = 4LL;
      v143 = &v13;
      v11 = *((_WORD *)v8 + 2);
      v148 = v11;
      v128 = 8LL;
      v130 = 4LL;
      v132 = 4LL;
      v134 = 4LL;
      v136 = 4LL;
      v138 = 4LL;
      v139 = v7;
      v140 = 4LL;
      v142 = 4LL;
      v144 = 4LL;
      v145 = &v11;
      v146 = 2LL;
      v147 = v8;
      v149 = v9;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004F08E, 0LL, v7, 0xFu, &v122);
    }
  }
}
