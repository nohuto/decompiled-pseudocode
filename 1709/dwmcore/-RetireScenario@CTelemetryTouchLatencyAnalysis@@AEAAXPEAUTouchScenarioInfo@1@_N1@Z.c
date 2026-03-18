/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x180125EB4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18012A944 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18012CD34 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18012CDB4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_KPEAPEAUTouchUpdateInfo@1@@Z @ 0x18012CE38 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x18012B508 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     McTemplateU0xxqqhhqqxxqqqz @ 0x18012D6F0 (McTemplateU0xxqqhhqqxxqqqz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3,
        char a4)
{
  char v4; // di
  __int64 v7; // rdx
  __int64 QuadPart; // r12
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int16 *v11; // r13
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char v17; // r9
  unsigned int v18; // r10d
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  char v21; // bl
  __int16 v22; // di
  char v23; // al
  int v24; // edx
  char v25; // r10
  char v26; // r11
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // r8
  int v29; // ecx
  LPCWSTR v30; // r11
  LPCGUID v31; // r8
  LPCGUID v32; // r9
  int v33; // ecx
  __int64 v34; // r10
  LPCWSTR v35; // r11
  __int64 v36; // r10
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  _WORD v39[2]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v40[2]; // [rsp+84h] [rbp-7Ch] BYREF
  _WORD v41[2]; // [rsp+88h] [rbp-78h] BYREF
  _WORD v42[2]; // [rsp+8Ch] [rbp-74h] BYREF
  _WORD v43[2]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v44[2]; // [rsp+94h] [rbp-6Ch] BYREF
  _WORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  _WORD v46[2]; // [rsp+9Ch] [rbp-64h] BYREF
  _WORD v47[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A4h] [rbp-5Ch] BYREF
  int v49; // [rsp+A8h] [rbp-58h] BYREF
  int v50; // [rsp+ACh] [rbp-54h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+F0h] [rbp-10h] BYREF
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  _WORD *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+130h] [rbp+30h] BYREF
  char *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  char *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  char *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  char *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  char *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  char *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  char *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  _WORD *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  _WORD *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]
  _WORD *v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+1E8h] [rbp+E8h]
  _WORD *v84; // [rsp+1F0h] [rbp+F0h]
  __int64 v85; // [rsp+1F8h] [rbp+F8h]
  _WORD *v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]
  char *v88; // [rsp+210h] [rbp+110h]
  __int64 v89; // [rsp+218h] [rbp+118h]
  char *v90; // [rsp+220h] [rbp+120h]
  __int64 v91; // [rsp+228h] [rbp+128h]
  char *v92; // [rsp+230h] [rbp+130h]
  __int64 v93; // [rsp+238h] [rbp+138h]
  char *v94; // [rsp+240h] [rbp+140h]
  __int64 v95; // [rsp+248h] [rbp+148h]
  char *v96; // [rsp+250h] [rbp+150h]
  __int64 v97; // [rsp+258h] [rbp+158h]
  _WORD *v98; // [rsp+260h] [rbp+160h]
  __int64 v99; // [rsp+268h] [rbp+168h]
  _WORD *v100; // [rsp+270h] [rbp+170h]
  __int64 v101; // [rsp+278h] [rbp+178h]
  char *v102; // [rsp+280h] [rbp+180h]
  __int64 v103; // [rsp+288h] [rbp+188h]
  char *v104; // [rsp+290h] [rbp+190h]
  __int64 v105; // [rsp+298h] [rbp+198h]
  char *v106; // [rsp+2A0h] [rbp+1A0h]
  __int64 v107; // [rsp+2A8h] [rbp+1A8h]
  char *v108; // [rsp+2B0h] [rbp+1B0h]
  __int64 v109; // [rsp+2B8h] [rbp+1B8h]
  int *v110; // [rsp+2C0h] [rbp+1C0h]
  __int64 v111; // [rsp+2C8h] [rbp+1C8h]
  char *v112; // [rsp+2D0h] [rbp+1D0h]
  __int64 v113; // [rsp+2D8h] [rbp+1D8h]
  char *v114; // [rsp+2E0h] [rbp+1E0h]
  __int64 v115; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v116; // [rsp+2F0h] [rbp+1F0h]
  __int64 v117; // [rsp+2F8h] [rbp+1F8h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v118; // [rsp+300h] [rbp+200h]
  __int64 v119; // [rsp+308h] [rbp+208h]
  char *v120; // [rsp+310h] [rbp+210h]
  __int64 v121; // [rsp+318h] [rbp+218h]
  char *v122; // [rsp+320h] [rbp+220h]
  __int64 v123; // [rsp+328h] [rbp+228h]
  char *v124; // [rsp+330h] [rbp+230h]
  __int64 v125; // [rsp+338h] [rbp+238h]
  char v126; // [rsp+3A8h] [rbp+2A8h] BYREF

  v126 = a4;
  LOBYTE(v39[0]) = a3;
  v4 = a3;
  if ( *((_QWORD *)a2 + 1) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v7 = *((_QWORD *)a2 + 7);
    QuadPart = PerformanceCount.QuadPart;
    v42[0] = 0;
    v41[0] = 0;
    if ( v7 )
    {
      v9 = PerformanceCount.QuadPart;
      if ( *((_QWORD *)a2 + 8) )
        v9 = *((_QWORD *)a2 + 8);
      v42[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v7, v9);
    }
    v10 = *((_QWORD *)a2 + 8);
    if ( v10 )
      v41[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v10, QuadPart);
    v11 = (unsigned __int16 *)((char *)a2 + 96);
    v40[0] = 0;
    v43[0] = 0;
    v44[0] = 0;
    v45[0] = 0;
    v46[0] = 0;
    if ( *((_WORD *)a2 + 48) > 1u )
    {
      v12 = *v11 - 1;
      v40[0] = *((_DWORD *)a2 + 25) / v12;
      v43[0] = *((_DWORD *)a2 + 26) / v12;
      v44[0] = *((_DWORD *)a2 + 27) / v12;
      v45[0] = *((_DWORD *)a2 + 28) / v12;
      v46[0] = *((_DWORD *)a2 + 29) / v12;
    }
    v13 = *((_DWORD *)a2 + 38);
    v14 = *((_DWORD *)a2 + 37);
    if ( v13 <= v14 || (v15 = v13 - v14, v16 = *((unsigned __int16 *)a2 + 72), v16 > v15) )
    {
      v17 = 0;
      v18 = 0;
    }
    else
    {
      v17 = 1;
      v18 = 100 * v16 / v15;
    }
    v19 = *((_QWORD *)this + 276);
    v47[0] = 0;
    if ( v19 )
    {
      v47[0] = 0x989680 / v19;
      if ( v17 )
        *((_WORD *)a2 + 78) = (100 - v18) * (0x989680uLL / (unsigned int)v19) / 0x64;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v20 = *((_QWORD *)a2 + 11);
      v21 = v4;
      v22 = *v11;
      v23 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *((_QWORD *)a2 + 6), QuadPart);
      McTemplateU0xxqqhhqqxxqqqz(
        *((_DWORD *)a2 + 9),
        v24,
        *(_QWORD *)a2,
        (_DWORD)a2,
        *((_DWORD *)a2 + 18),
        *((_DWORD *)a2 + 19),
        *((_WORD *)a2 + 16),
        *((_WORD *)a2 + 17),
        v23,
        v22,
        v20,
        v25,
        v21,
        v26,
        *((_DWORD *)a2 + 9),
        *((_QWORD *)a2 + 1));
      QuadPart = PerformanceCount.QuadPart;
      v4 = v39[0];
    }
    if ( *v11 && *(_QWORD *)a2 && *(_QWORD *)a2 != 0xDDEECCCCDDEE0001uLL )
    {
      ConvertTelemetryInteractionTypeToString(*((_DWORD *)a2 + 19));
      if ( (v28 > v27
         || *((_WORD *)a2 + 60) > v27
         || *((_WORD *)a2 + 65) > v27
         || *((unsigned __int16 *)a2 + 70) + (unsigned int)*((unsigned __int16 *)a2 + 83) > 1
         || *((_DWORD *)a2 + 40))
        && (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                           this,
                           *((_QWORD *)this + 275),
                           QuadPart) >= 0x1388 )
      {
        *((_QWORD *)this + 275) = QuadPart;
        if ( dword_18026D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7F0, 0x400000000002uLL) )
        {
          TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
          TlgCreateWsz(&v54, *((LPCWSTR *)a2 + 2));
          v29 = *((_DWORD *)a2 + 6);
          v55 = &v48;
          v39[0] = *((_WORD *)a2 + 36);
          v57 = v39;
          v49 = *((_DWORD *)a2 + 7);
          v48 = v29;
          v59 = &v49;
          v56 = 4LL;
          v58 = 2LL;
          v60 = 4LL;
          TlgCreateWsz(&v61, v30);
          v63 = 2LL;
          v64 = (char *)a2 + 32;
          v62 = (char *)a2 + 80;
          v66 = (char *)a2 + 34;
          v68 = (char *)a2 + 130;
          v70 = (char *)a2 + 132;
          v72 = (char *)a2 + 134;
          v74 = (char *)a2 + 136;
          v76 = (char *)a2 + 138;
          v78 = v40;
          v80 = v43;
          v82 = v44;
          v84 = v45;
          v86 = v46;
          v88 = (char *)a2 + 120;
          v90 = (char *)a2 + 122;
          v92 = (char *)a2 + 124;
          v94 = (char *)a2 + 126;
          v96 = (char *)a2 + 128;
          v98 = v42;
          v65 = 2LL;
          v67 = 2LL;
          v69 = 2LL;
          v71 = 2LL;
          v73 = 2LL;
          v75 = 2LL;
          v77 = 2LL;
          v79 = 2LL;
          v81 = 2LL;
          v83 = 2LL;
          v85 = 2LL;
          v87 = 2LL;
          v89 = 2LL;
          v91 = 2LL;
          v93 = 2LL;
          v95 = 2LL;
          v97 = 2LL;
          v99 = 2LL;
          v101 = 2LL;
          v100 = v41;
          v104 = (char *)a2 + 156;
          v106 = (char *)a2 + 140;
          v108 = (char *)a2 + 166;
          v50 = *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
          v110 = &v50;
          v112 = (char *)a2 + 144;
          v114 = (char *)a2 + 142;
          v116 = v47;
          v120 = &v126;
          v122 = (char *)a2 + 164;
          v124 = (char *)a2 + 160;
          v102 = (char *)a2 + 96;
          v103 = 2LL;
          v105 = 2LL;
          v107 = 2LL;
          v109 = 2LL;
          v111 = 4LL;
          v113 = 2LL;
          v115 = 2LL;
          v117 = 2LL;
          v118 = a2;
          v119 = 8LL;
          v121 = 1LL;
          v123 = 2LL;
          v125 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7F0, &unk_1802122A2, v31, v32, 0x28u, &pData);
        }
      }
      else if ( dword_18026D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7F0, 2uLL) )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
        TlgCreateWsz(&v54, *((LPCWSTR *)a2 + 2));
        v33 = *((_DWORD *)a2 + 6);
        v55 = &v50;
        v39[0] = *((_WORD *)a2 + 36);
        v57 = v39;
        v49 = *((_DWORD *)a2 + 7);
        v50 = v33;
        v59 = &v49;
        v56 = 4LL;
        v58 = v34;
        v60 = 4LL;
        TlgCreateWsz(&v61, v35);
        v63 = v36;
        v64 = (char *)a2 + 32;
        v62 = (char *)a2 + 80;
        v66 = (char *)a2 + 34;
        v68 = (char *)a2 + 130;
        v70 = (char *)a2 + 132;
        v72 = (char *)a2 + 134;
        v74 = (char *)a2 + 136;
        v76 = (char *)a2 + 138;
        v78 = v40;
        v80 = v43;
        v82 = v44;
        v84 = v45;
        v86 = v46;
        v88 = (char *)a2 + 120;
        v90 = (char *)a2 + 122;
        v92 = (char *)a2 + 124;
        v94 = (char *)a2 + 126;
        v96 = (char *)a2 + 128;
        v98 = v42;
        v65 = v36;
        v67 = v36;
        v69 = v36;
        v71 = v36;
        v73 = v36;
        v75 = v36;
        v77 = v36;
        v79 = v36;
        v81 = v36;
        v83 = v36;
        v85 = v36;
        v87 = v36;
        v89 = v36;
        v91 = v36;
        v93 = v36;
        v95 = v36;
        v97 = v36;
        v99 = v36;
        v101 = v36;
        v100 = v41;
        v104 = (char *)a2 + 156;
        v106 = (char *)a2 + 140;
        v108 = (char *)a2 + 166;
        v48 = *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
        v110 = &v48;
        v112 = (char *)a2 + 144;
        v114 = (char *)a2 + 142;
        v116 = v47;
        v120 = &v126;
        v122 = (char *)a2 + 164;
        v124 = (char *)a2 + 160;
        v102 = (char *)a2 + 96;
        v103 = v36;
        v105 = v36;
        v107 = v36;
        v109 = v36;
        v111 = 4LL;
        v113 = v36;
        v115 = v36;
        v117 = v36;
        v118 = a2;
        v119 = 8LL;
        v121 = 1LL;
        v123 = v36;
        v125 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18026D7F0, &unk_180212014, v37, v38, 0x28u, &pData);
      }
      if ( (unsigned int)(*((_DWORD *)a2 + 18) - 2) <= 4 )
        CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(this, a2, v42[0] + v41[0]);
    }
    *((_DWORD *)a2 + 10) = 0;
    if ( v4 )
    {
      WPF::ProcessHeapImpl::Free(*((void **)a2 + 1));
      memset_0(a2, 0, 0xC0uLL);
      if ( *(_DWORD *)this )
        --*(_DWORD *)this;
    }
  }
}
