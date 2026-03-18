/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180027FD4 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x180027828 (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180027984 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x180027CD8 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ @ 0x180140FE0 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXXZ.c)
 *     Template_zxqqqhhhqqqqqqhhhhhhhhhh @ 0x180141DB8 (Template_zxqqqhhhqqqqqqhhhhhhhhhh.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // cx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  _OWORD *v29; // rdi
  CTelemetryTouchLatencyAnalysis *v30; // rcx
  void *v31; // r8
  unsigned __int16 *v32; // rax
  __int64 v33; // rcx
  int v34; // r8d
  int v35; // edx
  int v36; // eax
  _OWORD *v37; // rax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  _BYTE v45[256]; // [rsp+D0h] [rbp-118h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1F0h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v31 = &unk_1801D5868;
    if ( *((_QWORD *)a2 + 1) )
      v31 = (void *)*((_QWORD *)a2 + 1);
    Template_zxqqqhhhqqqqqqhhhhhhhhhh(
      (_DWORD)this,
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ADDTOINTERACTIONSUMMARY_EVENT,
      (_DWORD)v31,
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
  v6 = *((_QWORD *)this + 252);
  v7 = 2LL;
  if ( v6 )
  {
    v32 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
    v33 = v6 - (_QWORD)v32;
    do
    {
      v34 = *(unsigned __int16 *)((char *)v32 + v33);
      v35 = *v32 - v34;
      if ( v35 )
        break;
      ++v32;
    }
    while ( v34 );
    if ( !v35 )
    {
      v36 = *((_DWORD *)a2 + 18);
      if ( (v36 == *((_DWORD *)this + 508) || !v36)
        && *((_DWORD *)a2 + 19) == *((_DWORD *)this + 511)
        && *((_DWORD *)a2 + 7) == *((_DWORD *)this + 510) )
      {
        goto LABEL_4;
      }
    }
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
  }
  if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
    return;
LABEL_4:
  if ( !*((_WORD *)a2 + 40) && ((*((_DWORD *)this + 508) - 4) & 0xFFFFFFFD) != 0 )
  {
LABEL_43:
    QueryPerformanceCounter(&PerformanceCount);
    v29 = (_OWORD *)((char *)this + 2008);
    if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                         this,
                         *((_QWORD *)this + 251),
                         PerformanceCount.QuadPart) >= 0xEA60 )
    {
      CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v30);
      WPF::ProcessHeapImpl::Free(*((void **)this + 252));
      WPF::ProcessHeapImpl::Free(*((void **)this + 253));
      memset_0(v45, 0, sizeof(v45));
      v37 = v45;
      do
      {
        v38 = v37[1];
        *v29 = *v37;
        v39 = v37[2];
        v29[1] = v38;
        v40 = v37[3];
        v29[2] = v39;
        v41 = v37[4];
        v29[3] = v40;
        v42 = v37[5];
        v29[4] = v41;
        v43 = v37[6];
        v29[5] = v42;
        v44 = v37[7];
        v37 += 8;
        v29[6] = v43;
        v29 += 8;
        *(v29 - 1) = v44;
        --v7;
      }
      while ( v7 );
    }
    return;
  }
  v8 = *((_DWORD *)this + 508);
  if ( v8 <= 3 )
    goto LABEL_13;
  if ( v8 == 4 )
  {
    if ( *((_DWORD *)a2 + 40) != 513 || *((_DWORD *)this + 574) != 514 )
    {
      v9 = ((*((_DWORD *)this + 574) - 522) & 0xFFFFFFFB) == 0;
LABEL_12:
      if ( !v9 )
        goto LABEL_14;
    }
LABEL_13:
    ++*((_WORD *)this + 1024);
    *((_DWORD *)this + 516) += a3;
    goto LABEL_14;
  }
  if ( v8 == 5 )
    goto LABEL_13;
  if ( v8 == 6 && *((_DWORD *)a2 + 40) == 256 )
  {
    v9 = *((_DWORD *)this + 574) == 257;
    goto LABEL_12;
  }
LABEL_14:
  *((_DWORD *)this + 517) += *((_DWORD *)a2 + 38) - *((_DWORD *)a2 + 37);
  *((_DWORD *)this + 518) += *((unsigned __int16 *)a2 + 72);
  v10 = *((_WORD *)a2 + 71);
  if ( *((_WORD *)this + 1038) > v10 )
    v10 = *((_WORD *)this + 1038);
  *((_WORD *)this + 1038) = v10;
  *((_DWORD *)this + 520) += *((unsigned __int16 *)a2 + 48);
  v11 = *((_WORD *)a2 + 60);
  if ( *((_WORD *)this + 1097) > v11 )
    v11 = *((_WORD *)this + 1097);
  v12 = *((_WORD *)this + 1098);
  *((_WORD *)this + 1097) = v11;
  v13 = *((_WORD *)a2 + 61);
  if ( v12 > v13 )
    v13 = v12;
  v14 = *((_WORD *)this + 1099);
  *((_WORD *)this + 1098) = v13;
  v15 = *((_WORD *)a2 + 62);
  if ( v14 > v15 )
    v15 = v14;
  v16 = *((_WORD *)this + 1100);
  *((_WORD *)this + 1099) = v15;
  v17 = *((_WORD *)a2 + 63);
  if ( v16 > v17 )
    v17 = v16;
  v18 = *((_WORD *)this + 1101);
  *((_WORD *)this + 1100) = v17;
  v19 = *((_WORD *)a2 + 64);
  if ( v18 > v19 )
    v19 = v18;
  *((_WORD *)this + 1101) = v19;
  *((_DWORD *)this + 551) += *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 552) += *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 553) += *((_DWORD *)a2 + 27);
  *((_DWORD *)this + 554) += *((_DWORD *)a2 + 28);
  *((_DWORD *)this + 555) += *((_DWORD *)a2 + 29);
  v20 = *((_WORD *)a2 + 65);
  if ( *((_WORD *)this + 1112) > v20 )
    v20 = *((_WORD *)this + 1112);
  v21 = *((_WORD *)this + 1113);
  *((_WORD *)this + 1112) = v20;
  v22 = *((_WORD *)a2 + 66);
  if ( v21 > v22 )
    v22 = v21;
  v23 = *((_WORD *)this + 1114);
  *((_WORD *)this + 1113) = v22;
  v24 = *((_WORD *)a2 + 67);
  if ( v23 > v24 )
    v24 = v23;
  v25 = *((_WORD *)this + 1115);
  *((_WORD *)this + 1114) = v24;
  v26 = *((_WORD *)a2 + 68);
  if ( v25 > v26 )
    v26 = v25;
  v27 = *((_WORD *)this + 1116);
  *((_WORD *)this + 1115) = v26;
  v28 = *((_WORD *)a2 + 69);
  if ( v27 > v28 )
    v28 = v27;
  *((_WORD *)this + 1116) = v28;
  *((_DWORD *)this + 559) += *((unsigned __int16 *)a2 + 65);
  *((_DWORD *)this + 560) += *((unsigned __int16 *)a2 + 66);
  *((_DWORD *)this + 561) += *((unsigned __int16 *)a2 + 67);
  *((_DWORD *)this + 562) += *((unsigned __int16 *)a2 + 68);
  *((_DWORD *)this + 563) += *((unsigned __int16 *)a2 + 69);
  *((_WORD *)this + 1128) += *((_WORD *)a2 + 70);
  *((_WORD *)this + 1129) += *((_WORD *)a2 + 85);
  *((_DWORD *)this + 565) += *((_DWORD *)a2 + 41);
  if ( (int)CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance(this, a2) >= 0 )
  {
    if ( a3 >= 0x1F4 )
    {
      if ( a3 >= 0x3E8 )
        ++*((_WORD *)this + 1027);
      else
        ++*((_WORD *)this + 1026);
    }
    else
    {
      ++*((_WORD *)this + 1025);
    }
    switch ( *((_WORD *)a2 + 40) )
    {
      case 1:
        ++*((_WORD *)this + 1028);
        break;
      case 2:
        ++*((_WORD *)this + 1029);
        break;
      case 3:
        ++*((_WORD *)this + 1030);
        break;
    }
    goto LABEL_43;
  }
}
