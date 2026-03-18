/*
 * XREFs of ?WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E8C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_FUNCTIONALIZE_PACKET(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  unsigned int v2; // eax
  const GUID *v3; // r9
  int *v4; // r10
  int v5; // r11d
  int v6; // eax
  const GUID *v7; // r9
  int *v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // eax
  const GUID *v11; // r9
  int *v12; // r10
  int v13; // r11d
  unsigned __int16 v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v15; // [rsp+3Ah] [rbp-CEh] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  int v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  void *v36; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  int *v38; // [rsp+C8h] [rbp-40h]
  __int64 v39; // [rsp+D0h] [rbp-38h]
  int *v40; // [rsp+D8h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-28h]
  int *v42; // [rsp+E8h] [rbp-20h]
  __int64 v43; // [rsp+F0h] [rbp-18h]
  int *v44; // [rsp+F8h] [rbp-10h]
  __int64 v45; // [rsp+100h] [rbp-8h]
  const GUID *v46; // [rsp+108h] [rbp+0h]
  __int64 v47; // [rsp+110h] [rbp+8h]
  int *v48; // [rsp+118h] [rbp+10h]
  __int64 v49; // [rsp+120h] [rbp+18h]
  __int64 *v50; // [rsp+128h] [rbp+20h]
  __int64 v51; // [rsp+130h] [rbp+28h]
  int *v52; // [rsp+138h] [rbp+30h]
  __int64 v53; // [rsp+140h] [rbp+38h]
  int *v54; // [rsp+148h] [rbp+40h]
  __int64 v55; // [rsp+150h] [rbp+48h]
  int *v56; // [rsp+158h] [rbp+50h]
  __int64 v57; // [rsp+160h] [rbp+58h]
  int *v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  int *v60; // [rsp+178h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+78h]
  int *v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  int *v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  int *v66; // [rsp+1A8h] [rbp+A0h]
  __int64 v67; // [rsp+1B0h] [rbp+A8h]
  int *v68; // [rsp+1B8h] [rbp+B0h]
  __int64 v69; // [rsp+1C0h] [rbp+B8h]
  int *v70; // [rsp+1C8h] [rbp+C0h]
  __int64 v71; // [rsp+1D0h] [rbp+C8h]
  int *v72; // [rsp+1D8h] [rbp+D0h]
  __int64 v73; // [rsp+1E0h] [rbp+D8h]
  int *v74; // [rsp+1E8h] [rbp+E0h]
  __int64 v75; // [rsp+1F0h] [rbp+E8h]
  int *v76; // [rsp+1F8h] [rbp+F0h]
  __int64 v77; // [rsp+200h] [rbp+F8h]
  unsigned __int16 *v78; // [rsp+208h] [rbp+100h]
  __int64 v79; // [rsp+210h] [rbp+108h]
  int *v80; // [rsp+218h] [rbp+110h]
  __int64 v81; // [rsp+220h] [rbp+118h]
  unsigned __int16 *v82; // [rsp+228h] [rbp+120h]
  __int64 v83; // [rsp+230h] [rbp+128h]
  int *v84; // [rsp+238h] [rbp+130h]
  unsigned __int64 v85; // [rsp+240h] [rbp+138h]
  int *v86; // [rsp+248h] [rbp+140h]
  __int64 v87; // [rsp+250h] [rbp+148h]
  int *v88; // [rsp+258h] [rbp+150h]
  __int64 v89; // [rsp+260h] [rbp+158h]
  int *v90; // [rsp+268h] [rbp+160h]
  __int64 v91; // [rsp+270h] [rbp+168h]
  int *v92; // [rsp+278h] [rbp+170h]
  __int64 v93; // [rsp+280h] [rbp+178h]
  int *v94; // [rsp+288h] [rbp+180h]
  __int64 v95; // [rsp+290h] [rbp+188h]
  int *v96; // [rsp+298h] [rbp+190h]
  __int64 v97; // [rsp+2A0h] [rbp+198h]
  int *v98; // [rsp+2A8h] [rbp+1A0h]
  __int64 v99; // [rsp+2B0h] [rbp+1A8h]
  int *v100; // [rsp+2B8h] [rbp+1B0h]
  __int64 v101; // [rsp+2C0h] [rbp+1B8h]
  int *v102; // [rsp+2C8h] [rbp+1C0h]
  __int64 v103; // [rsp+2D0h] [rbp+1C8h]
  int *v104; // [rsp+2D8h] [rbp+1D0h]
  __int64 v105; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int16 *v106; // [rsp+2E8h] [rbp+1E0h]
  __int64 v107; // [rsp+2F0h] [rbp+1E8h]
  int *v108; // [rsp+2F8h] [rbp+1F0h]
  int v109; // [rsp+300h] [rbp+1F8h]
  int v110; // [rsp+304h] [rbp+1FCh]
  unsigned __int16 *v111; // [rsp+308h] [rbp+200h]
  __int64 v112; // [rsp+310h] [rbp+208h]
  int *v113; // [rsp+318h] [rbp+210h]
  int v114; // [rsp+320h] [rbp+218h]
  int v115; // [rsp+324h] [rbp+21Ch]
  EVENT_DATA_DESCRIPTOR v116; // [rsp+338h] [rbp+230h] BYREF
  void *v117; // [rsp+358h] [rbp+250h]
  __int64 v118; // [rsp+360h] [rbp+258h]
  int *v119; // [rsp+368h] [rbp+260h]
  __int64 v120; // [rsp+370h] [rbp+268h]
  int *v121; // [rsp+378h] [rbp+270h]
  __int64 v122; // [rsp+380h] [rbp+278h]
  int *v123; // [rsp+388h] [rbp+280h]
  __int64 v124; // [rsp+390h] [rbp+288h]
  int *v125; // [rsp+398h] [rbp+290h]
  __int64 v126; // [rsp+3A0h] [rbp+298h]
  const GUID *v127; // [rsp+3A8h] [rbp+2A0h]
  __int64 v128; // [rsp+3B0h] [rbp+2A8h]
  int *v129; // [rsp+3B8h] [rbp+2B0h]
  __int64 v130; // [rsp+3C0h] [rbp+2B8h]
  unsigned __int16 *v131; // [rsp+3C8h] [rbp+2C0h]
  __int64 v132; // [rsp+3D0h] [rbp+2C8h]
  int *v133; // [rsp+3D8h] [rbp+2D0h]
  int v134; // [rsp+3E0h] [rbp+2D8h]
  int v135; // [rsp+3E4h] [rbp+2DCh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000800uLL) )
  {
    v2 = *(_DWORD *)(v1 + 48);
    if ( v2 <= 1 )
    {
      if ( v2 )
      {
        if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
        {
          v37 = 4LL;
          v36 = &unk_1C00541E4;
          v39 = 4LL;
          v38 = v8 + 10;
          v40 = v8 + 8;
          v16 = *v8;
          v42 = &v16;
          v44 = v8 + 11;
          v48 = v8 + 13;
          v33 = *((_QWORD *)v8 + 8);
          v50 = &v33;
          v52 = v8 + 27;
          v24 = v8[20];
          v54 = &v24;
          v23 = v8[21];
          v56 = &v23;
          v22 = v8[25];
          v58 = &v22;
          v21 = v8[22];
          v60 = &v21;
          v20 = v8[24];
          v62 = &v20;
          v19 = v8[23];
          v64 = &v19;
          v66 = v8 + 18;
          v18 = v8[26];
          v68 = &v18;
          v72 = v8 + 15;
          v74 = v8 + 28;
          v17 = v8[29];
          v76 = &v17;
          v41 = 8LL;
          v43 = 4LL;
          v45 = 4LL;
          v46 = v7;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 8LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 8LL;
          v69 = 4LL;
          v70 = v8 + 14;
          v71 = 4LL;
          v73 = 4LL;
          v75 = 4LL;
          v14 = LOWORD(v7->Data1) << 6;
          LODWORD(v81) = v14;
          v10 = *((unsigned __int16 *)v8 + 2);
          v80 = v8 + 14;
          v15 = v10;
          v85 = __PAIR64__(v9, v10);
          v77 = 4LL;
          v78 = &v14;
          v79 = 2LL;
          HIDWORD(v81) = v9;
          v82 = &v15;
          v83 = 2LL;
          v84 = v8;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004D687, 0LL, v7, 0x1Bu, &pData);
        }
      }
      else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
      {
        v118 = 4LL;
        v117 = &unk_1C00541E4;
        v120 = 4LL;
        v119 = v12 + 10;
        v121 = v12 + 8;
        v16 = *v12;
        v123 = &v16;
        v125 = v12 + 11;
        v129 = v12 + 13;
        v14 = *((_WORD *)v12 + 2);
        v134 = v14;
        v122 = 8LL;
        v124 = 4LL;
        v126 = 4LL;
        v127 = v11;
        v128 = 4LL;
        v130 = 4LL;
        v131 = &v14;
        v132 = 2LL;
        v133 = v12;
        v135 = v13;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004D613, 0LL, v11, 0xBu, &v116);
      }
    }
    else if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000800uLL) )
      {
        v37 = 4LL;
        v36 = &unk_1C00541E4;
        v39 = 4LL;
        v38 = v4 + 10;
        v40 = v4 + 8;
        v25 = *v4;
        v42 = &v25;
        v44 = v4 + 11;
        v48 = v4 + 13;
        v34 = *((_QWORD *)v4 + 8);
        v50 = &v34;
        v52 = v4 + 27;
        v26 = v4[20];
        v54 = &v26;
        v27 = v4[21];
        v56 = &v27;
        v28 = v4[25];
        v58 = &v28;
        v29 = v4[22];
        v60 = &v29;
        v30 = v4[24];
        v62 = &v30;
        v31 = v4[23];
        v64 = &v31;
        v66 = v4 + 18;
        v32 = v4[26];
        v68 = &v32;
        v72 = v4 + 15;
        v74 = v4 + 28;
        v17 = v4[29];
        v76 = &v17;
        v41 = 8LL;
        v43 = 4LL;
        v45 = 4LL;
        v46 = v3;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 8LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 8LL;
        v69 = 4LL;
        v70 = v4 + 14;
        v71 = 4LL;
        v73 = 4LL;
        v75 = 4LL;
        v33 = *((_QWORD *)v4 + 16);
        v78 = (unsigned __int16 *)&v33;
        v80 = v4 + 43;
        v18 = v4[36];
        v82 = (unsigned __int16 *)&v18;
        v19 = v4[37];
        v84 = &v19;
        v20 = v4[41];
        v86 = &v20;
        v21 = v4[38];
        v88 = &v21;
        v22 = v4[40];
        v90 = &v22;
        v23 = v4[39];
        v92 = &v23;
        v94 = v4 + 34;
        v24 = v4[42];
        v96 = &v24;
        v98 = v4 + 30;
        v100 = v4 + 31;
        v102 = v4 + 44;
        v16 = v4[45];
        v104 = &v16;
        v15 = LOWORD(v3->Data1) << 6;
        v109 = v15;
        v6 = *((unsigned __int16 *)v4 + 2);
        v106 = &v15;
        v14 = v6;
        v114 = v6;
        v77 = 4LL;
        v79 = 8LL;
        v81 = 4LL;
        v83 = 4LL;
        v85 = 4LL;
        v87 = 4LL;
        v89 = 4LL;
        v91 = 4LL;
        v93 = 4LL;
        v95 = 8LL;
        v97 = 4LL;
        v99 = 4LL;
        v101 = 4LL;
        v103 = 4LL;
        v105 = 4LL;
        v107 = 2LL;
        v108 = v4 + 14;
        v110 = v5;
        v111 = &v14;
        v112 = 2LL;
        v113 = v4;
        v115 = v5;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004D90F, 0LL, v3, 0x29u, &pData);
      }
    }
  }
}
