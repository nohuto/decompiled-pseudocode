/*
 * XREFs of ?Destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180048D3C
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x18004BA30 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180039434 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18006CCA4 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Destroy(wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    if ( xmmword_1800C9E90 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(xmmword_1800C9E90);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
