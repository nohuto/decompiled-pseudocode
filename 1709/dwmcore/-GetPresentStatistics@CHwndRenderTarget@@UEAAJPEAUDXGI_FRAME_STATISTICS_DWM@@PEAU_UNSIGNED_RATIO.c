/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180018220
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180014230 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18002EC30 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
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

  v5 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v6 = *(int (**)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 328LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(v5, a2);
    else
      PresentStatistics = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))v6)(
                            v5,
                            a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, PresentStatistics, 0x6F4u);
    v9 = *((_QWORD *)this + 6);
    a3->uiNumerator = *(_DWORD *)(v9 + 268);
    a3->uiDenominator = *(_DWORD *)(v9 + 272);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, -2003304307, 0x6F9u);
  }
  if ( v8 < 0 )
  {
    if ( v8 == -2003304306 )
    {
      if ( byte_180272F71 )
      {
        v12 = byte_180272F70;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180272F71 = 1;
        v12 = IsOptedIn != 0;
        byte_180272F70 = v12;
      }
      if ( v12 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 738) = 1;
  }
  else if ( v8 == 142213121 )
  {
    *((_BYTE *)this + 741) = 1;
  }
  else if ( v8 == 142213129 )
  {
    *((_BYTE *)this + 741) = 0;
    *((_BYTE *)this + 738) = 1;
    CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)((char *)this - 64), 1);
  }
  return (unsigned int)v8;
}
