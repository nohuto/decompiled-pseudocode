/*
 * XREFs of ?UpdateTimes@CIndependentRefreshRateScheduler@@EEAAJXZ @ 0x18013E820
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x1800BC358 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x18013433C (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 *     ?CalculateFrameTimeDelta@CIndependentRefreshRateScheduler@@AEAA_KXZ @ 0x18013C5B4 (-CalculateFrameTimeDelta@CIndependentRefreshRateScheduler@@AEAA_KXZ.c)
 *     ?ComputeVSyncInfo@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013C9B4 (-ComputeVSyncInfo@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8 (-GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 *     ?Reset@CIndependentRefreshRateScheduler@@QEAAJXZ @ 0x18013DA8C (-Reset@CIndependentRefreshRateScheduler@@QEAAJXZ.c)
 *     ?RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z @ 0x18013DF10 (-RetireFrames@CIndependentRefreshRateScheduler@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::UpdateTimes(CIndependentRefreshRateScheduler *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
  if ( *((_BYTE *)this + 21824)
    && *((_BYTE *)this + 21825)
    && (v2 = CIndependentRefreshRateScheduler::Reset((CCrossThreadComposition **)this), v3 = v2, v2 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x498u);
  }
  else
  {
    CFrameInfo::Clear((CIndependentRefreshRateScheduler *)((char *)this + 1328 * *((unsigned int *)this + 5366) + 216));
    CIndependentRefreshRateScheduler::GetPresentStatisticsAndAdjustRates(this);
    *((_QWORD *)this + 2) = CPartitionScheduler::GetAbsoluteTime((CIndependentRefreshRateScheduler *)((char *)this + 8));
    *(_QWORD *)(*((_QWORD *)this + 2685) + 248LL) = *((_QWORD *)this + 5);
    *(_QWORD *)(*((_QWORD *)this + 2685) + 256LL) = *((_QWORD *)this + 2);
    v4 = CIndependentRefreshRateScheduler::ComputeVSyncInfo(this);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4B2u);
    }
    else
    {
      v5 = CIndependentRefreshRateScheduler::RetireFrames(this, 0);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4B4u);
      else
        *(_DWORD *)(*((_QWORD *)this + 2685) + 16LL) = *(_DWORD *)(*((_QWORD *)this + 2686) + 16LL) + 1;
    }
  }
  CIndependentRefreshRateScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 2685), *((_DWORD *)this + 5366));
  v6 = *((_QWORD *)this + 2685);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CIndependentRefreshRateScheduler *)((char *)this + 25264),
    *(_QWORD *)(v6 + 248),
    *(_QWORD *)(v6 + 280),
    *(_QWORD *)(v6 + 520),
    *(_DWORD *)(v6 + 1176),
    *(_DWORD *)(v6 + 1180),
    *(_BYTE *)(v6 + 273));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return v3;
}
