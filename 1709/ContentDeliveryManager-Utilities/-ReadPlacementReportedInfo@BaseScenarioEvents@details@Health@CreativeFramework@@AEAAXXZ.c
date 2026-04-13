/*
 * XREFs of ?ReadPlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x180029584
 * Callers:
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x1800293F0 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     ?Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800297D4 (-Evaluate@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXV-$shared_ptr@VCorrelationVe.c)
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x180029F60 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00@details@Health@CreativeFramework@@MEAA-AW4Hea.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x180038740 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800394D8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800395E0 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ @ 0x1800396E8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::ReadPlacementReportedInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)((char *)this + 216);
  *(_WORD *)((char *)this + 251) = 256;
  v2 = *((_QWORD *)this + 30) < 8uLL;
  v3 = (_DWORD *)((char *)this + 104);
  pcbData = 36;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  if ( RegGetValueW(HKEY_CURRENT_USER, v1, L"PlacementReported", 8u, 0LL, (char *)this + 104, &pcbData)
    || pcbData <= 4
    || *(_BYTE *)v3 != 4 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 4;
    memset_0((char *)this + 112, 0, 0x20uLL);
  }
}
