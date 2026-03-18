/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014CFC4
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180014190 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180014C90 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180014EBC (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800CCAD0 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800CD718 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014DABC (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18014F2AC (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x1801503C0 (McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a5,
        __int16 a6)
{
  wchar_t *v10; // r10
  __int64 v11; // rcx
  bool v12; // al
  unsigned __int16 *v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // r10
  _DWORD *v18; // r8
  __int64 v19; // r10
  _DWORD *v20; // r8
  __int64 v21; // r10
  unsigned __int8 v22; // al
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // ax
  unsigned int v29; // eax
  CTelemetryTouchLatencyAnalysis *v30; // rcx
  __int64 v31; // [rsp+110h] [rbp-80h] BYREF
  __int64 v32; // [rsp+118h] [rbp-78h]
  __int64 v33; // [rsp+120h] [rbp-70h]
  LARGE_INTEGER PerformanceCount; // [rsp+128h] [rbp-68h] BYREF
  _BYTE v35[122]; // [rsp+130h] [rbp-60h] BYREF
  __int64 v36; // [rsp+1AAh] [rbp+1Ah]
  __int16 v37; // [rsp+1B2h] [rbp+22h]
  __int64 v38; // [rsp+1B4h] [rbp+24h]
  __int16 v39; // [rsp+1BCh] [rbp+2Ch]
  _BYTE v40[40]; // [rsp+1C0h] [rbp+30h] BYREF
  __int64 v41; // [rsp+1E8h] [rbp+58h]
  __int64 v42; // [rsp+1F0h] [rbp+60h]
  __int64 v43; // [rsp+1F8h] [rbp+68h]
  __int64 v44; // [rsp+200h] [rbp+70h]
  __int64 v45; // [rsp+208h] [rbp+78h]
  __int64 v46; // [rsp+210h] [rbp+80h]
  _BYTE v47[120]; // [rsp+218h] [rbp+88h] BYREF
  __int64 v48; // [rsp+290h] [rbp+100h]
  __int64 v49; // [rsp+298h] [rbp+108h]
  __int64 v50; // [rsp+2A0h] [rbp+110h]
  int v51; // [rsp+2A8h] [rbp+118h]
  __int16 v52; // [rsp+2ACh] [rbp+11Ch]
  char v53; // [rsp+2AEh] [rbp+11Eh]
  __int64 v54; // [rsp+2B0h] [rbp+120h]
  __int64 v55; // [rsp+2B8h] [rbp+128h]
  __int64 v56; // [rsp+2C0h] [rbp+130h]
  __int64 v57; // [rsp+2C8h] [rbp+138h]
  __int64 v58; // [rsp+2D0h] [rbp+140h]
  __int64 v59; // [rsp+2D8h] [rbp+148h]
  _BYTE v60[120]; // [rsp+2E0h] [rbp+150h] BYREF
  _BYTE v61[68]; // [rsp+358h] [rbp+1C8h] BYREF
  __int64 v62; // [rsp+39Ch] [rbp+20Ch]
  __int64 v63; // [rsp+3A4h] [rbp+214h]
  __int64 v64; // [rsp+3ACh] [rbp+21Ch]
  int v65; // [rsp+3B4h] [rbp+224h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v10 = word_180252860;
    if ( *((_QWORD *)a2 + 1) )
      v10 = (wchar_t *)*((_QWORD *)a2 + 1);
    McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
      *((unsigned __int8 *)a2 + 60),
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ADDTOINTERACTIONSUMMARY_EVENT,
      (_DWORD)v10,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 10),
      *((_BYTE *)a2 + 96),
      *((_WORD *)a2 + 22),
      *((_WORD *)a2 + 23),
      *((_WORD *)a2 + 56),
      *((_DWORD *)a2 + 12));
  }
  v11 = *((_QWORD *)this + 311);
  if ( !v11 )
  {
LABEL_22:
    if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
      return;
    goto LABEL_23;
  }
  if ( *((_DWORD *)a2 + 12) != *((_DWORD *)this + 627) )
    goto LABEL_21;
  v12 = *((_DWORD *)a2 + 13) != *((_DWORD *)this + 628) || *((_DWORD *)a2 + 14) != *((_DWORD *)this + 629);
  if ( v12 || *((_BYTE *)a2 + 60) != *((_BYTE *)this + 2520) )
    goto LABEL_21;
  v13 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  v14 = v11 - (_QWORD)v13;
  do
  {
    v15 = *(unsigned __int16 *)((char *)v13 + v14);
    v16 = *v13 - v15;
    if ( v16 )
      break;
    ++v13;
  }
  while ( v15 );
  if ( v16
    || *((_DWORD *)a2 + 7) != *((_DWORD *)this + 631)
    || *((_DWORD *)a2 + 9) != *((_DWORD *)this + 633)
    || *((_DWORD *)a2 + 8) != *((_DWORD *)this + 632)
    || *((_DWORD *)a2 + 10) != *((_DWORD *)this + 634) )
  {
LABEL_21:
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
    goto LABEL_22;
  }
LABEL_23:
  if ( *((_BYTE *)a2 + 96) || ((*((_DWORD *)this + 631) - 4) & 0xFFFFFFFD) == 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 631) - 2) <= 4 )
      ++*((_BYTE *)this + 2552);
    v17 = (unsigned int)*((unsigned __int8 *)this + 2552) - 1;
    *((_DWORD *)this + v17 + 641) = a3;
    *((_DWORD *)this + v17 + 646) = a4;
    *((_BYTE *)this + v17 + 2604) = *((_BYTE *)a2 + 96);
    *((_WORD *)this + v17 + 1305) = a6;
    *((_WORD *)this + v17 + 1310) = *((_WORD *)a2 + 56);
    *((_DWORD *)this + 639) += *((unsigned __int16 *)a2 + 56);
    *((_QWORD *)this + v17 + 329) = *((_QWORD *)a2 + 9);
    *((_DWORD *)this + 640) += *((unsigned __int16 *)a2 + 57);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 2672),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 120));
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    LODWORD(v31) = *((_DWORD *)this + 674) + *v18;
    HIDWORD(v31) = *((_DWORD *)this + 675) + v18[1];
    LODWORD(v32) = *((_DWORD *)this + 676) + v18[2];
    HIDWORD(v32) = *((_DWORD *)this + 677) + v18[3];
    LODWORD(v33) = *((_DWORD *)this + 678) + v18[4];
    HIDWORD(v33) = *((_DWORD *)this + 679) + v18[5];
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 674, &v31);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 6 * v19 + 680, v20);
    *((_BYTE *)this + 2840) += *((_BYTE *)a2 + 144) != 0;
    *((_BYTE *)this + v21 + 2841) = *((_BYTE *)a2 + 144);
    *((_BYTE *)this + 2846) += *((_BYTE *)a2 + 145) != 0;
    *((_BYTE *)this + v21 + 2847) = *((_BYTE *)a2 + 145);
    v22 = *((_BYTE *)this + 2852);
    if ( v22 <= *((_BYTE *)a2 + 146) )
      v22 = *((_BYTE *)a2 + 146);
    *((_BYTE *)this + 2852) = v22;
    *((_DWORD *)this + 714) += *((unsigned __int8 *)a2 + 146);
    *((_BYTE *)this + v21 + 2860) = *((_BYTE *)a2 + 146);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 2872),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 148));
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    LODWORD(v31) = *((_DWORD *)this + 724) + *((_DWORD *)a2 + 43);
    HIDWORD(v31) = *((_DWORD *)this + 725) + *((_DWORD *)a2 + 44);
    LODWORD(v32) = *((_DWORD *)this + 726) + *((_DWORD *)a2 + 45);
    HIDWORD(v32) = *((_DWORD *)this + 727) + *((_DWORD *)a2 + 46);
    LODWORD(v33) = *((_DWORD *)this + 728) + *((_DWORD *)a2 + 47);
    HIDWORD(v33) = *((_DWORD *)this + 729) + *((_DWORD *)a2 + 48);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 724, &v31);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 2 * v23 + 730, a5);
    v25 = *((_WORD *)this + 1520);
    if ( v25 <= *((_WORD *)a2 + 98) )
      v25 = *((_WORD *)a2 + 98);
    *((_WORD *)this + 1520) = v25;
    *((_DWORD *)this + 761) += *((unsigned __int16 *)a2 + 98);
    *((_WORD *)this + v24 + 1524) = *((_WORD *)a2 + 98);
    v26 = *((_WORD *)this + 1529);
    if ( v26 <= *((_WORD *)a2 + 99) )
      v26 = *((_WORD *)a2 + 99);
    *((_WORD *)this + 1529) = v26;
    *((_DWORD *)this + 765) += *((unsigned __int16 *)a2 + 99);
    *((_WORD *)this + v24 + 1532) = *((_WORD *)a2 + 99);
    v27 = *((_WORD *)this + 1537);
    if ( v27 <= *((_WORD *)a2 + 101) )
      v27 = *((_WORD *)a2 + 101);
    *((_WORD *)this + 1537) = v27;
    *((_DWORD *)this + 769) += *((unsigned __int16 *)a2 + 101);
    *((_WORD *)this + v24 + 1540) = *((_WORD *)a2 + 101);
    v28 = *((_WORD *)this + 1545);
    if ( v28 <= *((_WORD *)a2 + 100) )
      v28 = *((_WORD *)a2 + 100);
    *((_WORD *)this + 1545) = v28;
    *((_DWORD *)this + 773) += *((unsigned __int16 *)a2 + 100);
    *((_WORD *)this + v24 + 1548) = *((_WORD *)a2 + 100);
    *((_BYTE *)this + v24 + 2866) = *((_BYTE *)a2 + 116);
    *((_BYTE *)this + 2865) += *((_BYTE *)a2 + 116) != 0;
    v29 = *((_DWORD *)this + 777);
    if ( v29 <= *((_DWORD *)a2 + 54) )
      v29 = *((_DWORD *)a2 + 54);
    *((_DWORD *)this + 777) = v29;
    *((_DWORD *)this + 778) += *((_DWORD *)a2 + 54);
    *((_DWORD *)this + v24 + 779) = *((_DWORD *)a2 + 54);
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                       this,
                       *((_QWORD *)this + 318),
                       PerformanceCount.QuadPart) >= 0xEA60
    || *((_BYTE *)this + 2552) == 5 )
  {
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v30);
    operator delete(*((void **)this + 311));
    operator delete(*((void **)this + 312));
    memset_0(v35, 0, 0x79uLL);
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v39 = 0;
    memset_0(v40, 0, sizeof(v40));
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v47,
      24LL,
      5LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = 0LL;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v60,
      24LL,
      5LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    memset_0(v61, 0, 0x42uLL);
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0LL;
    v65 = 0;
    CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)this + 2488, (__int64)v35);
  }
}
