/*
 * XREFs of ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180140FE0
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x18013B998 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x180024394 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::SendInteractionSummary(CTelemetryTouchLatencyAnalysis *this)
{
  unsigned __int16 *v1; // rdi
  unsigned int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // r10
  LPCWSTR v16; // r11
  __int64 v17; // rdx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v27; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+54h] [rbp-ACh] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+5Ch] [rbp-A4h] BYREF
  int v32; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A0h] [rbp-60h] BYREF
  char *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  char *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  char *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  char *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  char *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  char *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  char *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  char *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  __int64 v61; // [rsp+170h] [rbp+70h]
  __int64 v62; // [rsp+178h] [rbp+78h]
  char *v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+188h] [rbp+88h]
  char *v65; // [rsp+190h] [rbp+90h]
  __int64 v66; // [rsp+198h] [rbp+98h]
  char *v67; // [rsp+1A0h] [rbp+A0h]
  __int64 v68; // [rsp+1A8h] [rbp+A8h]
  char *v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  char *v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  __int16 *v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  __int16 *v75; // [rsp+1E0h] [rbp+E0h]
  __int64 v76; // [rsp+1E8h] [rbp+E8h]
  __int16 *v77; // [rsp+1F0h] [rbp+F0h]
  __int64 v78; // [rsp+1F8h] [rbp+F8h]
  __int16 *v79; // [rsp+200h] [rbp+100h]
  __int64 v80; // [rsp+208h] [rbp+108h]
  __int16 *v81; // [rsp+210h] [rbp+110h]
  __int64 v82; // [rsp+218h] [rbp+118h]
  char *v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  char *v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  char *v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  char *v89; // [rsp+250h] [rbp+150h]
  __int64 v90; // [rsp+258h] [rbp+158h]
  char *v91; // [rsp+260h] [rbp+160h]
  __int64 v92; // [rsp+268h] [rbp+168h]
  __int16 *v93; // [rsp+270h] [rbp+170h]
  __int64 v94; // [rsp+278h] [rbp+178h]
  __int16 *v95; // [rsp+280h] [rbp+180h]
  __int64 v96; // [rsp+288h] [rbp+188h]
  __int16 *v97; // [rsp+290h] [rbp+190h]
  __int64 v98; // [rsp+298h] [rbp+198h]
  __int16 *v99; // [rsp+2A0h] [rbp+1A0h]
  __int64 v100; // [rsp+2A8h] [rbp+1A8h]
  __int16 *v101; // [rsp+2B0h] [rbp+1B0h]
  __int64 v102; // [rsp+2B8h] [rbp+1B8h]
  char *v103; // [rsp+2C0h] [rbp+1C0h]
  __int64 v104; // [rsp+2C8h] [rbp+1C8h]
  char *v105; // [rsp+2D0h] [rbp+1D0h]
  __int64 v106; // [rsp+2D8h] [rbp+1D8h]
  char *v107; // [rsp+2E0h] [rbp+1E0h]
  __int64 v108; // [rsp+2E8h] [rbp+1E8h]
  char *v109; // [rsp+2F0h] [rbp+1F0h]
  __int64 v110; // [rsp+2F8h] [rbp+1F8h]
  char *v111; // [rsp+300h] [rbp+200h]
  __int64 v112; // [rsp+308h] [rbp+208h]
  char *v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  char *v115; // [rsp+320h] [rbp+220h]
  __int64 v116; // [rsp+328h] [rbp+228h]
  char *v117; // [rsp+330h] [rbp+230h]
  __int64 v118; // [rsp+338h] [rbp+238h]
  char *v119; // [rsp+340h] [rbp+240h]
  __int64 v120; // [rsp+348h] [rbp+248h]
  char *v121; // [rsp+350h] [rbp+250h]
  __int64 v122; // [rsp+358h] [rbp+258h]
  char *v123; // [rsp+360h] [rbp+260h]
  __int64 v124; // [rsp+368h] [rbp+268h]
  char *v125; // [rsp+370h] [rbp+270h]
  __int64 v126; // [rsp+378h] [rbp+278h]
  char *v127; // [rsp+380h] [rbp+280h]
  __int64 v128; // [rsp+388h] [rbp+288h]
  int *v129; // [rsp+390h] [rbp+290h]
  __int64 v130; // [rsp+398h] [rbp+298h]
  int *v131; // [rsp+3A0h] [rbp+2A0h]
  __int64 v132; // [rsp+3A8h] [rbp+2A8h]
  struct _EVENT_DATA_DESCRIPTOR v133; // [rsp+3B0h] [rbp+2B0h] BYREF
  char *v134; // [rsp+3C0h] [rbp+2C0h]
  __int64 v135; // [rsp+3C8h] [rbp+2C8h]
  int *v136; // [rsp+3D0h] [rbp+2D0h]
  __int64 v137; // [rsp+3D8h] [rbp+2D8h]

  v1 = (unsigned __int16 *)((char *)this + 2048);
  if ( *((_WORD *)this + 1024) )
  {
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    QueryPerformanceCounter(&PerformanceCount);
    v3 = *v1;
    v4 = *((_DWORD *)this + 520) - v3;
    if ( v4 )
    {
      v5 = *((_DWORD *)this + 551) / v4;
      v20 = v5;
      if ( v5 >= 0xFFFF )
        v20 = -1;
      v6 = *((_DWORD *)this + 552) / v4;
      v21 = v6;
      if ( v6 >= 0xFFFF )
        v21 = -1;
      v7 = *((_DWORD *)this + 553) / v4;
      v22 = v7;
      if ( v7 >= 0xFFFF )
        v22 = -1;
      v8 = *((_DWORD *)this + 554) / v4;
      v23 = v8;
      if ( v8 >= 0xFFFF )
        v23 = -1;
      v9 = *((_DWORD *)this + 555) / v4;
      v24 = v9;
      if ( v9 >= 0xFFFF )
        v24 = -1;
    }
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    if ( (_WORD)v3 )
    {
      v10 = *((_DWORD *)this + 559) / v3;
      v25 = v10;
      if ( v10 >= 0xFFFF )
        v25 = -1;
      v11 = *((_DWORD *)this + 560) / v3;
      v26 = v11;
      if ( v11 >= 0xFFFF )
        v26 = -1;
      v12 = *((_DWORD *)this + 561) / v3;
      v27 = v12;
      if ( v12 >= 0xFFFF )
        v27 = -1;
      v13 = *((_DWORD *)this + 562) / v3;
      v28 = v13;
      if ( v13 >= 0xFFFF )
        v28 = -1;
      v14 = *((_DWORD *)this + 563) / v3;
      v29 = v14;
      if ( v14 >= 0xFFFF )
        v29 = -1;
    }
    ConvertTelemetryInteractionTypeToString(*((_DWORD *)this + 511));
    if ( hProvider > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this + 252));
        TlgCreateWsz(&v36, *((LPCWSTR *)this + 253));
        v38 = 4LL;
        v41 = (char *)this + 2050;
        v37 = (char *)this + 2032;
        v43 = (char *)this + 2052;
        v45 = (char *)this + 2054;
        v47 = (char *)this + 2056;
        v49 = (char *)this + 2058;
        v51 = (char *)this + 2060;
        v53 = (char *)this + 2064;
        v55 = (char *)this + 2068;
        v57 = (char *)this + 2072;
        v59 = (char *)this + 2076;
        v63 = (char *)this + 2194;
        v65 = (char *)this + 2196;
        v67 = (char *)this + 2198;
        v69 = (char *)this + 2200;
        v71 = (char *)this + 2202;
        v73 = &v20;
        v75 = &v21;
        v77 = &v22;
        v79 = &v23;
        v81 = &v24;
        v83 = (char *)this + 2224;
        v85 = (char *)this + 2226;
        v87 = (char *)this + 2228;
        v39 = v1;
        v40 = 2LL;
        v42 = 2LL;
        v44 = 2LL;
        v46 = 2LL;
        v48 = 2LL;
        v50 = 2LL;
        v52 = 2LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 2LL;
        v61 = v15;
        v62 = 4LL;
        v64 = 2LL;
        v66 = 2LL;
        v68 = 2LL;
        v70 = 2LL;
        v72 = 2LL;
        v74 = 2LL;
        v76 = 2LL;
        v78 = 2LL;
        v80 = 2LL;
        v82 = 2LL;
        v84 = 2LL;
        v86 = 2LL;
        v88 = 2LL;
        v89 = (char *)this + 2230;
        v90 = 2LL;
        v91 = (char *)this + 2232;
        v92 = 2LL;
        v93 = &v25;
        v95 = &v26;
        v97 = &v27;
        v99 = &v28;
        v101 = &v29;
        v103 = (char *)this + 2256;
        v105 = (char *)this + 2258;
        v107 = (char *)this + 2084;
        v109 = (char *)this + 2094;
        v111 = (char *)this + 2104;
        v113 = (char *)this + 2114;
        v115 = (char *)this + 2124;
        v117 = (char *)this + 2134;
        v119 = (char *)this + 2144;
        v121 = (char *)this + 2154;
        v123 = (char *)this + 2164;
        v125 = (char *)this + 2174;
        v127 = (char *)this + 2184;
        v30 = *((_DWORD *)this + 509);
        v129 = &v30;
        v31 = *((_DWORD *)this + 510);
        v131 = &v31;
        v94 = 2LL;
        v96 = 2LL;
        v98 = 2LL;
        v100 = 2LL;
        v102 = 2LL;
        v104 = 2LL;
        v106 = 2LL;
        v108 = 10LL;
        v110 = 10LL;
        v112 = 10LL;
        v114 = 10LL;
        v116 = 10LL;
        v118 = 10LL;
        v120 = 10LL;
        v122 = 10LL;
        v124 = 10LL;
        v126 = 10LL;
        v128 = 10LL;
        v130 = 4LL;
        v132 = 4LL;
        TlgCreateWsz(&v133, v16);
        v134 = (char *)this + 2260;
        v17 = *((_QWORD *)this + 251);
        v135 = 4LL;
        v32 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v17, PerformanceCount.QuadPart);
        v136 = &v32;
        v137 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F5966, v18, v19, 0x37u, &pData);
      }
    }
  }
}
