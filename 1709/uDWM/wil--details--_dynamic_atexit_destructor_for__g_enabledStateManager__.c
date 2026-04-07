/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x180046E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__(wil *a1)
{
  wil::shutdown_aware_object<wil::details::EnabledStateManager>::~shutdown_aware_object<wil::details::EnabledStateManager>(a1);
}
