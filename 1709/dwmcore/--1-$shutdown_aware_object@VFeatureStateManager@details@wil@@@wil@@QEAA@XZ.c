/*
 * XREFs of ??1?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800C2518
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__ @ 0x1800C76D0 (wil--details--_dynamic_atexit_destructor_for__g_featureStateManager__.c)
 * Callees:
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x180079C8C (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x1801329C8 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

void __fastcall wil::shutdown_aware_object<wil::details::FeatureStateManager>::~shutdown_aware_object<wil::details::FeatureStateManager>(
        wil *a1)
{
  if ( wil::ProcessShutdownInProgress(a1) )
  {
    wil::details::g_featureStateManager = 0;
    if ( qword_180272040 )
      wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(qword_180272040);
  }
  else
  {
    wil::details::FeatureStateManager::~FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  }
}
