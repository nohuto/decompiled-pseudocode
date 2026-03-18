/*
 * XREFs of ??0?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800C24FC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800011F0 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0FeatureStateManager@details@wil@@QEAA@XZ @ 0x1801327D8 (--0FeatureStateManager@details@wil@@QEAA@XZ.c)
 */

char *wil::shutdown_aware_object<wil::details::FeatureStateManager>::shutdown_aware_object<wil::details::FeatureStateManager>()
{
  wil::details::FeatureStateManager::FeatureStateManager((wil::details::FeatureStateManager *)&wil::details::g_featureStateManager);
  return &wil::details::g_featureStateManager;
}
