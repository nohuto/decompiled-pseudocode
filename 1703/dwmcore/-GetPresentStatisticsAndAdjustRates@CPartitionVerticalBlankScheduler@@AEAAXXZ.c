/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x18006BEE0 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18006CB70 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_qNR0 @ 0x18013BC14 (Template_qNR0.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  int v6; // r14d
  int v7; // r12d
  unsigned int v8; // esi
  unsigned int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // rdx
  char v12; // al
  CHwndRenderTarget *v13; // rdi
  __int64 (__fastcall *v14)(CHwndRenderTarget *, __int64); // rax
  char v15; // al
  CHwndRenderTarget *v16; // rcx
  struct _UNSIGNED_RATIO *v17; // r8
  struct DXGI_FRAME_STATISTICS_DWM *v18; // rdx
  __int64 (__fastcall *v19)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *); // rax
  int PresentStatistics; // eax
  int v21; // ebp
  bool (__fastcall *v22)(CHwndRenderTarget *__hidden); // rax
  bool IsPrimaryMonitor; // al
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int i; // edx
  __int64 v27; // r9
  unsigned __int64 v28; // r8
  float v29; // xmm2_4
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  unsigned int v36; // edx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rsi
  __int64 v41; // r8
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // edx
  __int64 v46; // r8
  _DWORD *v47; // rax
  unsigned int v48; // r8d
  __int64 v49; // r9
  char v50; // [rsp+40h] [rbp-D8h]
  __int64 v51; // [rsp+48h] [rbp-D0h]
  _DWORD v53[32]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = *((_QWORD *)v1 + 2685) + 656LL;
  v4 = (__int128 *)(*((_QWORD *)v1 + 2686) + 656LL);
  do
  {
    v3 += 128LL;
    v5 = *v4;
    v4 += 8;
    *(_OWORD *)(v3 - 128) = v5;
    *(_OWORD *)(v3 - 112) = *(v4 - 7);
    *(_OWORD *)(v3 - 96) = *(v4 - 6);
    *(_OWORD *)(v3 - 80) = *(v4 - 5);
    *(_OWORD *)(v3 - 64) = *(v4 - 4);
    *(_OWORD *)(v3 - 48) = *(v4 - 3);
    *(_OWORD *)(v3 - 32) = *(v4 - 2);
    *(_OWORD *)(v3 - 16) = *(v4 - 1);
    --v2;
  }
  while ( v2 );
  v6 = 0;
  *(_QWORD *)v3 = *(_QWORD *)v4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(*((_QWORD *)v1 + 2685) + 656LL) = 16;
  v10 = *((_QWORD *)v1 + 2685);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 16) + 32LL);
  v12 = 0;
  v51 = v11;
  v50 = 0;
  if ( *(_DWORD *)(v11 + 48) )
  {
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v10 + 656) )
      {
LABEL_24:
        v1 = this;
        v6 = 0;
        v12 = v50;
        goto LABEL_25;
      }
      v13 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8LL * v9);
      v14 = *(__int64 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v13 + 48LL);
      v15 = (char *)v14 == (char *)CHwndRenderTarget::IsOfType ? CHwndRenderTarget::IsOfType(v13, 38LL) : v14(v13, 38LL);
      if ( v15 && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v13 + 176LL))(v13) )
        break;
LABEL_23:
      v11 = v51;
      if ( ++v9 >= *(_DWORD *)(v51 + 48) )
        goto LABEL_24;
    }
    v16 = (CHwndRenderTarget *)((char *)v13 + 64);
    v17 = (struct _UNSIGNED_RATIO *)&v53[2 * v8];
    v18 = (struct DXGI_FRAME_STATISTICS_DWM *)(32LL * v8 + v10 + 664);
    v19 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*((_QWORD *)v13 + 8) + 112LL);
    if ( v19 == CHwndRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwndRenderTarget::GetPresentStatistics(v16, v18, v17);
    else
      PresentStatistics = v19(v16, v18, v17);
    v21 = PresentStatistics;
    v22 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v13 + 208LL);
    if ( v22 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v13);
    else
      IsPrimaryMonitor = v22(v13);
    if ( IsPrimaryMonitor )
    {
      if ( v21 == 142213121 )
      {
        v50 = 1;
LABEL_20:
        if ( !v7 || v7 >= 0 && v21 < 0 )
          v7 = v21;
        ++v8;
        goto LABEL_23;
      }
      v50 = 0;
    }
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3568, 2u, v21, 0x4EFu);
    goto LABEL_20;
  }
LABEL_25:
  *(_DWORD *)(v10 + 656) = v8;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3568, 2u, v7, 0xD8Bu);
    MilInstrumentationCheckHR(0x14u, &dword_1801F33B0, 1u, v7, 0x34Eu);
LABEL_71:
    *(_BYTE *)(*((_QWORD *)v1 + 2685) + 648LL) = 0;
    goto LABEL_57;
  }
  if ( v12 )
    goto LABEL_71;
  v24 = *((_QWORD *)v1 + 2685);
  if ( !*(_DWORD *)(v24 + 656) )
    goto LABEL_71;
  *(_BYTE *)(v24 + 648) = 1;
  *(_DWORD *)(*((_QWORD *)v1 + 2685) + 96LL) = *(_DWORD *)(*((_QWORD *)v1 + 2685) + 656LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      *((_QWORD *)v1 + 2685),
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)v1 + 2685) + 656LL),
      32,
      *((_QWORD *)v1 + 2685) + 664LL);
  v25 = *((_QWORD *)v1 + 2685);
  for ( i = 0; i < *(_DWORD *)(v25 + 96); v25 = *((_QWORD *)v1 + 2685) )
  {
    v27 = i;
    v28 = 0LL;
    v29 = (float)(int)g_qpcFrequency.LowPart / (float)((float)(int)v53[2 * i] / (float)(int)v53[2 * i + 1]);
    if ( v29 >= 9.223372e18 )
    {
      v29 = v29 - 9.223372e18;
      if ( v29 < 9.223372e18 )
        v28 = 0x8000000000000000uLL;
    }
    ++i;
    *(_QWORD *)(v25 + 8 * v27 + 520) = v28 + (unsigned int)(int)v29;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qNR0(
      (unsigned int)v53,
      (unsigned int)&EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)v1 + 2685) + 96LL),
      8,
      (__int64)v53);
  if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      *((_QWORD *)v1 + 2685),
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)v1 + 2685) + 680LL) - *(_DWORD *)(*((_QWORD *)v1 + 2685) + 668LL)),
      *(_QWORD *)(*((_QWORD *)v1 + 2685) + 688LL) - *(_QWORD *)(*((_QWORD *)v1 + 2685) + 672LL));
  }
  v30 = *((_QWORD *)v1 + 2686);
  if ( *(_BYTE *)(v30 + 648) )
  {
    if ( !*((_BYTE *)v1 + 21824) )
    {
      v31 = *(_QWORD *)(v30 + 688);
      v32 = *((_QWORD *)v1 + 2685);
      if ( v31 > 0 )
      {
        v33 = *(_QWORD *)(v32 + 688);
        if ( v33 > v31 )
        {
          v34 = *(_DWORD *)(v32 + 680);
          v35 = v33 - v31;
          v36 = *(_DWORD *)(v30 + 680);
          if ( v34 < v36 )
            v37 = ~v36 + (unsigned __int64)(v34 + 1);
          else
            v37 = v34 - v36;
          v38 = *((_QWORD *)v1 + 20);
          v39 = (v35 + (v38 >> 1)) / v38;
          v40 = v35 / v37;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_xxxxx(
              g_qpcFrequency.LowPart,
              (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
              v37,
              v39,
              v35,
              v35 / v37,
              g_qpcFrequency.QuadPart);
          if ( v40 && v39 <= 7 )
          {
            v41 = *((_QWORD *)v1 + 20);
            v42 = (v40 + 15 * v41) >> 4;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
              Template_x(v38, &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD, v41);
            v43 = 10000000 * (v42 / g_qpcFrequency.QuadPart)
                + 10000000 * (v42 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
            if ( v43 )
            {
              v44 = v43 * *((unsigned int *)v1 + 42);
              *((_QWORD *)v1 + 20) = v42;
              *((_QWORD *)v1 + 23) = v44;
              *((_QWORD *)v1 + 18) = v43;
            }
          }
        }
      }
    }
  }
  v45 = *(_DWORD *)(*((_QWORD *)v1 + 2685) + 680LL);
  if ( *((_DWORD *)v1 + 5464) )
  {
    v48 = 0;
    do
    {
      v49 = *(_QWORD *)(*((_QWORD *)v1 + 2729) + 8LL * v48);
      if ( *(_QWORD *)(v49 + 56) )
      {
        if ( !*(_DWORD *)(v49 + 24) )
          *(_DWORD *)(v49 + 24) = v45;
        *(_DWORD *)(v49 + 28) = v45;
      }
      ++v48;
    }
    while ( v48 < *((_DWORD *)v1 + 5464) );
  }
  v3 = 10LL;
  v46 = *(unsigned int *)(*((_QWORD *)v1 + 2685) + 680LL);
  v47 = (_DWORD *)((char *)v1 + 22564);
  do
  {
    if ( *(v47 - 28) )
    {
      if ( !*v47 )
        *v47 = v46;
      v47[1] = v46;
      ++v6;
    }
    v47 += 50;
    --v3;
  }
  while ( v3 );
  if ( v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(0LL, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT, v46);
LABEL_57:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v3, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
