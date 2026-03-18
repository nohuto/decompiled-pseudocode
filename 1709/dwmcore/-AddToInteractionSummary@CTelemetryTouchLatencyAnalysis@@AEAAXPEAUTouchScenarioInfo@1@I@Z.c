/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18012B968 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x18012B128 (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18012B94C (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x18012C37C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18012CA5C (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh @ 0x18012DC60 (McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned int a3)
{
  __int16 *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  int v11; // r8d
  int v12; // edx
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // cx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  _OWORD *v32; // rdi
  CTelemetryTouchLatencyAnalysis *v33; // rcx
  _OWORD *v34; // rax
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  _BYTE v42[256]; // [rsp+D0h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1F0h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v6 = &word_1801EFDD8;
    if ( *((_QWORD *)a2 + 1) )
      v6 = (__int16 *)*((_QWORD *)a2 + 1);
    McTemplateU0zxqqqhhhqqqqqqhhhhhhhhhh(
      (_DWORD)this,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ADDTOINTERACTIONSUMMARY_EVENT,
      (_DWORD)v6,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 18),
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 19),
      *((_WORD *)a2 + 40),
      *((_WORD *)a2 + 16),
      *((_WORD *)a2 + 17),
      *((_WORD *)a2 + 48),
      *((_DWORD *)a2 + 25),
      *((_DWORD *)a2 + 26),
      *((_DWORD *)a2 + 27),
      *((_DWORD *)a2 + 28),
      *((_DWORD *)a2 + 29),
      *((_WORD *)a2 + 60),
      *((_WORD *)a2 + 61),
      *((_WORD *)a2 + 62),
      *((_WORD *)a2 + 63),
      *((_WORD *)a2 + 64),
      *((_WORD *)a2 + 65),
      *((_WORD *)a2 + 66),
      *((_WORD *)a2 + 67),
      *((_WORD *)a2 + 68),
      *((_WORD *)a2 + 69));
  }
  v7 = *((_QWORD *)this + 242);
  v8 = 2LL;
  if ( v7 )
  {
    v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v10 = v7 - (_QWORD)v9;
    do
    {
      v11 = *(unsigned __int16 *)((char *)v9 + v10);
      v12 = *v9 - v11;
      if ( v12 )
        break;
      ++v9;
    }
    while ( v11 );
    if ( !v12
      && *((_DWORD *)a2 + 18) == *((_DWORD *)this + 488)
      && *((_DWORD *)a2 + 19) == *((_DWORD *)this + 491)
      && *((_DWORD *)a2 + 7) == *((_DWORD *)this + 490) )
    {
      goto LABEL_15;
    }
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
  }
  if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
    return;
LABEL_15:
  if ( !*((_WORD *)a2 + 40) && ((*((_DWORD *)this + 488) - 4) & 0xFFFFFFFD) != 0 )
  {
LABEL_53:
    QueryPerformanceCounter(&PerformanceCount);
    v32 = (_OWORD *)((char *)this + 1928);
    if ( CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
           this,
           *((_QWORD *)this + 241),
           PerformanceCount.QuadPart) >= 0xEA60 )
    {
      CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v33);
      WPF::ProcessHeapImpl::Free(*((void **)this + 242));
      WPF::ProcessHeapImpl::Free(*((void **)this + 243));
      memset_0(v42, 0, sizeof(v42));
      v34 = v42;
      do
      {
        v35 = v34[1];
        *v32 = *v34;
        v36 = v34[2];
        v32[1] = v35;
        v37 = v34[3];
        v32[2] = v36;
        v38 = v34[4];
        v32[3] = v37;
        v39 = v34[5];
        v32[4] = v38;
        v40 = v34[6];
        v32[5] = v39;
        v41 = v34[7];
        v34 += 8;
        v32[6] = v40;
        v32 += 8;
        *(v32 - 1) = v41;
        --v8;
      }
      while ( v8 );
    }
    return;
  }
  if ( (unsigned int)(*((_DWORD *)this + 488) - 2) <= 4 )
  {
    ++*((_WORD *)this + 984);
    *((_DWORD *)this + 496) += a3;
  }
  *((_DWORD *)this + 497) += *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 498) += *((unsigned __int16 *)a2 + 72);
  v13 = *((_WORD *)a2 + 71);
  if ( *((_WORD *)this + 998) > v13 )
    v13 = *((_WORD *)this + 998);
  *((_WORD *)this + 998) = v13;
  *((_DWORD *)this + 500) += *((unsigned __int16 *)a2 + 48);
  v14 = *((_WORD *)a2 + 60);
  if ( *((_WORD *)this + 1057) > v14 )
    v14 = *((_WORD *)this + 1057);
  v15 = *((_WORD *)this + 1058);
  *((_WORD *)this + 1057) = v14;
  v16 = *((_WORD *)a2 + 61);
  if ( v15 > v16 )
    v16 = v15;
  v17 = *((_WORD *)this + 1059);
  *((_WORD *)this + 1058) = v16;
  v18 = *((_WORD *)a2 + 62);
  if ( v17 > v18 )
    v18 = v17;
  v19 = *((_WORD *)this + 1060);
  *((_WORD *)this + 1059) = v18;
  v20 = *((_WORD *)a2 + 63);
  if ( v19 > v20 )
    v20 = v19;
  v21 = *((_WORD *)this + 1061);
  *((_WORD *)this + 1060) = v20;
  v22 = *((_WORD *)a2 + 64);
  if ( v21 > v22 )
    v22 = v21;
  *((_WORD *)this + 1061) = v22;
  *((_DWORD *)this + 531) += *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 532) += *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 533) += *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 534) += *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 535) += *((_DWORD *)a2 + 29);
  v23 = *((_WORD *)a2 + 65);
  if ( *((_WORD *)this + 1072) > v23 )
    v23 = *((_WORD *)this + 1072);
  v24 = *((_WORD *)this + 1073);
  *((_WORD *)this + 1072) = v23;
  v25 = *((_WORD *)a2 + 66);
  if ( v24 > v25 )
    v25 = v24;
  v26 = *((_WORD *)this + 1074);
  *((_WORD *)this + 1073) = v25;
  v27 = *((_WORD *)a2 + 67);
  if ( v26 > v27 )
    v27 = v26;
  v28 = *((_WORD *)this + 1075);
  *((_WORD *)this + 1074) = v27;
  v29 = *((_WORD *)a2 + 68);
  if ( v28 > v29 )
    v29 = v28;
  v30 = *((_WORD *)this + 1076);
  *((_WORD *)this + 1075) = v29;
  v31 = *((_WORD *)a2 + 69);
  if ( v30 > v31 )
    v31 = v30;
  *((_WORD *)this + 1076) = v31;
  *((_DWORD *)this + 539) += *((unsigned __int16 *)a2 + 65);
  *((_DWORD *)this + 540) += *((unsigned __int16 *)a2 + 66);
  *((_DWORD *)this + 541) += *((unsigned __int16 *)a2 + 67);
  *((_DWORD *)this + 542) += *((unsigned __int16 *)a2 + 68);
  *((_DWORD *)this + 543) += *((unsigned __int16 *)a2 + 69);
  *((_WORD *)this + 1088) += *((_WORD *)a2 + 70);
  *((_WORD *)this + 1089) += *((_WORD *)a2 + 83);
  *((_DWORD *)this + 545) += *((_DWORD *)a2 + 40);
  if ( (int)CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance(this, a2) >= 0 )
  {
    if ( a3 >= 0x1F4 )
    {
      if ( a3 >= 0x3E8 )
        ++*((_WORD *)this + 987);
      else
        ++*((_WORD *)this + 986);
    }
    else
    {
      ++*((_WORD *)this + 985);
    }
    switch ( *((_WORD *)a2 + 40) )
    {
      case 1:
        ++*((_WORD *)this + 988);
        break;
      case 2:
        ++*((_WORD *)this + 989);
        break;
      case 3:
        ++*((_WORD *)this + 990);
        break;
    }
    goto LABEL_53;
  }
}
