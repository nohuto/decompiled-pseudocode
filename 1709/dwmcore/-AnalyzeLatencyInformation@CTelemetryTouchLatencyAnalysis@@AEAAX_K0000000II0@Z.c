/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000II0@Z @ 0x18012A9F4
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1800053BC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0002@@@Z @ 0x18012B508 (-ConvertTelemetryInteractionTypeToString@@YAPEAGW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_000.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18012B740 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B914 (-QpcSpanToDurationMicroseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     McTemplateU0xxxxxxxqqqqqqqqqx @ 0x18012DAC0 (McTemplateU0xxxxxxxqqqqqqqqqx.c)
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
        unsigned __int64 a12)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rbx
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // r13
  CTelemetryTouchLatencyAnalysis *v18; // rcx
  CTelemetryTouchLatencyAnalysis *v19; // rcx
  CTelemetryTouchLatencyAnalysis *v20; // rcx
  CTelemetryTouchLatencyAnalysis *v21; // rcx
  unsigned __int64 v22; // r11
  unsigned int v23; // r10d
  unsigned int v24; // r15d
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // ax
  __int16 v27; // cx
  bool v28; // cf
  __int16 v29; // cx
  __int16 v30; // ax
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  unsigned int v33; // r9d
  unsigned __int16 v34; // ax
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // ax
  CTelemetryTouchLatencyAnalysis *v37; // rcx
  char v38; // al
  char v39; // r9
  int v40; // r10d
  char v41; // r11
  int v42; // edx
  unsigned __int64 v43; // r15
  double v44; // xmm2_8
  double v45; // xmm0_8
  int v46; // eax
  __int64 v47; // rax
  double v48; // xmm2_8
  double v49; // xmm0_8
  __int64 v50; // rcx
  const WCHAR *v51; // rsi
  unsigned int v52; // ecx
  __int64 v53; // r10
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r11
  __int64 v57; // r10
  CTelemetryTouchLatencyAnalysis *v58; // rcx
  __int64 v59; // r10
  CTelemetryTouchLatencyAnalysis *v60; // rcx
  __int64 v61; // r10
  CTelemetryTouchLatencyAnalysis *v62; // rcx
  __int64 v63; // r10
  CTelemetryTouchLatencyAnalysis *v64; // rcx
  __int64 v65; // r10
  LPCGUID v66; // r8
  LPCGUID v67; // r9
  char v68; // [rsp+78h] [rbp-A8h]
  unsigned int v69; // [rsp+A0h] [rbp-80h] BYREF
  unsigned int v70; // [rsp+A4h] [rbp-7Ch] BYREF
  unsigned int v71; // [rsp+A8h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v73; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v74; // [rsp+BCh] [rbp-64h] BYREF
  unsigned int v75; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v76; // [rsp+C4h] [rbp-5Ch] BYREF
  unsigned int v77; // [rsp+C8h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+100h] [rbp-20h] BYREF
  unsigned int *v81; // [rsp+110h] [rbp-10h]
  __int64 v82; // [rsp+118h] [rbp-8h]
  unsigned int *v83; // [rsp+120h] [rbp+0h]
  __int64 v84; // [rsp+128h] [rbp+8h]
  unsigned int *v85; // [rsp+130h] [rbp+10h]
  __int64 v86; // [rsp+138h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+140h] [rbp+20h] BYREF
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v88; // [rsp+150h] [rbp+30h]
  __int64 v89; // [rsp+158h] [rbp+38h]
  unsigned int *v90; // [rsp+160h] [rbp+40h]
  __int64 v91; // [rsp+168h] [rbp+48h]
  char *v92; // [rsp+170h] [rbp+50h]
  __int64 v93; // [rsp+178h] [rbp+58h]
  unsigned __int64 *v94; // [rsp+180h] [rbp+60h]
  __int64 v95; // [rsp+188h] [rbp+68h]
  char *v96; // [rsp+190h] [rbp+70h]
  __int64 v97; // [rsp+198h] [rbp+78h]
  char *v98; // [rsp+1A0h] [rbp+80h]
  __int64 v99; // [rsp+1A8h] [rbp+88h]
  unsigned int *v100; // [rsp+1B0h] [rbp+90h]
  __int64 v101; // [rsp+1B8h] [rbp+98h]
  unsigned int *v102; // [rsp+1C0h] [rbp+A0h]
  __int64 v103; // [rsp+1C8h] [rbp+A8h]
  unsigned int *v104; // [rsp+1D0h] [rbp+B0h]
  __int64 v105; // [rsp+1D8h] [rbp+B8h]
  unsigned int *v106; // [rsp+1E0h] [rbp+C0h]
  __int64 v107; // [rsp+1E8h] [rbp+C8h]
  unsigned int *v108; // [rsp+1F0h] [rbp+D0h]
  __int64 v109; // [rsp+1F8h] [rbp+D8h]

  PerformanceCount.QuadPart = a2;
  if ( a8 >= a3 )
  {
    if ( a8 )
    {
      if ( *((_QWORD *)this + 273) )
      {
        if ( *((double *)this + 274) != 0.0 )
        {
          Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
          if ( Scenario )
          {
            v17 = a3;
            if ( !a3 )
              v17 = a4;
            v71 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, v17, v16);
            v69 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v18, v17, a5);
            v70 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v19, a5, a6);
            CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v20, a6, a7);
            v24 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v21, a7, v22);
            v25 = -1;
            v26 = -1;
            if ( *((_WORD *)Scenario + 65) )
            {
              *((_DWORD *)Scenario + 28) += v23;
              *((_DWORD *)Scenario + 29) += v24;
              v31 = v71;
              *((_DWORD *)Scenario + 25) += v71;
              v32 = v69;
              *((_DWORD *)Scenario + 26) += v69;
              v33 = v70;
              *((_DWORD *)Scenario + 27) += v70;
              if ( v31 < 0xFFFF )
                v26 = v31;
              if ( *((_WORD *)Scenario + 60) > v26 )
                v26 = *((_WORD *)Scenario + 60);
              *((_WORD *)Scenario + 60) = v26;
              v34 = -1;
              if ( v32 < 0xFFFF )
                v34 = v32;
              if ( *((_WORD *)Scenario + 61) > v34 )
                v34 = *((_WORD *)Scenario + 61);
              *((_WORD *)Scenario + 61) = v34;
              v35 = -1;
              if ( v33 < 0xFFFF )
                v35 = v33;
              if ( *((_WORD *)Scenario + 62) > v35 )
                v35 = *((_WORD *)Scenario + 62);
              *((_WORD *)Scenario + 62) = v35;
              v36 = -1;
              if ( v23 < 0xFFFF )
                v36 = v23;
              if ( *((_WORD *)Scenario + 63) > v36 )
                v36 = *((_WORD *)Scenario + 63);
              *((_WORD *)Scenario + 63) = v36;
              if ( v24 < 0xFFFF )
                v25 = v24;
              if ( *((_WORD *)Scenario + 64) > v25 )
                v25 = *((_WORD *)Scenario + 64);
              *((_WORD *)Scenario + 64) = v25;
            }
            else
            {
              v27 = -1;
              if ( v71 < 0xFFFF )
                v27 = v71;
              v28 = v69 < 0xFFFF;
              *((_WORD *)Scenario + 65) = v27;
              v29 = -1;
              if ( v28 )
                v29 = v69;
              v28 = v70 < 0xFFFF;
              *((_WORD *)Scenario + 66) = v29;
              if ( v28 )
                v26 = v70;
              *((_WORD *)Scenario + 67) = v26;
              v30 = -1;
              if ( v23 < 0xFFFF )
                v30 = v23;
              *((_WORD *)Scenario + 68) = v30;
              if ( v24 < 0xFFFF )
                v25 = v24;
              *((_WORD *)Scenario + 69) = v25;
            }
            v69 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(this, v17, a4);
            v38 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v37, a4, a5);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v42 = v24 + v40;
              v68 = v24;
              v43 = a5;
              McTemplateU0xxxxxxxqqqqqqqqqx(
                a10,
                v42,
                PerformanceCount.LowPart,
                a3,
                a4,
                a5,
                a6,
                a7,
                v41,
                v38 + v39,
                v42,
                v69,
                v38,
                v70,
                v40,
                v68,
                a10,
                a11,
                a12);
            }
            else
            {
              v43 = a5;
            }
            if ( *((_QWORD *)Scenario + 11) == a12 && a3 )
            {
              v44 = (double)((int)a6 - (int)a3);
              if ( (__int64)(a6 - a3) < 0 )
                v44 = v44 + 1.844674407370955e19;
              v45 = (double)(int)a9;
              if ( a9 < 0 )
                v45 = v45 + 1.844674407370955e19;
              if ( v44 > v45 * 1.5 )
                goto LABEL_58;
            }
            v46 = *((_DWORD *)Scenario + 47);
            if ( v46 && a10 == v46 + 1 )
            {
              v47 = *((_QWORD *)Scenario + 21) - *((_QWORD *)Scenario + 22);
              v48 = (double)(int)v47;
              if ( v47 < 0 )
                v48 = v48 + 1.844674407370955e19;
              v49 = (double)(int)a9;
              if ( a9 < 0 )
                v49 = v49 + 1.844674407370955e19;
              if ( v48 > v49 * 1.5 )
              {
LABEL_58:
                v50 = *((unsigned int *)Scenario + 19);
                ++*((_WORD *)Scenario + 83);
                PerformanceCount.QuadPart = 0LL;
                v51 = (const WCHAR *)ConvertTelemetryInteractionTypeToString(v50);
                QueryPerformanceCounter(&PerformanceCount);
                if ( dword_18026D7F0 > 4u )
                {
                  if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7F0, 2uLL) )
                  {
                    TlgCreateWsz(&pDesc, *((LPCWSTR *)Scenario + 1));
                    TlgCreateWsz(&v80, *((LPCWSTR *)Scenario + 2));
                    v52 = *((_DWORD *)Scenario + 6);
                    v81 = &v69;
                    v71 = *((_DWORD *)Scenario + 7);
                    v83 = &v71;
                    LOWORD(v70) = *((_WORD *)Scenario + 36);
                    v69 = v52;
                    v85 = &v70;
                    v82 = v53;
                    v84 = v53;
                    v86 = v54;
                    TlgCreateWsz(&v87, v51);
                    v90 = &a10;
                    v88 = Scenario;
                    v92 = &a11;
                    v89 = 8LL;
                    v94 = &a12;
                    v96 = (char *)Scenario + 32;
                    v98 = (char *)Scenario + 34;
                    v91 = v55;
                    v93 = v55;
                    v95 = 8LL;
                    v97 = v56;
                    v99 = v56;
                    v73 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                            this,
                            v17,
                            PerformanceCount.QuadPart);
                    v100 = &v73;
                    v101 = v57;
                    v74 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                            v58,
                            v43,
                            PerformanceCount.QuadPart);
                    v103 = v59;
                    v102 = &v74;
                    v75 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v60, v17, a4);
                    v105 = v61;
                    v104 = &v75;
                    v76 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMicroseconds(v62, a4, v43);
                    v107 = v63;
                    v106 = &v76;
                    v77 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(v64, v17, v43);
                    v108 = &v77;
                    v109 = v65;
                    TlgWrite((TraceLoggingHProvider)&dword_18026D7F0, &unk_180211E74, v66, v67, 0x13u, &pData);
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
}
