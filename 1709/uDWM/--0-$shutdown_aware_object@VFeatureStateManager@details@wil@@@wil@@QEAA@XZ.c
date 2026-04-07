/*
 * XREFs of ??0?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18003F694
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800010D0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x1800400F0 (--0FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

char *wil::shutdown_aware_object<wil::details::FeatureStateManager>::shutdown_aware_object<wil::details::FeatureStateManager>()
{
  wil::details::FeatureStateManager::FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  return &wil::details::g_featureStateManager;
}
