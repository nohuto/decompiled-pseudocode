/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800687D0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800663E0 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18006BEE0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18006CC90 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x18006CD40 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ @ 0x1800C9560 (-GetAbsoluteTime@CPartitionScheduler@@IEAA_KXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180143C48 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAX_K@Z @ 0x18014425C (-SendReportToE3@CEnergyReporter@@AEAAX_K@Z.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(unsigned __int64 this)
{
  char v1; // al
  CPartitionVerticalBlankScheduler *v2; // rsi
  DWORD v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // r12
  CHwndRenderTarget *v11; // rcx
  bool (__fastcall *v12)(CHwndRenderTarget *__hidden); // rax
  char v13; // al
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rax
  CHwndRenderTarget *v17; // rcx
  int (*v18)(CHwndRenderTarget *__hidden, void **); // rax
  CHwndRenderTarget *v19; // rcx
  int (*v20)(CHwndRenderTarget *__hidden, unsigned int); // rax
  int refreshed; // eax
  DWORD v22; // eax
  bool v23; // al
  __int64 v24; // r8
  char v25; // al
  char *v26; // rsi
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r8
  ULONGLONG TickCount64; // rax
  unsigned __int64 v35; // rdx
  HANDLE Handles[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+80h] [rbp+8h]
  unsigned int v38; // [rsp+88h] [rbp+10h]
  void *v39; // [rsp+90h] [rbp+18h] BYREF
  void *v40; // [rsp+98h] [rbp+20h]

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v2 = (CPartitionVerticalBlankScheduler *)this;
  v3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v4 = *((_QWORD *)v2 + 2686);
  if ( v4 && !*(_BYTE *)(v4 + 288) && *(_BYTE *)(v4 + 648) )
  {
    v28 = *(_DWORD *)(v4 + 680);
    this = (unsigned int)(v28 + 1);
    if ( (unsigned int)this <= *(_DWORD *)(*((_QWORD *)v2 + 2685) + 680LL) + 1 )
      v28 = *(_DWORD *)(*((_QWORD *)v2 + 2685) + 680LL);
    v5 = v28 + 1;
  }
  else
  {
    v5 = 0;
  }
  if ( (v1 & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
  v6 = *((_QWORD *)v2 + 16);
  v40 = (void *)*((_QWORD *)v2 + 12);
  if ( CEnergyReporter::s_reportingEnabled )
  {
    if ( *(_DWORD *)(v6 + 112) )
    {
      TickCount64 = GetTickCount64();
      v35 = TickCount64 - *(_QWORD *)(v6 + 80);
      if ( v35 >= 0x7D0 )
      {
        *(_QWORD *)(v6 + 80) = TickCount64;
        CEnergyReporter::SendReportToE3((CEnergyReporter *)(v6 + 80), v35);
      }
    }
  }
  v7 = *(_QWORD *)(v6 + 32);
  v8 = 0LL;
  v9 = -2003304307;
  v39 = 0LL;
  v37 = 0;
  v38 = *(_DWORD *)(v7 + 48);
  if ( v38 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(CHwndRenderTarget **)(v10 + *(_QWORD *)(v7 + 24));
      v12 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v11 + 208LL);
      v13 = v12 == CHwndRenderTarget::IsPrimaryMonitor
          ? CHwndRenderTarget::IsPrimaryMonitor(v11)
          : ((__int64 (*)(void))v12)();
      if ( v13
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + *(_QWORD *)(v7 + 24)) + 176LL))(*(_QWORD *)(v10 + *(_QWORD *)(v7 + 24))) )
      {
        break;
      }
      v10 += 8LL;
      if ( ++v37 >= v38 )
        goto LABEL_18;
    }
    v14 = 8LL * v37;
    v15 = *(_QWORD *)(v14 + *(_QWORD *)(v7 + 24));
    v16 = *(_QWORD *)(v15 + 64);
    v17 = (CHwndRenderTarget *)(v15 + 64);
    v18 = *(int (**)(CHwndRenderTarget *__hidden, void **))(v16 + 80);
    if ( v18 == CHwndRenderTarget::GetVBlankEvent )
      CHwndRenderTarget::GetVBlankEvent(v17, &v39);
    else
      ((void (__fastcall *)(CHwndRenderTarget *, void **))v18)(v17, &v39);
    v8 = *(_QWORD *)(v14 + *(_QWORD *)(v7 + 24));
LABEL_18:
    if ( v39 )
    {
      v19 = (CHwndRenderTarget *)(v8 + 64);
      v20 = *(int (**)(CHwndRenderTarget *__hidden, unsigned int))(*(_QWORD *)(v8 + 64) + 88LL);
      if ( v20 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
        refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v19, v5);
      else
        refreshed = ((__int64 (__fastcall *)(CHwndRenderTarget *, _QWORD))v20)(v19, v5);
      v9 = refreshed;
      if ( refreshed >= 0 )
      {
        if ( refreshed == 142213121 )
          goto LABEL_25;
        Handles[1] = v40;
        Handles[0] = v39;
        v22 = WaitForMultipleObjects(2u, Handles, 0, 0x64u);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, refreshed, 0x56Au);
    }
    else if ( v8 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)(v8 + 64) + 96LL))(v8 + 64, v40);
LABEL_24:
      v9 = v22;
    }
  }
LABEL_25:
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v9, 0x1B8u);
  v23 = *((_BYTE *)v2 + 21824) && v9 >= 0;
  *((_BYTE *)v2 + 21825) = v23;
  if ( v9 < 0 )
  {
    if ( v9 != -2003304307 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v9, 0x1C5u);
  }
  else
  {
    v24 = 0LL;
    if ( v9 != 142213121 )
      goto LABEL_31;
  }
  v29 = *((_QWORD *)v2 + 2686);
  v30 = 0LL;
  if ( *(_QWORD *)(v29 + 88) )
  {
    v30 = *(_QWORD *)(v29 + 232);
    v31 = *((_QWORD *)v2 + 5) - v30;
  }
  else
  {
    v31 = *((_QWORD *)v2 + 5);
  }
  v32 = v30 + *((_QWORD *)v2 + 20) * (v31 / *((_QWORD *)v2 + 20) + 1);
  *((_QWORD *)v2 + 2) = CPartitionScheduler::GetAbsoluteTime((CPartitionVerticalBlankScheduler *)((char *)v2 + 8));
  CPartitionVerticalBlankScheduler::TraceTime(v2);
  v33 = *((_QWORD *)v2 + 5);
  if ( v33 >= v32 )
    v32 = *((_QWORD *)v2 + 20) * (v33 / *((_QWORD *)v2 + 20) + 1);
  v3 = 1000 * (v32 - v33) / g_qpcFrequency.QuadPart + 1;
  Sleep(v3);
  v9 = 0;
  *(_BYTE *)(*((_QWORD *)v2 + 2685) + 1320LL) = 1;
  v24 = 1LL;
LABEL_31:
  v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_qq(this, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v24, v3);
    v25 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v25 & 4) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_WFVB_Stop);
  v26 = (char *)v2 + 25480;
  if ( v26[24] )
  {
    *(_WORD *)(v26 + 25) = 1;
    *((_QWORD *)v26 + 6) = 0LL;
    *((_QWORD *)v26 + 5) = 0LL;
    *((_QWORD *)v26 + 5) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v26);
  }
  return (unsigned int)v9;
}
