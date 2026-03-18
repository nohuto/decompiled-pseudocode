/*
 * XREFs of ?WaitForNextFrameStart@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013E9B4
 * Callers:
 *     ?ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ @ 0x18013DFB0 (-ScheduleAndProcessFrame@CIndependentRefreshRateScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     ?FrameStarted@CDebugFrameCounter@@QEAAXXZ @ 0x180130E0C (-FrameStarted@CDebugFrameCounter@@QEAAXXZ.c)
 *     ?WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z @ 0x1801319C4 (-WaitForNextFrameStart@CComposition@@QEAAJPEAXI@Z.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013E5A8 (-TraceTime@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CIndependentRefreshRateScheduler::WaitForNextFrameStart(__int64 this)
{
  char v1; // al
  int v2; // edi
  CIndependentRefreshRateScheduler *v3; // rsi
  __int64 v4; // r9
  int v5; // ebx
  unsigned int v6; // ebx
  int FrameStart; // eax
  __int64 v8; // rcx
  int v9; // r14d
  char v10; // al
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbx
  char v17; // al

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v2 = 0;
  v3 = (CIndependentRefreshRateScheduler *)this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v4 = *((_QWORD *)v3 + 2686);
  if ( v4 && !*(_BYTE *)(v4 + 288) && *(_BYTE *)(v4 + 648) )
  {
    v5 = *(_DWORD *)(v4 + 680);
    this = (unsigned int)(v5 + 1);
    if ( (unsigned int)this <= *(_DWORD *)(*((_QWORD *)v3 + 2685) + 680LL) + 1 )
      v5 = *(_DWORD *)(*((_QWORD *)v3 + 2685) + 680LL);
    v6 = v5 + 1;
  }
  else
  {
    v6 = 0;
  }
  if ( (v1 & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
  FrameStart = CComposition::WaitForNextFrameStart(*((CComposition **)v3 + 16), *((void **)v3 + 12), v6);
  v9 = FrameStart;
  if ( FrameStart < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, FrameStart, 0x1AEu);
  if ( !*((_BYTE *)v3 + 21824) || (v10 = 1, v9 < 0) )
    v10 = 0;
  *((_BYTE *)v3 + 21825) = v10;
  if ( v9 < 0 )
  {
    if ( v9 != -2003304307 )
      MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v9, 0x1BBu);
  }
  else
  {
    v11 = 0;
    if ( v9 != 142213121 )
      goto LABEL_28;
  }
  v12 = *((_QWORD *)v3 + 2686);
  v13 = 0LL;
  if ( *(_QWORD *)(v12 + 88) )
  {
    v13 = *(_QWORD *)(v12 + 232);
    v14 = *((_QWORD *)v3 + 5) - v13;
  }
  else
  {
    v14 = *((_QWORD *)v3 + 5);
  }
  v15 = v13 + *((_QWORD *)v3 + 20) * (v14 / *((_QWORD *)v3 + 20) + 1);
  *((_QWORD *)v3 + 2) = CPartitionScheduler::GetAbsoluteTime((CIndependentRefreshRateScheduler *)((char *)v3 + 8));
  CIndependentRefreshRateScheduler::TraceTime(v3);
  if ( *((_QWORD *)v3 + 5) >= v15 )
    v15 = *((_QWORD *)v3 + 20) * (*((_QWORD *)v3 + 5) / *((_QWORD *)v3 + 20) + 1LL);
  v16 = 1000 * (v15 - *((_QWORD *)v3 + 5)) / g_qpcFrequency.QuadPart;
  Sleep(v16 + 1);
  v9 = 0;
  v2 = v16 + 1;
  v11 = 1;
  *(_BYTE *)(*((_QWORD *)v3 + 2685) + 1320LL) = 1;
LABEL_28:
  v17 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qq(v8, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v11, v2);
    v17 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v17 & 4) != 0 )
    TemplateEventDescriptor(v8, &EVTDESC_SCHEDULE_WFVB_Stop);
  CDebugFrameCounter::FrameStarted((CIndependentRefreshRateScheduler *)((char *)v3 + 25480));
  return (unsigned int)v9;
}
