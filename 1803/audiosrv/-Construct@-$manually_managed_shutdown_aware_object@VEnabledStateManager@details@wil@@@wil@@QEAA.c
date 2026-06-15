/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18005FD20
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001110 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_18018AD70 = 0LL;
  qword_18018AD68 = 0LL;
  byte_18018AD78 = 0;
  xmmword_18018AD80 = 0LL;
  xmmword_18018AD90 = 0LL;
  xmmword_18018ADA0 = 0LL;
  xmmword_18018ADB0 = 0LL;
  xmmword_18018ADC0 = 0LL;
  return result;
}
