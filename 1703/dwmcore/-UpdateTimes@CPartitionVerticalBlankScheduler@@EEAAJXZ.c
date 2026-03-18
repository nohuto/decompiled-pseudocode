/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180036AF0 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180066358 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ @ 0x180066654 (-CalculateFrameTimeDelta@CPartitionVerticalBlankScheduler@@AEAA_KXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180068F08 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3F28 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180133F98 (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x18013433C (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( *((_BYTE *)this + 21824) && *((_BYTE *)this + 21825) )
  {
    if ( (v1 & 2) != 0 )
      TemplateEventDescriptor((__int64)this, &EVTDESC_SCHEDULE_RESET_Start);
    v3 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
    v5 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x991u);
    }
    else
    {
      CCrossThreadComposition::Reset(*((CCrossThreadComposition **)this + 16), v4);
      v6 = CPartitionVerticalBlankScheduler::Reinitialize(this);
      *((_BYTE *)this + 21826) = 1;
      v5 = v6;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_RESET_Stop);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4A4u);
      goto LABEL_19;
    }
  }
  CFrameInfo::Clear((CPartitionVerticalBlankScheduler *)((char *)this + 1328 * *((unsigned int *)this + 5366) + 216));
  CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
  *((_QWORD *)this + 2) = CPartitionScheduler::GetAbsoluteTime((CPartitionVerticalBlankScheduler *)((char *)this + 8));
  *(_QWORD *)(*((_QWORD *)this + 2685) + 248LL) = *((_QWORD *)this + 5);
  *(_QWORD *)(*((_QWORD *)this + 2685) + 256LL) = *((_QWORD *)this + 2);
  v8 = CPartitionVerticalBlankScheduler::ComputeVSyncInfo(this);
  v5 = v8;
  if ( v8 < 0 )
  {
    v12 = 1214;
  }
  else
  {
    v8 = CPartitionVerticalBlankScheduler::RetireFrames(this, 0);
    v5 = v8;
    if ( v8 >= 0 )
    {
      *(_DWORD *)(*((_QWORD *)this + 2685) + 16LL) = *(_DWORD *)(*((_QWORD *)this + 2686) + 16LL) + 1;
      goto LABEL_19;
    }
    v12 = 1216;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v12);
LABEL_19:
  v9 = CPartitionVerticalBlankScheduler::CalculateFrameTimeDelta(this);
  CFrameInfo::Trace(
    *((CFrameInfo **)this + 2685),
    *((_DWORD *)this + 5366),
    *((_QWORD *)this + 23),
    v9,
    *((_QWORD *)this + 2687));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v10, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v5;
}
