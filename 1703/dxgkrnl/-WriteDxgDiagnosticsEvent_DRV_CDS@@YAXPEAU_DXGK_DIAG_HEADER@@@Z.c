/*
 * XREFs of ?WriteDxgDiagnosticsEvent_DRV_CDS@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003424
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000C080 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000C2C8 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000C2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00103C8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_DRV_CDS(struct _DXGK_DIAG_HEADER *a1)
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
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+4Ch] [rbp-B4h] BYREF
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  int v17; // [rsp+5Ch] [rbp-A4h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  int v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+74h] [rbp-8Ch] BYREF
  int v24; // [rsp+78h] [rbp-88h] BYREF
  int v25; // [rsp+7Ch] [rbp-84h] BYREF
  int v26; // [rsp+80h] [rbp-80h] BYREF
  int v27; // [rsp+84h] [rbp-7Ch] BYREF
  int v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+8Ch] [rbp-74h] BYREF
  int v30; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+94h] [rbp-6Ch] BYREF
  int v32; // [rsp+98h] [rbp-68h] BYREF
  int v33; // [rsp+9Ch] [rbp-64h] BYREF
  int v34; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+A4h] [rbp-5Ch] BYREF
  int v36; // [rsp+A8h] [rbp-58h] BYREF
  int v37; // [rsp+ACh] [rbp-54h] BYREF
  int v38; // [rsp+B0h] [rbp-50h] BYREF
  int v39; // [rsp+B4h] [rbp-4Ch] BYREF
  int v40; // [rsp+B8h] [rbp-48h] BYREF
  int v41; // [rsp+BCh] [rbp-44h] BYREF
  int v42; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  void *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  int *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  int *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  int *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  int *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  int *v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  int *v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+168h] [rbp+68h]
  int *v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+178h] [rbp+78h]
  int *v62; // [rsp+180h] [rbp+80h]
  __int64 v63; // [rsp+188h] [rbp+88h]
  int *v64; // [rsp+190h] [rbp+90h]
  __int64 v65; // [rsp+198h] [rbp+98h]
  int *v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h]
  int *v68; // [rsp+1B0h] [rbp+B0h]
  __int64 v69; // [rsp+1B8h] [rbp+B8h]
  int *v70; // [rsp+1C0h] [rbp+C0h]
  __int64 v71; // [rsp+1C8h] [rbp+C8h]
  int *v72; // [rsp+1D0h] [rbp+D0h]
  __int64 v73; // [rsp+1D8h] [rbp+D8h]
  int *v74; // [rsp+1E0h] [rbp+E0h]
  __int64 v75; // [rsp+1E8h] [rbp+E8h]
  int *v76; // [rsp+1F0h] [rbp+F0h]
  __int64 v77; // [rsp+1F8h] [rbp+F8h]
  int *v78; // [rsp+200h] [rbp+100h]
  __int64 v79; // [rsp+208h] [rbp+108h]
  int *v80; // [rsp+210h] [rbp+110h]
  __int64 v81; // [rsp+218h] [rbp+118h]
  int *v82; // [rsp+220h] [rbp+120h]
  __int64 v83; // [rsp+228h] [rbp+128h]
  int *v84; // [rsp+230h] [rbp+130h]
  __int64 v85; // [rsp+238h] [rbp+138h]
  int *v86; // [rsp+240h] [rbp+140h]
  __int64 v87; // [rsp+248h] [rbp+148h]
  int *v88; // [rsp+250h] [rbp+150h]
  __int64 v89; // [rsp+258h] [rbp+158h]
  int *v90; // [rsp+260h] [rbp+160h]
  __int64 v91; // [rsp+268h] [rbp+168h]
  int *v92; // [rsp+270h] [rbp+170h]
  __int64 v93; // [rsp+278h] [rbp+178h]
  int *v94; // [rsp+280h] [rbp+180h]
  __int64 v95; // [rsp+288h] [rbp+188h]
  int *v96; // [rsp+290h] [rbp+190h]
  __int64 v97; // [rsp+298h] [rbp+198h]
  int *v98; // [rsp+2A0h] [rbp+1A0h]
  __int64 v99; // [rsp+2A8h] [rbp+1A8h]
  int *v100; // [rsp+2B0h] [rbp+1B0h]
  __int64 v101; // [rsp+2B8h] [rbp+1B8h]
  int *v102; // [rsp+2C0h] [rbp+1C0h]
  __int64 v103; // [rsp+2C8h] [rbp+1C8h]
  int *v104; // [rsp+2D0h] [rbp+1D0h]
  __int64 v105; // [rsp+2D8h] [rbp+1D8h]
  int *v106; // [rsp+2E0h] [rbp+1E0h]
  __int64 v107; // [rsp+2E8h] [rbp+1E8h]
  int *v108; // [rsp+2F0h] [rbp+1F0h]
  __int64 v109; // [rsp+2F8h] [rbp+1F8h]
  int *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  int *v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]
  int *v114; // [rsp+320h] [rbp+220h]
  __int64 v115; // [rsp+328h] [rbp+228h]
  int *v116; // [rsp+330h] [rbp+230h]
  __int64 v117; // [rsp+338h] [rbp+238h]
  int *v118; // [rsp+340h] [rbp+240h]
  __int64 v119; // [rsp+348h] [rbp+248h]
  int *v120; // [rsp+350h] [rbp+250h]
  __int64 v121; // [rsp+358h] [rbp+258h]
  int *v122; // [rsp+360h] [rbp+260h]
  __int64 v123; // [rsp+368h] [rbp+268h]
  int *v124; // [rsp+370h] [rbp+270h]
  __int64 v125; // [rsp+378h] [rbp+278h]
  int *v126; // [rsp+380h] [rbp+280h]
  __int64 v127; // [rsp+388h] [rbp+288h]
  unsigned __int16 *v128; // [rsp+390h] [rbp+290h]
  __int64 v129; // [rsp+398h] [rbp+298h]
  int *v130; // [rsp+3A0h] [rbp+2A0h]
  int v131; // [rsp+3A8h] [rbp+2A8h]
  int v132; // [rsp+3ACh] [rbp+2ACh]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000008uLL) && hProvider > v1 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000008uLL) )
    {
      v5 = v3[12];
      v44 = &unk_1C00541E4;
      v45 = v4;
      v46 = v3 + 10;
      v48 = v3 + 8;
      v7 = *v3;
      v50 = &v7;
      v52 = v3 + 11;
      v54 = v3 + 16;
      v8 = v3[32];
      v56 = &v8;
      v9 = v3[38];
      v58 = &v9;
      v10 = v3[39];
      v60 = &v10;
      v11 = v3[35];
      v62 = &v11;
      v12 = v3[37];
      v64 = &v12;
      v13 = v3[36];
      v66 = &v13;
      v14 = v3[29];
      v68 = &v14;
      v15 = v3[34];
      v70 = &v15;
      v16 = v3[33];
      v72 = &v16;
      v17 = v3[30];
      v74 = &v17;
      v18 = v3[31];
      v76 = &v18;
      v47 = v4;
      v19 = (v5 >> 12) & 1;
      v49 = 8LL;
      v51 = v4;
      v53 = v4;
      v55 = 8LL;
      v57 = v4;
      v59 = v4;
      v61 = v4;
      v63 = v4;
      v65 = v4;
      v67 = v4;
      v69 = v4;
      v71 = v4;
      v73 = v4;
      v75 = v4;
      v77 = v4;
      v79 = v4;
      v78 = &v19;
      v81 = v4;
      v20 = (v5 >> 1) & 1;
      v80 = &v20;
      v83 = v4;
      v21 = v5 & 1;
      v82 = &v21;
      v85 = v4;
      v22 = (v5 >> 2) & 1;
      v84 = &v22;
      v87 = v4;
      v23 = (v5 >> 6) & 1;
      v86 = &v23;
      v89 = v4;
      v24 = (unsigned __int16)v5 >> 13;
      v88 = &v24;
      v91 = v4;
      v25 = (v5 >> 4) & 1;
      v90 = &v25;
      v93 = v4;
      v26 = (v5 >> 5) & 1;
      v92 = &v26;
      v95 = v4;
      v27 = (v5 >> 3) & 1;
      v94 = &v27;
      v28 = (v5 >> 7) & 0xF;
      v97 = v4;
      v96 = &v28;
      v98 = &v29;
      v100 = v3 + 13;
      v30 = v3[21];
      v102 = &v30;
      v31 = v3[27];
      v29 = (v5 >> 11) & 1;
      v99 = v4;
      v101 = v4;
      v103 = v4;
      v105 = v4;
      v104 = &v31;
      v32 = v3[28];
      v106 = &v32;
      v33 = v3[24];
      v108 = &v33;
      v34 = v3[26];
      v110 = &v34;
      v35 = v3[25];
      v112 = &v35;
      v36 = v3[18];
      v114 = &v36;
      v37 = v3[23];
      v116 = &v37;
      v38 = v3[22];
      v118 = &v38;
      v39 = v3[19];
      v120 = &v39;
      v40 = v3[20];
      v122 = &v40;
      v41 = v3[14];
      v124 = &v41;
      v42 = v3[15];
      v126 = &v42;
      v6 = *((_WORD *)v3 + 2);
      v131 = v6;
      v107 = v4;
      v109 = v4;
      v111 = v4;
      v113 = v4;
      v115 = v4;
      v117 = v4;
      v119 = v4;
      v121 = v4;
      v123 = v4;
      v125 = v4;
      v127 = v4;
      v128 = &v6;
      v129 = 2LL;
      v130 = v3;
      v132 = (int)v2;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004FE02, 0LL, v2, 0x2Eu, &pData);
    }
  }
}
