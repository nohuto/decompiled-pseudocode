/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x1800C3144
 * Callers:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18002897C (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 * Callees:
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x180024394 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18002794C (-QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180027F00 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     _TlgCreateWsz @ 0x1800B1408 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     Template_xxxxxxxqqqqqqqx @ 0x180141C48 (Template_xxxxxxxqqqqqqqx.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        signed __int64 a9,
        unsigned int a10,
        char a11,
        unsigned __int64 a12)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rbx
  __int64 v16; // r11
  __int64 v17; // r12
  CTelemetryTouchLatencyAnalysis *v18; // rcx
  CTelemetryTouchLatencyAnalysis *v19; // rcx
  CTelemetryTouchLatencyAnalysis *v20; // rcx
  CTelemetryTouchLatencyAnalysis *v21; // rcx
  __int64 v22; // r11
  unsigned int v23; // r8d
  unsigned int v24; // r10d
  unsigned __int16 v25; // dx
  unsigned int v26; // r9d
  unsigned int v27; // ecx
  unsigned __int16 v28; // ax
  bool v29; // cf
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  int v33; // eax
  double v34; // xmm2_8
  double v35; // xmm0_8
  __int16 v36; // cx
  __int16 v37; // ax
  __int16 v38; // cx
  __int16 v39; // ax
  __int64 v40; // rax
  double v41; // xmm2_8
  double v42; // xmm0_8
  int v43; // ecx
  const wchar_t *v44; // rsi
  unsigned int v45; // ecx
  __int64 v46; // r10
  __int64 v47; // r11
  __int64 v48; // r10
  __int64 v49; // r11
  __int64 v50; // r10
  CTelemetryTouchLatencyAnalysis *v51; // rcx
  __int64 v52; // r10
  CTelemetryTouchLatencyAnalysis *v53; // rcx
  __int64 v54; // r10
  LPCGUID v55; // r8
  LPCGUID v56; // r9
  CTelemetryTouchLatencyAnalysis *v57; // rcx
  char v58; // al
  int v59; // edx
  char v60; // r9
  char v61; // r10
  char v62; // r11
  unsigned int v63; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v64; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned int v65; // [rsp+98h] [rbp-78h] BYREF
  unsigned int v66; // [rsp+9Ch] [rbp-74h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+A0h] [rbp-70h] BYREF
  int v68; // [rsp+A8h] [rbp-68h] BYREF
  int v69; // [rsp+ACh] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+E0h] [rbp-30h] BYREF
  unsigned int *v73; // [rsp+F0h] [rbp-20h]
  __int64 v74; // [rsp+F8h] [rbp-18h]
  unsigned int *v75; // [rsp+100h] [rbp-10h]
  __int64 v76; // [rsp+108h] [rbp-8h]
  unsigned int *v77; // [rsp+110h] [rbp+0h]
  __int64 v78; // [rsp+118h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+120h] [rbp+10h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v80; // [rsp+130h] [rbp+20h]
  __int64 v81; // [rsp+138h] [rbp+28h]
  unsigned int *v82; // [rsp+140h] [rbp+30h]
  __int64 v83; // [rsp+148h] [rbp+38h]
  char *v84; // [rsp+150h] [rbp+40h]
  __int64 v85; // [rsp+158h] [rbp+48h]
  unsigned __int64 *v86; // [rsp+160h] [rbp+50h]
  __int64 v87; // [rsp+168h] [rbp+58h]
  char *v88; // [rsp+170h] [rbp+60h]
  __int64 v89; // [rsp+178h] [rbp+68h]
  char *v90; // [rsp+180h] [rbp+70h]
  __int64 v91; // [rsp+188h] [rbp+78h]
  unsigned int *v92; // [rsp+190h] [rbp+80h]
  __int64 v93; // [rsp+198h] [rbp+88h]
  int *v94; // [rsp+1A0h] [rbp+90h]
  __int64 v95; // [rsp+1A8h] [rbp+98h]
  int *v96; // [rsp+1B0h] [rbp+A0h]
  __int64 v97; // [rsp+1B8h] [rbp+A8h]

  PerformanceCount.QuadPart = a2;
  if ( a8 >= a3 )
  {
    if ( *((_QWORD *)this + 283) )
    {
      if ( *((double *)this + 284) != 0.0 )
      {
        Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
        if ( Scenario )
        {
          v17 = a3;
          if ( !a3 )
            v17 = a4;
          v65 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v17, v16);
          v63 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v18, v17, a5);
          CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v19, a5, a6);
          v64 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v20, a6, a7);
          v23 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v21, a7, v22);
          v66 = v23;
          v25 = -1;
          if ( *((_WORD *)Scenario + 65) )
          {
            *((_DWORD *)Scenario + 27) += v24;
            *((_DWORD *)Scenario + 29) += v23;
            v26 = v65;
            *((_DWORD *)Scenario + 25) += v65;
            v27 = v64;
            *((_DWORD *)Scenario + 28) += v64;
            *((_DWORD *)Scenario + 26) += v63;
            v28 = -1;
            if ( v26 < 0xFFFF )
              v28 = v26;
            if ( *((_WORD *)Scenario + 60) > v28 )
              v28 = *((_WORD *)Scenario + 60);
            v29 = v63 < 0xFFFF;
            *((_WORD *)Scenario + 60) = v28;
            v30 = -1;
            if ( v29 )
              v30 = v63;
            if ( *((_WORD *)Scenario + 61) > v30 )
              v30 = *((_WORD *)Scenario + 61);
            *((_WORD *)Scenario + 61) = v30;
            v31 = -1;
            if ( v24 < 0xFFFF )
              v31 = v24;
            if ( *((_WORD *)Scenario + 62) > v31 )
              v31 = *((_WORD *)Scenario + 62);
            *((_WORD *)Scenario + 62) = v31;
            v32 = -1;
            if ( v27 < 0xFFFF )
              v32 = v27;
            if ( *((_WORD *)Scenario + 63) > v32 )
              v32 = *((_WORD *)Scenario + 63);
            *((_WORD *)Scenario + 63) = v32;
            if ( v23 < 0xFFFF )
              v25 = v23;
            if ( *((_WORD *)Scenario + 64) > v25 )
              v25 = *((_WORD *)Scenario + 64);
            *((_WORD *)Scenario + 64) = v25;
          }
          else
          {
            v36 = -1;
            v37 = -1;
            if ( v65 < 0xFFFF )
              v36 = v65;
            v29 = v63 < 0xFFFF;
            *((_WORD *)Scenario + 65) = v36;
            v38 = -1;
            if ( v29 )
              v38 = v63;
            *((_WORD *)Scenario + 66) = v38;
            if ( v24 < 0xFFFF )
              v37 = v24;
            v29 = v64 < 0xFFFF;
            *((_WORD *)Scenario + 67) = v37;
            v39 = -1;
            if ( v29 )
              v39 = v64;
            *((_WORD *)Scenario + 68) = v39;
            if ( v23 < 0xFFFF )
              v25 = v23;
            *((_WORD *)Scenario + 69) = v25;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, a4, a5);
            v58 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v57, v17, a4);
            Template_xxxxxxxqqqqqqqx(
              v64,
              v59,
              PerformanceCount.LowPart,
              a3,
              a4,
              a5,
              a6,
              a7,
              v62,
              v58,
              v60,
              v61,
              v64,
              v66,
              a10,
              a11,
              a12);
          }
          if ( *((_QWORD *)Scenario + 11) == a12 && a3 )
          {
            v34 = (double)((int)a6 - (int)a3);
            if ( (__int64)(a6 - a3) < 0 )
              v34 = v34 + 1.844674407370955e19;
            v35 = (double)(int)a9;
            if ( a9 < 0 )
              v35 = v35 + 1.844674407370955e19;
            if ( v34 > v35 * 1.5 )
              goto LABEL_59;
          }
          v33 = *((_DWORD *)Scenario + 49);
          if ( v33 && a10 == v33 + 1 )
          {
            v40 = *((_QWORD *)Scenario + 22) - *((_QWORD *)Scenario + 23);
            v41 = (double)(int)v40;
            if ( v40 < 0 )
              v41 = v41 + 1.844674407370955e19;
            v42 = (double)(int)a9;
            if ( a9 < 0 )
              v42 = v42 + 1.844674407370955e19;
            if ( v41 > v42 * 1.5 )
            {
LABEL_59:
              v43 = *((_DWORD *)Scenario + 19);
              ++*((_WORD *)Scenario + 85);
              PerformanceCount.QuadPart = 0LL;
              v44 = ConvertTelemetryInteractionTypeToString(v43);
              QueryPerformanceCounter(&PerformanceCount);
              if ( hProvider > 4u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 2uLL) )
                {
                  TlgCreateWsz(&pDesc, *((LPCWSTR *)Scenario + 1));
                  TlgCreateWsz(&v72, *((LPCWSTR *)Scenario + 2));
                  v45 = *((_DWORD *)Scenario + 6);
                  v73 = &v66;
                  v65 = *((_DWORD *)Scenario + 7);
                  v75 = &v65;
                  LOWORD(v63) = *((_WORD *)Scenario + 36);
                  v66 = v45;
                  v77 = &v63;
                  v74 = v46;
                  v76 = v46;
                  v78 = v47;
                  TlgCreateWsz(&v79, v44);
                  v82 = &a10;
                  v80 = Scenario;
                  v84 = &a11;
                  v81 = 8LL;
                  v86 = &a12;
                  v88 = (char *)Scenario + 32;
                  v90 = (char *)Scenario + 34;
                  v83 = v48;
                  v85 = v48;
                  v87 = 8LL;
                  v89 = v49;
                  v91 = v49;
                  v64 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                          this,
                          v17,
                          PerformanceCount.QuadPart);
                  v92 = &v64;
                  v93 = v50;
                  v68 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                          v51,
                          a5,
                          PerformanceCount.QuadPart);
                  v95 = v52;
                  v94 = &v68;
                  v69 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v53, v17, a5);
                  v96 = &v69;
                  v97 = v54;
                  TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801F5DEF, v55, v56, 0x11u, &pData);
                }
              }
            }
          }
          ++*((_WORD *)Scenario + 48);
        }
      }
    }
  }
}
