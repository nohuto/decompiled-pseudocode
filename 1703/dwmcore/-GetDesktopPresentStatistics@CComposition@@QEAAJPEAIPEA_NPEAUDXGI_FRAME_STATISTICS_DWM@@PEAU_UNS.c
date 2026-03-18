/*
 * XREFs of ?GetDesktopPresentStatistics@CComposition@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180131AF0
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013CDA8 (-GetPresentStatisticsAndAdjustRates@CIndependentRefreshRateScheduler@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1801320FC (-GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UN.c)
 */

__int64 __fastcall CComposition::GetDesktopPresentStatistics(
        CComposition *this,
        unsigned int *a2,
        bool *a3,
        struct DXGI_FRAME_STATISTICS_DWM *a4,
        struct _UNSIGNED_RATIO *a5)
{
  CRenderTargetManager *v5; // rcx
  int PresentStatistics; // eax
  unsigned int v7; // ebx

  v5 = (CRenderTargetManager *)*((_QWORD *)this + 4);
  *a3 = 0;
  PresentStatistics = CRenderTargetManager::GetPresentStatistics(v5, a2, a3, a4, a5);
  v7 = PresentStatistics;
  if ( PresentStatistics < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801F3568, 2u, PresentStatistics, 0xD8Bu);
  return v7;
}
