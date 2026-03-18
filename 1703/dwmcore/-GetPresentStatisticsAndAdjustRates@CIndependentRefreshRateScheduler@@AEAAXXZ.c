/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8
 * Callers:
 *     ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820 (-UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?GetDesktopPresentStatistics@CComposition@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180131AF0 (-GetDesktopPresentStatistics@CComposition@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNS.c)
 *     ?AdjustPeriods@CRateInfo@@QEAAXPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180133C2C (-AdjustPeriods@CRateInfo@@QEAAXPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     ?UpdateDXRefresh@CAnimationTracking@@QEAAXI@Z @ 0x180133D54 (-UpdateDXRefresh@CAnimationTracking@@QEAAXI@Z.c)
 *     ?UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@@QEAAXI@Z @ 0x180133E78 (-UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@@QEAAXI@Z.c)
 *     Template_qNR0 @ 0x18013BC14 (Template_qNR0.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

void __fastcall CIndependentRefreshRateScheduler::GetPresentStatisticsAndAdjustRates(
        CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  int DesktopPresentStatistics; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 i; // rdx
  unsigned __int64 v11; // r8
  float v12; // xmm2_4
  __int64 v13; // rdx
  bool v14; // [rsp+30h] [rbp-A8h] BYREF
  _UNSIGNED_RATIO v15[16]; // [rsp+40h] [rbp-98h] BYREF

  v14 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = (_OWORD *)(*((_QWORD *)this + 2685) + 656LL);
  v4 = (_OWORD *)(*((_QWORD *)this + 2686) + 656LL);
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v5 = v4[7];
    v4 += 8;
    *(v3 - 1) = v5;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)v3 = *(_QWORD *)v4;
  *(_DWORD *)(*((_QWORD *)this + 2685) + 656LL) = 16;
  DesktopPresentStatistics = CComposition::GetDesktopPresentStatistics(
                               *((CComposition **)this + 16),
                               (unsigned int *)(*((_QWORD *)this + 2685) + 656LL),
                               &v14,
                               (struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)this + 2685) + 664LL),
                               v15);
  if ( DesktopPresentStatistics < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801FC648, 1u, DesktopPresentStatistics, 0x344u);
LABEL_7:
    *(_BYTE *)(*((_QWORD *)this + 2685) + 648LL) = 0;
    goto LABEL_8;
  }
  if ( v14 )
    goto LABEL_7;
  v8 = *((_QWORD *)this + 2685);
  if ( !*(_DWORD *)(v8 + 656) )
    goto LABEL_7;
  *(_BYTE *)(v8 + 648) = 1;
  *(_DWORD *)(*((_QWORD *)this + 2685) + 96LL) = *(_DWORD *)(*((_QWORD *)this + 2685) + 656LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      *((_QWORD *)this + 2685),
      &EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)this + 2685) + 656LL),
      32,
      *((_QWORD *)this + 2685) + 664LL);
  v9 = *((_QWORD *)this + 2685);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v9 + 96); v9 = *((_QWORD *)this + 2685) )
  {
    v11 = 0LL;
    v12 = (float)(int)g_qpcFrequency.LowPart
        / (float)((float)(int)v15[i].uiNumerator / (float)(int)v15[i].uiDenominator);
    if ( v12 >= 9.223372e18 )
    {
      v12 = v12 - 9.223372e18;
      if ( v12 < 9.223372e18 )
        v11 = 0x8000000000000000uLL;
    }
    *(_QWORD *)(v9 + 8 * i + 520) = v11 + (unsigned int)(int)v12;
    i = (unsigned int)(i + 1);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      (__int64)v15,
      &EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)this + 2685) + 96LL),
      8,
      (__int64)v15);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      *((_QWORD *)this + 2685),
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 2685) + 680LL) - *(_DWORD *)(*((_QWORD *)this + 2685) + 668LL)),
      *(_QWORD *)(*((_QWORD *)this + 2685) + 688LL) - *(_QWORD *)(*((_QWORD *)this + 2685) + 672LL));
  }
  v13 = *((_QWORD *)this + 2686);
  if ( *(_BYTE *)(v13 + 648) && !*((_BYTE *)this + 21824) )
    CRateInfo::AdjustPeriods(
      (CIndependentRefreshRateScheduler *)((char *)this + 136),
      (const struct DXGI_FRAME_STATISTICS_DWM *)(v13 + 664),
      (const struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)this + 2685) + 664LL));
  CAnimationTracking::UpdateDXRefresh(
    (CIndependentRefreshRateScheduler *)((char *)this + 21832),
    *(_DWORD *)(*((_QWORD *)this + 2685) + 680LL));
  CTelemetryTouchLatencyAnalysis::UpdateDXRefresh(
    (CIndependentRefreshRateScheduler *)((char *)this + 22408),
    *(_DWORD *)(*((_QWORD *)this + 2685) + 680LL));
LABEL_8:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
