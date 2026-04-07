/*
 * XREFs of ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800461D4
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001110 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

char *wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>()
{
  char *result; // rax

  wil::details::g_enabledStateManager = 1;
  qword_1800C1008 = 0LL;
  qword_1800C1010 = 0LL;
  byte_1800C1018 = 0;
  qword_1800C1060 = 0LL;
  result = &wil::details::g_enabledStateManager;
  xmmword_1800C1020 = 0LL;
  xmmword_1800C1030 = 0LL;
  xmmword_1800C1040 = 0LL;
  xmmword_1800C1050 = 0LL;
  return result;
}
