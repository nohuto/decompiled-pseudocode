/*
 * XREFs of ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x180014D80
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x180018320 (-GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z @ 0x1800183E0 (-SetSyncRefreshCountWaitTarget@CHwndRenderTarget@@UEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18011CF44 (-UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18011D0D4 (-TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18012FC6C (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::WaitForNextFrameStart(
        CPartitionVerticalBlankScheduler *this,
        char a2)
{
  char v2; // al
  DWORD v3; // ebx
  unsigned __int8 v4; // r15
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // r13
  signed int v10; // edi
  __int64 v11; // r14
  unsigned int v12; // r12d
  __int64 v13; // r15
  CHwndRenderTarget *v14; // rcx
  bool (__fastcall *v15)(CHwndRenderTarget *__hidden); // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  CHwndRenderTarget *v19; // rdi
  int (*v20)(CHwndRenderTarget *__hidden, void **); // rax
  __int64 v21; // rax
  int (*v22)(CHwndRenderTarget *__hidden, unsigned int); // rax
  int refreshed; // eax
  DWORD v24; // ecx
  bool v25; // al
  char v26; // al
  char *v27; // rsi
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  HANDLE Handles[9]; // [rsp+30h] [rbp-48h] BYREF
  void *v35; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+88h] [rbp+10h]
  void *v37; // [rsp+90h] [rbp+18h]

  v2 = Microsoft_Windows_Dwm_CoreEnableBits;
  v3 = 0;
  v4 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Start);
    v2 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  v7 = *((_QWORD *)this + 2626);
  if ( v7 && !*(_BYTE *)(v7 + 272) && *(_BYTE *)(v7 + 632) )
  {
    v8 = *(_DWORD *)(v7 + 664);
    if ( v8 + 1 <= (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 2625) + 664LL) + 1) )
      v8 = *(_DWORD *)(*((_QWORD *)this + 2625) + 664LL);
    v36 = v8 + 1;
  }
  else
  {
    v36 = 0;
  }
  if ( (v2 & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Start);
  if ( a2 )
    v37 = 0LL;
  else
    v37 = (void *)*((_QWORD *)this + 5);
  v9 = 0LL;
  v10 = -2003304307;
  v11 = *(_QWORD *)(*((_QWORD *)this + 9) + 72LL);
  v12 = *(_DWORD *)(v11 + 48);
  if ( v12 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(CHwndRenderTarget **)(v13 + *(_QWORD *)(v11 + 24));
      v15 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v14 + 224LL);
      v16 = v15 == CHwndRenderTarget::IsPrimaryMonitor
          ? CHwndRenderTarget::IsPrimaryMonitor(v14)
          : ((__int64 (*)(void))v15)();
      if ( v16
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + *(_QWORD *)(v11 + 24)) + 192LL))(*(_QWORD *)(v13 + *(_QWORD *)(v11 + 24))) )
      {
        break;
      }
      v9 = (unsigned int)(v9 + 1);
      v13 += 8LL;
      if ( (unsigned int)v9 >= v12 )
        goto LABEL_56;
    }
    v17 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v9);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 64);
      v19 = (CHwndRenderTarget *)(v17 + 64);
      v35 = 0LL;
      v20 = *(int (**)(CHwndRenderTarget *__hidden, void **))(v18 + 80);
      if ( v20 == CHwndRenderTarget::GetVBlankEvent )
        CHwndRenderTarget::GetVBlankEvent(v19, &v35);
      else
        ((void (__fastcall *)(CHwndRenderTarget *, void **))v20)(v19, &v35);
      v21 = *(_QWORD *)v19;
      if ( v35 )
      {
        v22 = *(int (**)(CHwndRenderTarget *__hidden, unsigned int))(v21 + 88);
        if ( v22 == CHwndRenderTarget::SetSyncRefreshCountWaitTarget )
          refreshed = CHwndRenderTarget::SetSyncRefreshCountWaitTarget(v19, v36);
        else
          refreshed = ((__int64 (__fastcall *)(CHwndRenderTarget *, _QWORD))v22)(v19, v36);
        v10 = refreshed;
        if ( refreshed < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, refreshed, 0x4DDu);
        if ( v10 >= 0 && v10 != 142213121 )
        {
          Handles[0] = v35;
          v24 = 1;
          Handles[1] = v37;
          if ( v37 )
            v24 = 2;
          v4 = 0;
          v10 = WaitForMultipleObjects(v24, Handles, 0, 0x64u);
          if ( !v10 )
            byte_18026EB90 = 1;
          goto LABEL_33;
        }
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, void *))(v21 + 96))(v19, v37);
      }
    }
LABEL_56:
    v4 = 0;
  }
LABEL_33:
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v10, 0x1DBu);
  v25 = *((_BYTE *)this + 21340) && v10 >= 0;
  *((_BYTE *)this + 21341) = v25;
  if ( v10 < 0 || v10 == 142213121 )
  {
    v4 = 1;
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2003304307 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, v10, 0x1E8u);
    v29 = *((_QWORD *)this + 2626);
    v30 = 0LL;
    if ( *(_QWORD *)(v29 + 88) )
    {
      v30 = *(_QWORD *)(v29 + 232);
      v31 = *((_QWORD *)this + 3690) - v30;
    }
    else
    {
      v31 = *((_QWORD *)this + 3690);
    }
    v32 = v30 + *((_QWORD *)this + 11) * (v31 / *((_QWORD *)this + 11) + 1);
    CPartitionVerticalBlankScheduler::UpdateCurrentTime(this);
    CPartitionVerticalBlankScheduler::TraceTime(this);
    v33 = *((_QWORD *)this + 3690);
    if ( v33 >= v32 )
      v32 = v33 + *((_QWORD *)this + 11) - v33 % *((_QWORD *)this + 11);
    v3 = 1000 * (v32 - v33) / g_qpcFrequency.QuadPart + 1;
    Sleep(v3);
    v10 = 0;
    *(_BYTE *)(*((_QWORD *)this + 2625) + 1296LL) = 1;
  }
  v26 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qq(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_INTERNAL_Stop, v4, v3);
    v26 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v26 & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFVB_Stop);
  v27 = (char *)this + 24800;
  if ( v27[24] )
  {
    *(_WORD *)(v27 + 25) = 1;
    *((_QWORD *)v27 + 6) = 0LL;
    *((_QWORD *)v27 + 5) = 0LL;
    *((_QWORD *)v27 + 5) = CDebugFrameCounter::CurrentTime((CDebugFrameCounter *)v27);
  }
  return (unsigned int)v10;
}
