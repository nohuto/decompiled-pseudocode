/*
 * XREFs of ?Construct@?$manually_managed_shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAAXXZ @ 0x180048C30
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
  qword_1800C9FA0 = 0LL;
  qword_1800C9F98 = 0LL;
  byte_1800C9FA8 = 0;
  xmmword_1800C9FB0 = 0LL;
  xmmword_1800C9FC0 = 0LL;
  xmmword_1800C9FD0 = 0LL;
  xmmword_1800C9FE0 = 0LL;
  xmmword_1800C9FF0 = 0LL;
  return result;
}
