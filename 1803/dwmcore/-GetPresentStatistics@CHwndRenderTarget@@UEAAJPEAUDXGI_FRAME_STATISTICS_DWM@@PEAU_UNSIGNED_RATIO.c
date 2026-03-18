/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800609D0
 * Callers:
 *     ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18005F7D8 (-GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007BAA0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800D7A60 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801C8460 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwndRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  CHwFullScreenRenderTarget *v5; // rcx
  int (*v6)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatistics; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int IsOptedIn; // eax
  char v12; // al

  v5 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    v6 = *(int (**)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 376LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(v5, a2);
    else
      PresentStatistics = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))v6)(
                            v5,
                            a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, PresentStatistics, 0x6B1u);
    v9 = *((_QWORD *)this + 13);
    a3->uiNumerator = *(_DWORD *)(v9 + 288);
    a3->uiDenominator = *(_DWORD *)(v9 + 292);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x6B6u);
  }
  if ( v8 < 0 )
  {
    if ( v8 == -2003304306 )
    {
      if ( byte_1802DA4D8 )
      {
        v12 = byte_1802DA4D9;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1802DA4D8 = 1;
        v12 = IsOptedIn != 0;
        byte_1802DA4D9 = v12;
      }
      if ( v12 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 97) = 1;
  }
  else
  {
    switch ( v8 )
    {
      case 142213121:
        *((_BYTE *)this + 787) = 1;
        break;
      case 142213129:
        *((_BYTE *)this + 787) = 0;
        *((_BYTE *)this + 97) = 1;
        CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)((char *)this - 64), 1);
        break;
      case 142213130:
      case 142213167:
        ScheduleCompositionPass(0LL, 0x2000LL);
        *((_BYTE *)this + 785) = 1;
        break;
    }
  }
  return (unsigned int)v8;
}
