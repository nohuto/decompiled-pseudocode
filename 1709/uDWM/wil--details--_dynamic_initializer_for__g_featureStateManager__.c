/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800010D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18003F694 (--0-$shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::shutdown_aware_object<wil::details::FeatureStateManager>::shutdown_aware_object<wil::details::FeatureStateManager>();
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
