/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4
 * Callers:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180027EA8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180027F3C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x1800286B0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_TELEMETRY_UPDATE_INFO@@_KAEB_K@Z @ 0x1800C3638 (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAPEAUTouchUpdateInfo@1@PEBUTOUCH_T.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x18013B998 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x180024394 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     Template_xxqqhhqqxxqqz @ 0x18014189C (Template_xxqqhhqqxxqqz.c)
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
  __int64 v9; // rdx
  unsigned __int16 *v10; // r13
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char v13; // r9
  unsigned int v14; // r11d
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned __int16 v18; // dx
  const wchar_t *v19; // rsi
  unsigned int v20; // r9d
  unsigned __int16 v21; // r10
  unsigned __int16 v22; // r8
  int v23; // ecx
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r8d
  __int64 v29; // r8
  __int64 v30; // rsi
  char v31; // bl
  __int16 v32; // di
  char v33; // al
  int v34; // edx
  char v35; // r10
  char v36; // r11
  int v37; // ecx
  __int64 v38; // r11
  __int64 v39; // r11
  LPCGUID v40; // r8
  LPCGUID v41; // r9
  bool v42; // zf
  _WORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  _WORD v44[2]; // [rsp+84h] [rbp-7Ch] BYREF
  _WORD v45[2]; // [rsp+88h] [rbp-78h] BYREF
  _WORD v46[2]; // [rsp+8Ch] [rbp-74h] BYREF
  _WORD v47[2]; // [rsp+90h] [rbp-70h] BYREF
  _WORD v48[2]; // [rsp+94h] [rbp-6Ch] BYREF
  _WORD v49[2]; // [rsp+98h] [rbp-68h] BYREF
  _WORD v50[2]; // [rsp+9Ch] [rbp-64h] BYREF
  _WORD v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v52; // [rsp+A4h] [rbp-5Ch] BYREF
  int v53; // [rsp+A8h] [rbp-58h] BYREF
  int v54; // [rsp+ACh] [rbp-54h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+F0h] [rbp-10h] BYREF
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  _WORD *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+130h] [rbp+30h] BYREF
  char *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  char *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  char *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  char *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  char *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  char *v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  char *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  char *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  _WORD *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  _WORD *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  _WORD *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  _WORD *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  _WORD *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  char *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  char *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  char *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  char *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  char *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  _WORD *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  _WORD *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  char *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  char *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  char *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  char *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  int *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  char *v116; // [rsp+2D0h] [rbp+1D0h]
  __int64 v117; // [rsp+2D8h] [rbp+1D8h]
  char *v118; // [rsp+2E0h] [rbp+1E0h]
  __int64 v119; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v120; // [rsp+2F0h] [rbp+1F0h]
  __int64 v121; // [rsp+2F8h] [rbp+1F8h]
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v122; // [rsp+300h] [rbp+200h]
  __int64 v123; // [rsp+308h] [rbp+208h]
  char *v124; // [rsp+310h] [rbp+210h]
  __int64 v125; // [rsp+318h] [rbp+218h]
  char *v126; // [rsp+320h] [rbp+220h]
  __int64 v127; // [rsp+328h] [rbp+228h]
  char *v128; // [rsp+330h] [rbp+230h]
  __int64 v129; // [rsp+338h] [rbp+238h]
  char v130; // [rsp+3B8h] [rbp+2B8h] BYREF

  v130 = a4;
  LOBYTE(v44[0]) = a3;
  v4 = a3;
  if ( !*((_QWORD *)a2 + 1) )
    return;
  QueryPerformanceCounter(&PerformanceCount);
  v7 = *((_QWORD *)a2 + 7);
  QuadPart = PerformanceCount.QuadPart;
  v43[0] = 0;
  v46[0] = 0;
  if ( v7 )
  {
    v29 = PerformanceCount.QuadPart;
    if ( *((_QWORD *)a2 + 8) )
      v29 = *((_QWORD *)a2 + 8);
    v43[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v7, v29);
  }
  v9 = *((_QWORD *)a2 + 8);
  if ( v9 )
    v46[0] = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v9, QuadPart);
  v10 = (unsigned __int16 *)((char *)a2 + 96);
  v45[0] = 0;
  v47[0] = 0;
  v48[0] = 0;
  v49[0] = 0;
  v50[0] = 0;
  if ( *((_WORD *)a2 + 48) > 1u )
  {
    v27 = *v10 - 1;
    v45[0] = *((_DWORD *)a2 + 25) / v27;
    v47[0] = *((_DWORD *)a2 + 26) / v27;
    v48[0] = *((_DWORD *)a2 + 27) / v27;
    v49[0] = *((_DWORD *)a2 + 28) / v27;
    v50[0] = *((_DWORD *)a2 + 29) / v27;
  }
  v11 = *((_DWORD *)a2 + 38);
  v12 = *((_DWORD *)a2 + 37);
  if ( v11 <= v12 || (v16 = v11 - v12, v17 = *((unsigned __int16 *)a2 + 72), v17 > v16) )
  {
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v13 = 1;
    v14 = 100 * v17 / v16;
  }
  v15 = *((_QWORD *)this + 286);
  v51[0] = 0;
  if ( v15 )
  {
    v51[0] = 0x989680 / v15;
    if ( v13 )
      *((_WORD *)a2 + 78) = (100 - v14) * (0x989680uLL / (unsigned int)v15) / 0x64;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v30 = *((_QWORD *)a2 + 11);
    v31 = v4;
    v32 = *v10;
    v33 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *((_QWORD *)a2 + 6), QuadPart);
    Template_xxqqhhqqxxqqz(
      *((_QWORD *)a2 + 1),
      v34,
      (_DWORD)a2,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 18),
      *((_DWORD *)a2 + 19),
      *((_WORD *)a2 + 16),
      *((_WORD *)a2 + 17),
      v33,
      v32,
      v30,
      v35,
      v31,
      v36,
      *((_QWORD *)a2 + 1));
    QuadPart = PerformanceCount.QuadPart;
    v4 = v44[0];
  }
  if ( !*v10 || !*(_QWORD *)a2 || *(_QWORD *)a2 == 0xDDEECCCCDDEE0001uLL )
    goto LABEL_15;
  v19 = ConvertTelemetryInteractionTypeToString(*((_DWORD *)a2 + 19));
  if ( (v22 > v18
     || *((_WORD *)a2 + 60) > v18
     || *((_WORD *)a2 + 65) > v18
     || *((unsigned __int16 *)a2 + 70) + (unsigned int)*((unsigned __int16 *)a2 + 85) > v20
     || *((_DWORD *)a2 + 41))
    && (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                       this,
                       *((_QWORD *)this + 285),
                       QuadPart) >= 0x1388 )
  {
    *((_QWORD *)this + 285) = QuadPart;
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000002uLL) )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
      TlgCreateWsz(&v58, *((LPCWSTR *)a2 + 2));
      v23 = *((_DWORD *)a2 + 6);
      v59 = &v52;
      v44[0] = *((_WORD *)a2 + 36);
      v61 = v44;
      v53 = *((_DWORD *)a2 + 7);
      v52 = v23;
      v63 = &v53;
      v60 = 4LL;
      v62 = 2LL;
      v64 = 4LL;
      TlgCreateWsz(&v65, v19);
      v67 = 2LL;
      v68 = (char *)a2 + 32;
      v66 = (char *)a2 + 80;
      v70 = (char *)a2 + 34;
      v72 = (char *)a2 + 130;
      v74 = (char *)a2 + 132;
      v76 = (char *)a2 + 134;
      v78 = (char *)a2 + 136;
      v80 = (char *)a2 + 138;
      v82 = v45;
      v84 = v47;
      v86 = v48;
      v88 = v49;
      v90 = v50;
      v92 = (char *)a2 + 120;
      v94 = (char *)a2 + 122;
      v96 = (char *)a2 + 124;
      v98 = (char *)a2 + 126;
      v100 = (char *)a2 + 128;
      v102 = v43;
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
      v103 = 2LL;
      v105 = 2LL;
      v104 = v46;
      v108 = (char *)a2 + 156;
      v110 = (char *)a2 + 140;
      v112 = (char *)a2 + 170;
      v54 = *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
      v114 = &v54;
      v116 = (char *)a2 + 144;
      v118 = (char *)a2 + 142;
      v120 = v51;
      v124 = &v130;
      v126 = (char *)a2 + 168;
      v128 = (char *)a2 + 164;
      v106 = (char *)a2 + 96;
      v107 = 2LL;
      v109 = 2LL;
      v111 = 2LL;
      v113 = 2LL;
      v115 = 4LL;
      v117 = 2LL;
      v119 = 2LL;
      v121 = 2LL;
      v122 = a2;
      v123 = 8LL;
      v125 = 1LL;
      v127 = 2LL;
      v129 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F6194, v24, v25, 0x28u, &pData);
LABEL_28:
      v21 = v43[0];
    }
  }
  else if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)a2 + 1));
    TlgCreateWsz(&v58, *((LPCWSTR *)a2 + 2));
    v37 = *((_DWORD *)a2 + 6);
    v59 = &v54;
    v44[0] = *((_WORD *)a2 + 36);
    v61 = v44;
    v53 = *((_DWORD *)a2 + 7);
    v54 = v37;
    v63 = &v53;
    v60 = 4LL;
    v62 = v38;
    v64 = 4LL;
    TlgCreateWsz(&v65, v19);
    v67 = v39;
    v68 = (char *)a2 + 32;
    v66 = (char *)a2 + 80;
    v70 = (char *)a2 + 34;
    v72 = (char *)a2 + 130;
    v74 = (char *)a2 + 132;
    v76 = (char *)a2 + 134;
    v78 = (char *)a2 + 136;
    v80 = (char *)a2 + 138;
    v82 = v45;
    v84 = v47;
    v86 = v48;
    v88 = v49;
    v90 = v50;
    v92 = (char *)a2 + 120;
    v94 = (char *)a2 + 122;
    v96 = (char *)a2 + 124;
    v98 = (char *)a2 + 126;
    v100 = (char *)a2 + 128;
    v102 = v43;
    v69 = v39;
    v71 = v39;
    v73 = v39;
    v75 = v39;
    v77 = v39;
    v79 = v39;
    v81 = v39;
    v83 = v39;
    v85 = v39;
    v87 = v39;
    v89 = v39;
    v91 = v39;
    v93 = v39;
    v95 = v39;
    v97 = v39;
    v99 = v39;
    v101 = v39;
    v103 = v39;
    v105 = v39;
    v104 = v46;
    v108 = (char *)a2 + 156;
    v110 = (char *)a2 + 140;
    v112 = (char *)a2 + 170;
    v52 = *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
    v114 = &v52;
    v116 = (char *)a2 + 144;
    v118 = (char *)a2 + 142;
    v120 = v51;
    v124 = &v130;
    v126 = (char *)a2 + 168;
    v128 = (char *)a2 + 164;
    v106 = (char *)a2 + 96;
    v107 = v39;
    v109 = v39;
    v111 = v39;
    v113 = v39;
    v115 = 4LL;
    v117 = v39;
    v119 = v39;
    v121 = v39;
    v122 = a2;
    v123 = 8LL;
    v125 = 1LL;
    v127 = v39;
    v129 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F5F06, v40, v41, 0x28u, &pData);
    goto LABEL_28;
  }
  v26 = *((_DWORD *)this + 508);
  if ( v26 <= 3 )
    goto LABEL_38;
  if ( v26 != 4 )
  {
    if ( v26 != 5 )
    {
      if ( v26 != 6 || *((_DWORD *)a2 + 40) != 256 )
        goto LABEL_15;
      v42 = *((_DWORD *)this + 574) == 257;
      goto LABEL_50;
    }
LABEL_38:
    v28 = v21 + v46[0];
LABEL_39:
    CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(this, a2, v28);
    goto LABEL_15;
  }
  if ( *((_DWORD *)a2 + 40) == 513 && *((_DWORD *)this + 574) == 514 )
    goto LABEL_51;
  v42 = ((*((_DWORD *)this + 574) - 522) & 0xFFFFFFFB) == 0;
LABEL_50:
  if ( v42 )
  {
LABEL_51:
    v28 = v21;
    goto LABEL_39;
  }
LABEL_15:
  *((_DWORD *)a2 + 10) = 0;
  if ( v4 )
  {
    WPF::ProcessHeapImpl::Free(*((void **)a2 + 1));
    memset_0(a2, 0, 0xC8uLL);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
