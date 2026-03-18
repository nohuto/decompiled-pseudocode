/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180014230
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180018220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0qNR0 @ 0x180126A5C (McTemplateU0qNR0.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 *     McTemplateU0xxxxx @ 0x180126F0C (McTemplateU0xxxxx.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CPartitionVerticalBlankScheduler *this)
{
  CPartitionVerticalBlankScheduler *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __int128 *v4; // rax
  __int128 v5; // xmm0
  int v6; // r12d
  int v7; // r15d
  unsigned int v8; // esi
  unsigned int v9; // r14d
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
  unsigned int i; // r8d
  LONGLONG v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  unsigned __int64 v35; // r8
  unsigned int v36; // edx
  unsigned __int64 v37; // r10
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rsi
  __int64 v40; // r8
  unsigned __int64 v41; // rdi
  int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // r8
  _DWORD *v45; // rax
  unsigned int v46; // r8d
  __int64 v47; // r9
  char v48; // [rsp+40h] [rbp-D8h]
  __int64 v49; // [rsp+48h] [rbp-D0h]
  _DWORD v51[32]; // [rsp+60h] [rbp-B8h] BYREF

  v1 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v2 = 4LL;
  v3 = (_QWORD *)(*((_QWORD *)v1 + 2625) + 640LL);
  v4 = (__int128 *)(*((_QWORD *)v1 + 2626) + 640LL);
  do
  {
    v3 += 16;
    v5 = *v4;
    v4 += 8;
    *((_OWORD *)v3 - 8) = v5;
    *((_OWORD *)v3 - 7) = *(v4 - 7);
    *((_OWORD *)v3 - 6) = *(v4 - 6);
    *((_OWORD *)v3 - 5) = *(v4 - 5);
    *((_OWORD *)v3 - 4) = *(v4 - 4);
    *((_OWORD *)v3 - 3) = *(v4 - 3);
    *((_OWORD *)v3 - 2) = *(v4 - 2);
    *((_OWORD *)v3 - 1) = *(v4 - 1);
    --v2;
  }
  while ( v2 );
  v6 = 0;
  *v3 = *(_QWORD *)v4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(*((_QWORD *)v1 + 2625) + 640LL) = 16;
  v10 = *((_QWORD *)v1 + 2625);
  v11 = *(_QWORD *)(*((_QWORD *)v1 + 9) + 72LL);
  v12 = 0;
  v49 = v11;
  v48 = 0;
  if ( *(_DWORD *)(v11 + 48) )
  {
    while ( 1 )
    {
      if ( v8 >= *(_DWORD *)(v10 + 640) )
      {
LABEL_24:
        v1 = this;
        v6 = 0;
        v12 = v48;
        goto LABEL_25;
      }
      v13 = *(CHwndRenderTarget **)(*(_QWORD *)(v11 + 24) + 8LL * v9);
      v14 = *(__int64 (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)v13 + 48LL);
      v15 = (char *)v14 == (char *)CHwndRenderTarget::IsOfType ? CHwndRenderTarget::IsOfType(v13, 70LL) : v14(v13, 70LL);
      if ( v15 && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v13 + 192LL))(v13) )
        break;
LABEL_23:
      v11 = v49;
      if ( ++v9 >= *(_DWORD *)(v49 + 48) )
        goto LABEL_24;
    }
    v16 = (CHwndRenderTarget *)((char *)v13 + 64);
    v17 = (struct _UNSIGNED_RATIO *)&v51[2 * v8];
    v18 = (struct DXGI_FRAME_STATISTICS_DWM *)(32LL * v8 + v10 + 648);
    v19 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *, struct _UNSIGNED_RATIO *))(*((_QWORD *)v13 + 8) + 112LL);
    if ( v19 == CHwndRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwndRenderTarget::GetPresentStatistics(v16, v18, v17);
    else
      PresentStatistics = v19(v16, v18, v17);
    v21 = PresentStatistics;
    v22 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v13 + 224LL);
    if ( v22 == CHwndRenderTarget::IsPrimaryMonitor )
      IsPrimaryMonitor = CHwndRenderTarget::IsPrimaryMonitor(v13);
    else
      IsPrimaryMonitor = v22(v13);
    if ( IsPrimaryMonitor )
    {
      if ( v21 == 142213121 )
      {
        v48 = 1;
LABEL_20:
        if ( !v7 || v7 >= 0 && v21 < 0 )
          v7 = v21;
        ++v8;
        goto LABEL_23;
      }
      v48 = 0;
    }
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D10, 2u, v21, 0x455u);
    goto LABEL_20;
  }
LABEL_25:
  *(_DWORD *)(v10 + 640) = v8;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D10, 2u, v7, 0xC4Au);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201CF4, 1u, v7, 0x365u);
LABEL_74:
    *(_BYTE *)(*((_QWORD *)v1 + 2625) + 632LL) = 0;
    goto LABEL_56;
  }
  if ( v12 )
    goto LABEL_74;
  v24 = *((_QWORD *)v1 + 2625);
  if ( !*(_DWORD *)(v24 + 640) )
    goto LABEL_74;
  *(_BYTE *)(v24 + 632) = 1;
  *(_DWORD *)(*((_QWORD *)v1 + 2625) + 96LL) = *(_DWORD *)(*((_QWORD *)v1 + 2625) + 640LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qNR0(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
      *(_DWORD *)(*((_QWORD *)v1 + 2625) + 640LL),
      32,
      *((_QWORD *)v1 + 2625) + 648LL);
  v25 = *((_QWORD *)v1 + 2625);
  for ( i = 0; i < *(_DWORD *)(v25 + 96); v25 = *((_QWORD *)v1 + 2625) )
  {
    v27 = g_qpcFrequency.QuadPart * (unsigned int)v51[2 * i + 1];
    if ( v51[2 * i] == 60020LL )
    {
      v28 = (__int64)((unsigned __int128)(v27 * (__int128)0x45E1BBDBC331D5CBLL) >> 64) >> 14;
      v29 = (v28 >> 63) + v28;
    }
    else
    {
      v29 = v27 / (unsigned int)v51[2 * i];
    }
    *(_QWORD *)(v25 + 8LL * i++ + 504) = v29;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qNR0(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_GETFRAMERATE,
      *(_DWORD *)(*((_QWORD *)v1 + 2625) + 96LL),
      8,
      (__int64)v51);
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_STATS_DELTAS)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xx(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_STATS_DELTAS,
      (unsigned int)(*(_DWORD *)(*((_QWORD *)v1 + 2625) + 664LL) - *(_DWORD *)(*((_QWORD *)v1 + 2625) + 652LL)),
      *(_QWORD *)(*((_QWORD *)v1 + 2625) + 672LL) - *(_QWORD *)(*((_QWORD *)v1 + 2625) + 656LL));
  }
  v30 = *((_QWORD *)v1 + 2626);
  if ( *(_BYTE *)(v30 + 632) )
  {
    if ( !*((_BYTE *)v1 + 21340) )
    {
      v31 = *(_QWORD *)(v30 + 672);
      v32 = *((_QWORD *)v1 + 2625);
      if ( v31 > 0 )
      {
        v33 = *(_QWORD *)(v32 + 672);
        if ( v33 > v31 )
        {
          v34 = *(_DWORD *)(v32 + 664);
          v35 = v33 - v31;
          v36 = *(_DWORD *)(v30 + 664);
          if ( v34 < v36 )
            v37 = ~v36 + (unsigned __int64)(v34 + 1);
          else
            v37 = v34 - v36;
          v38 = (v35 + (*((_QWORD *)v1 + 11) >> 1)) / *((_QWORD *)v1 + 11);
          v39 = v35 / v37;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0xxxxx(
              g_qpcFrequency.LowPart,
              (unsigned int)&EVTDESC_SCHEDULE_ADJUST_PERIODS,
              v37,
              v38,
              v35,
              v35 / v37,
              g_qpcFrequency.QuadPart);
          if ( v39 && v38 <= 7 )
          {
            v40 = *((_QWORD *)v1 + 11);
            v41 = (v39 + 15 * v40) >> 4;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
              McTemplateU0x(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_SCHEDULE_ADJUST_NEW_REFRESH_PERIOD,
                v40);
            if ( v41 )
              *((_QWORD *)v1 + 11) = v41;
          }
        }
      }
    }
  }
  v42 = *(_DWORD *)(*((_QWORD *)v1 + 2625) + 664LL);
  if ( *((_DWORD *)v1 + 5344) )
  {
    v46 = 0;
    do
    {
      v47 = *(_QWORD *)(*((_QWORD *)v1 + 2669) + 8LL * v46);
      if ( *(_QWORD *)(v47 + 56) )
      {
        if ( !*(_DWORD *)(v47 + 24) )
          *(_DWORD *)(v47 + 24) = v42;
        *(_DWORD *)(v47 + 28) = v42;
      }
      ++v46;
    }
    while ( v46 < *((_DWORD *)v1 + 5344) );
  }
  v43 = 10LL;
  v44 = *(unsigned int *)(*((_QWORD *)v1 + 2625) + 664LL);
  v45 = (_DWORD *)((char *)v1 + 22084);
  do
  {
    if ( *(v45 - 28) )
    {
      if ( !*v45 )
        *v45 = v44;
      v45[1] = v44;
      ++v6;
    }
    v45 += 48;
    --v43;
  }
  while ( v43 );
  if ( v6 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT,
      v44);
LABEL_56:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
