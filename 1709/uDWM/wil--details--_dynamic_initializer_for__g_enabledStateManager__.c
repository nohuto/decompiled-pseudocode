/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800010B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18003FC88 (--0-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>();
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
