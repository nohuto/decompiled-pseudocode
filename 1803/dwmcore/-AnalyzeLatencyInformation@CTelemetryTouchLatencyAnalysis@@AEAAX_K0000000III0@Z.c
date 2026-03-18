/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180014418
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18005A9B0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180014C58 (-QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180014C90 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180014CF4 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180014EBC (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800CD718 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     _TlgCreateWsz @ 0x1800D176C (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0xxxxxxxqqqqqqqqqxqnt @ 0x1801501E0 (McTemplateU0xxxxxxxqqqqqqqqqxqnt.c)
 *     ?TryPopDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180151BE4 (-TryPopDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        signed __int64 a9,
        unsigned int a10,
        char a11,
        unsigned int a12,
        unsigned __int64 a13)
{
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rbx
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  CTelemetryTouchLatencyAnalysis *v20; // rcx
  unsigned __int64 v21; // r11
  unsigned __int16 v22; // r13
  unsigned int v23; // eax
  CTelemetryTouchLatencyAnalysis *v24; // rcx
  unsigned __int16 v25; // si
  unsigned int v26; // eax
  CTelemetryTouchLatencyAnalysis *v27; // rcx
  unsigned __int64 v28; // r10
  unsigned __int16 v29; // r12
  CTelemetryTouchLatencyAnalysis *v30; // rcx
  unsigned __int64 v31; // r10
  unsigned int v32; // r15d
  unsigned int v33; // eax
  unsigned int v34; // r11d
  unsigned int v35; // edx
  bool v36; // zf
  int v37; // r13d
  int v38; // r12d
  unsigned int v39; // ecx
  int v40; // ecx
  char v41; // r10
  char v42; // r11
  double v43; // xmm0_8
  double v44; // xmm0_8
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r11
  int v47; // eax
  __int64 v48; // r10
  const WCHAR *v49; // rdx
  char v50; // cl
  __int64 v51; // r10
  __int64 v52; // r10
  CTelemetryTouchLatencyAnalysis *v53; // rcx
  __int64 v54; // r10
  CTelemetryTouchLatencyAnalysis *v55; // rcx
  __int64 v56; // r10
  CTelemetryTouchLatencyAnalysis *v57; // rcx
  __int64 v58; // r10
  unsigned __int64 v59; // r11
  __int64 v60; // r10
  const WCHAR *v61; // rdx
  char v62; // cl
  __int64 v63; // r10
  __int64 v64; // r10
  CTelemetryTouchLatencyAnalysis *v65; // rcx
  __int64 v66; // r10
  CTelemetryTouchLatencyAnalysis *v67; // rcx
  __int64 v68; // r10
  CTelemetryTouchLatencyAnalysis *v69; // rcx
  __int64 v70; // r10
  unsigned __int64 v71; // r11
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // r10
  char v75; // [rsp+C0h] [rbp-80h] BYREF
  char v76; // [rsp+C1h] [rbp-7Fh] BYREF
  char v77; // [rsp+C2h] [rbp-7Eh] BYREF
  char v78; // [rsp+C3h] [rbp-7Dh] BYREF
  char v79; // [rsp+C4h] [rbp-7Ch] BYREF
  _BYTE v80[3]; // [rsp+C5h] [rbp-7Bh] BYREF
  unsigned __int64 v81; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v82; // [rsp+D0h] [rbp-70h] BYREF
  unsigned int v83; // [rsp+D4h] [rbp-6Ch] BYREF
  unsigned int v84; // [rsp+D8h] [rbp-68h] BYREF
  unsigned int v85; // [rsp+DCh] [rbp-64h] BYREF
  unsigned int v86; // [rsp+E0h] [rbp-60h] BYREF
  unsigned int v87; // [rsp+E4h] [rbp-5Ch] BYREF
  unsigned __int64 v88; // [rsp+E8h] [rbp-58h] BYREF
  unsigned __int64 v89; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v90; // [rsp+F8h] [rbp-48h]
  __int64 v91; // [rsp+100h] [rbp-40h]
  __int64 v92; // [rsp+108h] [rbp-38h] BYREF
  unsigned __int64 v93; // [rsp+110h] [rbp-30h]
  __int64 v94; // [rsp+118h] [rbp-28h]
  unsigned __int64 v95; // [rsp+120h] [rbp-20h]
  unsigned __int64 v96; // [rsp+128h] [rbp-18h]
  unsigned __int64 v97; // [rsp+130h] [rbp-10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+0h] BYREF
  char *v99; // [rsp+160h] [rbp+20h]
  __int64 v100; // [rsp+168h] [rbp+28h]
  unsigned int *v101; // [rsp+170h] [rbp+30h]
  __int64 v102; // [rsp+178h] [rbp+38h]
  unsigned int *v103; // [rsp+180h] [rbp+40h]
  __int64 v104; // [rsp+188h] [rbp+48h]
  char *v105; // [rsp+190h] [rbp+50h]
  __int64 v106; // [rsp+198h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp+60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v108; // [rsp+1B0h] [rbp+70h] BYREF
  char *v109; // [rsp+1C0h] [rbp+80h]
  __int64 v110; // [rsp+1C8h] [rbp+88h]
  char *v111; // [rsp+1D0h] [rbp+90h]
  __int64 v112; // [rsp+1D8h] [rbp+98h]
  char *v113; // [rsp+1E0h] [rbp+A0h]
  __int64 v114; // [rsp+1E8h] [rbp+A8h]
  char *v115; // [rsp+1F0h] [rbp+B0h]
  __int64 v116; // [rsp+1F8h] [rbp+B8h]
  char *v117; // [rsp+200h] [rbp+C0h]
  __int64 v118; // [rsp+208h] [rbp+C8h]
  unsigned int *v119; // [rsp+210h] [rbp+D0h]
  __int64 v120; // [rsp+218h] [rbp+D8h]
  char *v121; // [rsp+220h] [rbp+E0h]
  __int64 v122; // [rsp+228h] [rbp+E8h]
  char *v123; // [rsp+230h] [rbp+F0h]
  __int64 v124; // [rsp+238h] [rbp+F8h]
  char *v125; // [rsp+240h] [rbp+100h]
  __int64 v126; // [rsp+248h] [rbp+108h]
  unsigned __int64 *v127; // [rsp+250h] [rbp+110h]
  __int64 v128; // [rsp+258h] [rbp+118h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v129; // [rsp+260h] [rbp+120h]
  __int64 v130; // [rsp+268h] [rbp+128h]
  unsigned int *v131; // [rsp+270h] [rbp+130h]
  __int64 v132; // [rsp+278h] [rbp+138h]
  unsigned int *v133; // [rsp+280h] [rbp+140h]
  __int64 v134; // [rsp+288h] [rbp+148h]
  unsigned int *v135; // [rsp+290h] [rbp+150h]
  __int64 v136; // [rsp+298h] [rbp+158h]
  unsigned int *v137; // [rsp+2A0h] [rbp+160h]
  __int64 v138; // [rsp+2A8h] [rbp+168h]
  unsigned __int64 *v139; // [rsp+2B0h] [rbp+170h]
  __int64 v140; // [rsp+2B8h] [rbp+178h]
  unsigned __int64 *v141; // [rsp+2C0h] [rbp+180h]
  __int64 v142; // [rsp+2C8h] [rbp+188h]
  unsigned __int64 *v143; // [rsp+2D0h] [rbp+190h]
  __int64 v144; // [rsp+2D8h] [rbp+198h]
  unsigned __int64 *v145; // [rsp+2E0h] [rbp+1A0h]
  __int64 v146; // [rsp+2E8h] [rbp+1A8h]
  unsigned __int64 *v147; // [rsp+2F0h] [rbp+1B0h]
  __int64 v148; // [rsp+2F8h] [rbp+1B8h]
  unsigned __int64 *v149; // [rsp+300h] [rbp+1C0h]
  __int64 v150; // [rsp+308h] [rbp+1C8h]
  unsigned __int64 *v151; // [rsp+310h] [rbp+1D0h]
  __int64 v152; // [rsp+318h] [rbp+1D8h]
  unsigned __int64 *v153; // [rsp+320h] [rbp+1E0h]
  __int64 v154; // [rsp+328h] [rbp+1E8h]
  signed __int64 *v155; // [rsp+330h] [rbp+1F0h]
  __int64 v156; // [rsp+338h] [rbp+1F8h]
  char *v157; // [rsp+340h] [rbp+200h]
  __int64 v158; // [rsp+348h] [rbp+208h]
  char *v159; // [rsp+350h] [rbp+210h]
  __int64 v160; // [rsp+358h] [rbp+218h]
  unsigned __int64 v161; // [rsp+3D8h] [rbp+298h] BYREF

  v161 = a4;
  v13 = a8;
  v14 = a4;
  v88 = a2;
  v81 = a3;
  if ( a8 >= a3 )
  {
    if ( a8 )
    {
      if ( *((_QWORD *)this + 392) )
      {
        if ( *((double *)this + 393) != 0.0 )
        {
          Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
          if ( Scenario )
          {
            if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 15) + 8LL) != *(_QWORD *)(*((_QWORD *)g_pComposition + 15)
                                                                                  + 16LL) )
            {
              if ( CTelemetryComputeScribbleAggregator::TryPopDataForInteraction(
                     a12,
                     (struct ComputeScribbleLatencyData *)&v92) )
              {
                a6 = v93;
                v13 = v95;
                *((_DWORD *)Scenario + 10) = 1;
              }
              v14 = v161;
              v17 = v81;
            }
            v18 = v17;
            if ( !v17 )
              v18 = v14;
            v96 = v18;
            v19 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v18, v13);
            v22 = v19;
            if ( v19 >= 0xFFFF )
              v22 = -1;
            if ( v21 )
              CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v20, v21, v14);
            v23 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v14, a5);
            v25 = v23;
            if ( v23 >= 0xFFFF )
              v25 = -1;
            v26 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v24, a5, a6);
            v29 = v26;
            if ( v26 >= 0xFFFF )
              v29 = -1;
            v32 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v27, a6, v28);
            if ( v32 >= 0xFFFF )
              LOWORD(v32) = -1;
            v33 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v30, v31, v13);
            if ( v33 >= 0xFFFF )
              LOWORD(v33) = -1;
            v35 = v22;
            v89 = 0LL;
            v90 = 0LL;
            v91 = 0LL;
            v36 = *((_DWORD *)Scenario + 30) == 0;
            v37 = v29;
            v38 = (unsigned __int16)v33;
            v89 = __PAIR64__(v34, v35);
            LODWORD(v90) = v25;
            HIDWORD(v90) = v37;
            LODWORD(v91) = (unsigned __int16)v32;
            HIDWORD(v91) = (unsigned __int16)v33;
            if ( v36 )
            {
              CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 120, &v89);
            }
            else
            {
              v92 = v35 + *((_DWORD *)Scenario + 43);
              v39 = v34 + *((_DWORD *)Scenario + 44);
              v93 = 0LL;
              HIDWORD(v92) = v39;
              v40 = v25 + *((_DWORD *)Scenario + 45);
              v94 = 0LL;
              LODWORD(v93) = v40;
              HIDWORD(v93) = v37 + *((_DWORD *)Scenario + 46);
              LODWORD(v94) = (unsigned __int16)v32 + *((_DWORD *)Scenario + 47);
              HIDWORD(v94) = (unsigned __int16)v33 + *((_DWORD *)Scenario + 48);
              CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 172, &v92);
              CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
                (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 148),
                (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v89);
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xxxxxxxqqqqqqqqqxqnt(
                (_DWORD)Scenario + 52,
                v38 + (unsigned __int16)v32,
                v88,
                v81,
                v161,
                a5,
                a6,
                v41,
                v13,
                v25 + v42,
                v38 + v32,
                v42,
                v25,
                v37,
                v32,
                v38,
                a10,
                a11,
                a13,
                *((_DWORD *)Scenario + 12));
            v43 = (double)(int)a9;
            if ( a9 < 0 )
              v43 = v43 + 1.844674407370955e19;
            v44 = v43 * 1.5;
            v45 = 0LL;
            if ( v44 >= 9.223372036854776e18 )
            {
              v44 = v44 - 9.223372036854776e18;
              if ( v44 < 9.223372036854776e18 )
                v45 = 0x8000000000000000uLL;
            }
            v46 = v45 + (unsigned int)(int)v44;
            if ( *((_QWORD *)Scenario + 13) == a13 && v81 && a6 - v81 > v46 )
            {
              *((_BYTE *)Scenario + 144) = 1;
              if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
              {
                v49 = (const WCHAR *)*((_QWORD *)Scenario + 1);
                v99 = (char *)Scenario + 48;
                v82 = *((_DWORD *)Scenario + 13);
                v101 = &v82;
                v83 = *((_DWORD *)Scenario + 14);
                v103 = &v83;
                v75 = *((_BYTE *)Scenario + 60);
                v105 = &v75;
                v100 = v48;
                v102 = v48;
                v104 = v48;
                v106 = 1LL;
                TlgCreateWsz(&pDesc, v49);
                TlgCreateWsz(&v108, *((LPCWSTR *)Scenario + 2));
                v50 = *((_BYTE *)Scenario + 24);
                v109 = &v76;
                v77 = *((_BYTE *)Scenario + 28);
                v111 = &v77;
                v78 = *((_BYTE *)Scenario + 32);
                v113 = &v78;
                v79 = *((_BYTE *)Scenario + 36);
                v115 = &v79;
                v80[0] = *((_BYTE *)Scenario + 40);
                v117 = v80;
                v119 = &a10;
                v121 = &a11;
                v125 = (char *)Scenario + 44;
                v76 = v50;
                v127 = (unsigned __int64 *)((char *)Scenario + 46);
                v110 = 1LL;
                v112 = 1LL;
                v114 = 1LL;
                v116 = 1LL;
                v118 = 1LL;
                v120 = v51;
                v122 = v51;
                v123 = (char *)Scenario + 104;
                v124 = 8LL;
                v126 = 2LL;
                v128 = 2LL;
                v129 = Scenario;
                v130 = 8LL;
                v84 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v81, a6);
                v131 = &v84;
                v132 = v52;
                v85 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v53, v81, v161);
                v133 = &v85;
                v134 = v54;
                v86 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v55, v161, a5);
                v135 = &v86;
                v136 = v56;
                v87 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v57, a5, a6);
                v137 = &v87;
                v138 = v58;
                v140 = 8LL;
                v142 = 8LL;
                v144 = 8LL;
                v146 = 8LL;
                v148 = 8LL;
                v150 = 8LL;
                v88 = 1000 * (v59 / g_qpcFrequency.QuadPart)
                    + 1000 * (v59 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
                v139 = &v88;
                v141 = &v81;
                v143 = &v161;
                v145 = &a5;
                v147 = &a6;
                v149 = (unsigned __int64 *)&a9;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A66C7, 0LL, 0LL, 0x1Du, &pData);
              }
            }
            else
            {
              v47 = *((_DWORD *)Scenario + 61);
              if ( v47 )
              {
                if ( a10 == v47 + 1 && *((_QWORD *)Scenario + 28) - *((_QWORD *)Scenario + 29) > v46 )
                {
                  ++*((_WORD *)Scenario + 98);
                  if ( hProvider > 4u )
                  {
                    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
                    {
                      v61 = (const WCHAR *)*((_QWORD *)Scenario + 1);
                      v99 = (char *)Scenario + 48;
                      v87 = *((_DWORD *)Scenario + 13);
                      v101 = &v87;
                      v86 = *((_DWORD *)Scenario + 14);
                      v103 = &v86;
                      v80[0] = *((_BYTE *)Scenario + 60);
                      v105 = v80;
                      v100 = v60;
                      v102 = v60;
                      v104 = v60;
                      v106 = 1LL;
                      TlgCreateWsz(&pDesc, v61);
                      TlgCreateWsz(&v108, *((LPCWSTR *)Scenario + 2));
                      v62 = *((_BYTE *)Scenario + 24);
                      v109 = &v79;
                      v78 = *((_BYTE *)Scenario + 28);
                      v111 = &v78;
                      v77 = *((_BYTE *)Scenario + 32);
                      v113 = &v77;
                      v76 = *((_BYTE *)Scenario + 36);
                      v115 = &v76;
                      v75 = *((_BYTE *)Scenario + 40);
                      v117 = &v75;
                      v119 = &a10;
                      v123 = &a11;
                      v127 = &a13;
                      v129 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 44);
                      v79 = v62;
                      v121 = (char *)Scenario + 244;
                      v131 = (unsigned int *)((char *)Scenario + 46);
                      v110 = 1LL;
                      v112 = 1LL;
                      v114 = 1LL;
                      v116 = 1LL;
                      v118 = 1LL;
                      v120 = v63;
                      v122 = v63;
                      v124 = v63;
                      v125 = (char *)Scenario + 104;
                      v126 = 8LL;
                      v128 = 8LL;
                      v130 = 2LL;
                      v132 = 2LL;
                      v133 = (unsigned int *)Scenario;
                      v134 = 8LL;
                      v85 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v96, a6);
                      v135 = &v85;
                      v136 = v64;
                      v84 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v65, v96, v161);
                      v137 = &v84;
                      v138 = v66;
                      v83 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v67, v161, a5);
                      v139 = (unsigned __int64 *)&v83;
                      v140 = v68;
                      v82 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v69, a5, a6);
                      v141 = (unsigned __int64 *)&v82;
                      v142 = v70;
                      v144 = 8LL;
                      v72 = *((_QWORD *)Scenario + 29);
                      v73 = *((_QWORD *)Scenario + 28);
                      v97 = 1000 * (v71 / g_qpcFrequency.QuadPart)
                          + 1000 * (v71 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
                      v143 = &v97;
                      LODWORD(v88) = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v72, v73);
                      v145 = &v88;
                      v147 = &v81;
                      v149 = &v161;
                      v151 = &a5;
                      v153 = &a6;
                      v155 = &a9;
                      v146 = v74;
                      v148 = 8LL;
                      v150 = 8LL;
                      v152 = 8LL;
                      v154 = 8LL;
                      v156 = 8LL;
                      v157 = (char *)Scenario + 232;
                      v158 = 8LL;
                      v159 = (char *)Scenario + 224;
                      v160 = 8LL;
                      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1802A6451, 0LL, 0LL, 0x22u, &pData);
                    }
                  }
                }
              }
            }
            if ( v81 )
              ++*((_WORD *)Scenario + 57);
            ++*((_WORD *)Scenario + 56);
          }
        }
      }
    }
  }
}
