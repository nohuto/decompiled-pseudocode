/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C010A5A8
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C010AA60 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C01E88AC (DpiGetIntegratedDisplayOrientationOverrides.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v1; // eax
  int v3; // ecx
  char *v4; // rdi
  int *v5; // rdi
  unsigned int *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+38h] [rbp-D0h] BYREF
  int v12; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  const wchar_t *v15; // [rsp+58h] [rbp-B0h]
  char *v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-A0h]
  char *v18; // [rsp+70h] [rbp-98h]
  __int64 v19; // [rsp+78h] [rbp-90h]
  __int64 v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+88h] [rbp-80h]
  const wchar_t *v22; // [rsp+90h] [rbp-78h]
  char *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  char *v25; // [rsp+A8h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-58h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  const wchar_t *v29; // [rsp+C8h] [rbp-40h]
  char *v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D8h] [rbp-30h]
  char *v32; // [rsp+E0h] [rbp-28h]
  int v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int v35; // [rsp+F8h] [rbp-10h]
  const wchar_t *v36; // [rsp+100h] [rbp-8h]
  char *v37; // [rsp+108h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+8h]
  char *v39; // [rsp+118h] [rbp+10h]
  int v40; // [rsp+120h] [rbp+18h]
  __int64 v41; // [rsp+128h] [rbp+20h]
  int v42; // [rsp+130h] [rbp+28h]
  const wchar_t *v43; // [rsp+138h] [rbp+30h]
  char *v44; // [rsp+140h] [rbp+38h]
  int v45; // [rsp+148h] [rbp+40h]
  char *v46; // [rsp+150h] [rbp+48h]
  int v47; // [rsp+158h] [rbp+50h]
  __int64 v48; // [rsp+160h] [rbp+58h]
  int v49; // [rsp+168h] [rbp+60h]
  const wchar_t *v50; // [rsp+170h] [rbp+68h]
  char *v51; // [rsp+178h] [rbp+70h]
  int v52; // [rsp+180h] [rbp+78h]
  char *v53; // [rsp+188h] [rbp+80h]
  int v54; // [rsp+190h] [rbp+88h]
  __int64 v55; // [rsp+198h] [rbp+90h]
  int v56; // [rsp+1A0h] [rbp+98h]
  const wchar_t *v57; // [rsp+1A8h] [rbp+A0h]
  char *v58; // [rsp+1B0h] [rbp+A8h]
  int v59; // [rsp+1B8h] [rbp+B0h]
  char *v60; // [rsp+1C0h] [rbp+B8h]
  int v61; // [rsp+1C8h] [rbp+C0h]
  __int64 v62; // [rsp+1D0h] [rbp+C8h]
  int v63; // [rsp+1D8h] [rbp+D0h]
  const wchar_t *v64; // [rsp+1E0h] [rbp+D8h]
  char *v65; // [rsp+1E8h] [rbp+E0h]
  int v66; // [rsp+1F0h] [rbp+E8h]
  char *v67; // [rsp+1F8h] [rbp+F0h]
  int v68; // [rsp+200h] [rbp+F8h]
  __int64 v69; // [rsp+208h] [rbp+100h]
  int v70; // [rsp+210h] [rbp+108h]
  const wchar_t *v71; // [rsp+218h] [rbp+110h]
  char *v72; // [rsp+220h] [rbp+118h]
  int v73; // [rsp+228h] [rbp+120h]
  char *v74; // [rsp+230h] [rbp+128h]
  int v75; // [rsp+238h] [rbp+130h]
  __int64 v76; // [rsp+240h] [rbp+138h]
  int v77; // [rsp+248h] [rbp+140h]
  const wchar_t *v78; // [rsp+250h] [rbp+148h]
  char *v79; // [rsp+258h] [rbp+150h]
  int v80; // [rsp+260h] [rbp+158h]
  char *v81; // [rsp+268h] [rbp+160h]
  int v82; // [rsp+270h] [rbp+168h]
  __int64 v83; // [rsp+278h] [rbp+170h]
  int v84; // [rsp+280h] [rbp+178h]
  const wchar_t *v85; // [rsp+288h] [rbp+180h]
  char *v86; // [rsp+290h] [rbp+188h]
  int v87; // [rsp+298h] [rbp+190h]
  char *v88; // [rsp+2A0h] [rbp+198h]
  int v89; // [rsp+2A8h] [rbp+1A0h]
  __int64 v90; // [rsp+2B0h] [rbp+1A8h]
  int v91; // [rsp+2B8h] [rbp+1B0h]
  const wchar_t *v92; // [rsp+2C0h] [rbp+1B8h]
  char *v93; // [rsp+2C8h] [rbp+1C0h]
  int v94; // [rsp+2D0h] [rbp+1C8h]
  char *v95; // [rsp+2D8h] [rbp+1D0h]
  int v96; // [rsp+2E0h] [rbp+1D8h]
  __int64 v97; // [rsp+2E8h] [rbp+1E0h]
  int v98; // [rsp+2F0h] [rbp+1E8h]
  const wchar_t *v99; // [rsp+2F8h] [rbp+1F0h]
  char *v100; // [rsp+300h] [rbp+1F8h]
  int v101; // [rsp+308h] [rbp+200h]
  char *v102; // [rsp+310h] [rbp+208h]
  int v103; // [rsp+318h] [rbp+210h]
  __int64 v104; // [rsp+320h] [rbp+218h]
  int v105; // [rsp+328h] [rbp+220h]
  const wchar_t *v106; // [rsp+330h] [rbp+228h]
  char *v107; // [rsp+338h] [rbp+230h]
  int v108; // [rsp+340h] [rbp+238h]
  char *v109; // [rsp+348h] [rbp+240h]
  int v110; // [rsp+350h] [rbp+248h]
  __int64 v111; // [rsp+358h] [rbp+250h]
  int v112; // [rsp+360h] [rbp+258h]
  const wchar_t *v113; // [rsp+368h] [rbp+260h]
  char *v114; // [rsp+370h] [rbp+268h]
  int v115; // [rsp+378h] [rbp+270h]
  char *v116; // [rsp+380h] [rbp+278h]
  int v117; // [rsp+388h] [rbp+280h]
  __int64 v118; // [rsp+390h] [rbp+288h]
  int v119; // [rsp+398h] [rbp+290h]
  _BYTE v120[40]; // [rsp+3A0h] [rbp+298h] BYREF
  __int64 v121; // [rsp+3C8h] [rbp+2C0h] BYREF
  int v122; // [rsp+3D0h] [rbp+2C8h]
  const wchar_t *v123; // [rsp+3D8h] [rbp+2D0h]
  char *v124; // [rsp+3E0h] [rbp+2D8h]
  int v125; // [rsp+3E8h] [rbp+2E0h]
  unsigned int *v126; // [rsp+3F0h] [rbp+2E8h]
  int v127; // [rsp+3F8h] [rbp+2F0h]
  __int64 v128; // [rsp+400h] [rbp+2F8h]
  int v129; // [rsp+408h] [rbp+300h]
  const wchar_t *v130; // [rsp+410h] [rbp+308h]
  char *v131; // [rsp+418h] [rbp+310h]
  int v132; // [rsp+420h] [rbp+318h]
  int *v133; // [rsp+428h] [rbp+320h]
  int v134; // [rsp+430h] [rbp+328h]
  __int64 v135; // [rsp+438h] [rbp+330h]
  int v136; // [rsp+440h] [rbp+338h]
  _BYTE v137[40]; // [rsp+448h] [rbp+340h] BYREF

  v1 = *((_DWORD *)this + 6) & 0x100;
  v11 = 0;
  v3 = *((_DWORD *)this + 8);
  v12 = v1 != 0 ? 3 : 0;
  if ( IsInternalVideoOutput(v3) )
  {
    v5 = (int *)((char *)this + 440);
    v6 = (unsigned int *)((char *)this + 432);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(*((_QWORD *)this + 5), (char *)this + 432, (char *)this + 440) < 0 )
    {
      v121 = 0LL;
      v127 = 4;
      v134 = 4;
      v123 = L"MonitorOrientation";
      v125 = 67108868;
      v126 = &v11;
      v130 = L"DockedOrientation";
      v132 = 67108868;
      v133 = &v12;
      v122 = 292;
      v124 = (char *)this + 432;
      v128 = 0LL;
      v129 = 292;
      v131 = (char *)this + 440;
      v135 = 0LL;
      v136 = 0;
      memset(v137, 0, sizeof(v137));
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v121, 0LL, 0LL) < 0 )
      {
        *v6 = v11;
        *v5 = v12;
      }
    }
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this, *v6) )
    {
      v8 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v8 + 24) = *v6;
      WdLogEvent5_WdError(v8);
      *v6 = v11;
    }
    if ( (unsigned int)*v5 > 3 )
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = (unsigned int)*v5;
      WdLogEvent5_WdError(v9);
      *v5 = v12;
    }
  }
  *((_DWORD *)this + 109) = *((_DWORD *)this + 108);
  *((_DWORD *)this + 111) = *((_DWORD *)this + 110);
  v13 = 0LL;
  v15 = L"BrightnessSupportsNits";
  LODWORD(v14) = 292;
  v18 = (char *)this + 904;
  v4 = (char *)this + 660;
  v16 = (char *)this + 652;
  v22 = L"BrightnessNormalRangeCount";
  LODWORD(v17) = 67108868;
  v25 = (char *)this + 920;
  v29 = L"BrightnessTotalRangeCount";
  v32 = (char *)this + 924;
  v36 = L"BrightnessMinMillinits0";
  v37 = (char *)this + 656;
  v43 = L"BrightnessMaxMillinits0";
  v50 = L"BrightnessStepSizeMillinits0";
  v51 = (char *)this + 664;
  v57 = L"BrightnessMinMillinits1";
  v58 = (char *)this + 668;
  v64 = L"BrightnessMaxMillinits1";
  v65 = (char *)this + 672;
  LODWORD(v19) = 4;
  v20 = 0LL;
  v21 = 292;
  v23 = (char *)this + 848;
  v24 = 67108868;
  v26 = 4;
  v27 = 0LL;
  v28 = 292;
  v30 = (char *)this + 852;
  v31 = 67108868;
  v33 = 4;
  v34 = 0LL;
  v35 = 292;
  v38 = 67108868;
  v39 = (char *)this + 908;
  v40 = 4;
  v41 = 0LL;
  v42 = 292;
  v44 = (char *)this + 660;
  v45 = 67108868;
  v46 = (char *)this + 912;
  v47 = 4;
  v48 = 0LL;
  v49 = 292;
  v52 = 67108868;
  v53 = (char *)this + 916;
  v54 = 4;
  v55 = 0LL;
  v56 = 292;
  v59 = 67108868;
  v60 = (char *)this + 908;
  v61 = 4;
  v62 = 0LL;
  v63 = 292;
  v66 = 67108868;
  v67 = (char *)this + 912;
  v81 = (char *)this + 908;
  v71 = L"BrightnessStepSizeMillinits1";
  v72 = (char *)this + 676;
  v78 = L"BrightnessMinMillinits2";
  v79 = (char *)this + 680;
  v85 = L"BrightnessMaxMillinits2";
  v86 = (char *)this + 684;
  v92 = L"BrightnessStepSizeMillinits2";
  v93 = (char *)this + 688;
  v99 = L"BrightnessMinMillinits3";
  v100 = (char *)this + 692;
  v106 = L"BrightnessMaxMillinits3";
  v107 = (char *)this + 696;
  v102 = (char *)this + 908;
  v113 = L"BrightnessStepSizeMillinits3";
  v73 = 67108868;
  v80 = 67108868;
  v87 = 67108868;
  v88 = (char *)this + 912;
  v94 = 67108868;
  v101 = 67108868;
  v108 = 67108868;
  v109 = (char *)this + 912;
  v115 = 67108868;
  v114 = (char *)this + 700;
  v68 = 4;
  v69 = 0LL;
  v70 = 292;
  v74 = (char *)this + 916;
  v75 = 4;
  v76 = 0LL;
  v77 = 292;
  v82 = 4;
  v83 = 0LL;
  v84 = 292;
  v89 = 4;
  v90 = 0LL;
  v91 = 292;
  v95 = (char *)this + 916;
  v96 = 4;
  v97 = 0LL;
  v98 = 292;
  v103 = 4;
  v104 = 0LL;
  v105 = 292;
  v110 = 4;
  v111 = 0LL;
  v112 = 292;
  v116 = (char *)this + 916;
  v117 = 4;
  v118 = 0LL;
  v119 = 0;
  memset(v120, 0, sizeof(v120));
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v13, 0LL, 0LL) < 0 )
  {
    *((_DWORD *)this + 163) = 0;
    v10 = 16LL;
    *((_DWORD *)this + 212) = 0;
    *((_DWORD *)this + 213) = 0;
    do
    {
      *(_QWORD *)(v4 - 4) = 0LL;
      *((_DWORD *)v4 + 1) = 0;
      v4 += 12;
      --v10;
    }
    while ( v10 );
  }
}
