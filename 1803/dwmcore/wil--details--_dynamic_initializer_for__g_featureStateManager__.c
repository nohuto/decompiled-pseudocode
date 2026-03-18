/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020
 * Callers:
 *     <none>
 * Callees:
 *     ?Construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800DA6A4 (-Construct@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAA.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::Construct();
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
