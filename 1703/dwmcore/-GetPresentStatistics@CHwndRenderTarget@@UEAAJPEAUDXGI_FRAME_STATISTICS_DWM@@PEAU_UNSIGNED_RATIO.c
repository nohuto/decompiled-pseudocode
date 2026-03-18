/*
 * XREFs of ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18006CB70
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800676A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800700A0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x180187E68 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetPresentStatistics(
        CHwndRenderTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  CHwFullScreenRenderTarget *v5; // rcx
  int (*v6)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *); // rax
  int PresentStatistics; // eax
  int v8; // edi
  UINT32 *v9; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int IsOptedIn; // eax
  char v13; // al
  COverlayContext *v14; // rcx

  if ( *((_BYTE *)this + 725) || (v5 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7)) == 0LL )
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x7A1u);
  }
  else
  {
    v6 = *(int (**)(CHwFullScreenRenderTarget *__hidden, struct DXGI_FRAME_STATISTICS_DWM *))(*(_QWORD *)v5 + 320LL);
    if ( v6 == CHwFullScreenRenderTarget::GetPresentStatistics )
      PresentStatistics = CHwFullScreenRenderTarget::GetPresentStatistics(v5, a2);
    else
      PresentStatistics = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, struct DXGI_FRAME_STATISTICS_DWM *))v6)(
                            v5,
                            a2);
    v8 = PresentStatistics;
    if ( PresentStatistics < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, PresentStatistics, 0x79Cu);
    v9 = (UINT32 *)*((_QWORD *)this + 6);
    a3->uiNumerator = v9[66];
    a3->uiDenominator = v9[67];
  }
  if ( v8 < 0 )
  {
    Manager = DwmCoreAsimov::CDwmEventManager::GetManager((const struct _TlgProvider_t *)v9);
    DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"WindowErrors", L"HandleWindowErrors.", v8);
    if ( v8 == -2003304306 )
    {
      if ( byte_180241C59 )
      {
        v13 = byte_180241C58;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_180241C59 = 1;
        v13 = IsOptedIn != 0;
        byte_180241C58 = v13;
      }
      if ( v13 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)this + 723) = 1;
  }
  else if ( v8 == 142213121 )
  {
    *((_BYTE *)this + 728) = 1;
  }
  else if ( v8 == 142213129 )
  {
    v14 = (COverlayContext *)*((_QWORD *)this + 89);
    *((_BYTE *)this + 728) = 0;
    *((_BYTE *)this + 723) = 1;
    if ( v14 )
    {
      COverlayContext::UpdateMPOCaps(v14, 0LL);
      *(_BYTE *)(*((_QWORD *)this + 89) + 1093LL) = 1;
    }
  }
  return (unsigned int)v8;
}
