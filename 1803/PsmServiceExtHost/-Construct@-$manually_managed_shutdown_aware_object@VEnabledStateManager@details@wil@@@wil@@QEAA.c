/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18003E260
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_180093730 = 0LL;
  qword_180093728 = 0LL;
  byte_180093738 = 0;
  xmmword_180093740 = 0LL;
  xmmword_180093750 = 0LL;
  xmmword_180093760 = 0LL;
  xmmword_180093770 = 0LL;
  xmmword_180093780 = 0LL;
  return result;
}
