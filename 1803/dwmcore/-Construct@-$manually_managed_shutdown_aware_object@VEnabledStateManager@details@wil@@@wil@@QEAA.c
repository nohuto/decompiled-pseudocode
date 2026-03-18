/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x1800DA628
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

__int64 wil::manually_managed_shutdown_aware_object<wil::details::EnabledStateManager>::Construct()
{
  __int64 result; // rax

  result = 0LL;
  wil::details::g_enabledStateManager = 1;
  qword_1802D6B20 = 0LL;
  stru_1802D6B18.Ptr = 0LL;
  byte_1802D6B28 = 0;
  unk_1802D6B30 = 0LL;
  xmmword_1802D6B40 = 0LL;
  xmmword_1802D6B50 = 0LL;
  xmmword_1802D6B60 = 0LL;
  xmmword_1802D6B70 = 0LL;
  return result;
}
