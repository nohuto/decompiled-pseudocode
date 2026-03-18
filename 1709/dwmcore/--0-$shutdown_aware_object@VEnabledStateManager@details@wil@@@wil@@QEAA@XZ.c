/*
 * XREFs of ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800C2554
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800011D0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

char *wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>()
{
  char *result; // rax

  wil::details::g_enabledStateManager = 1;
  qword_180272118 = 0LL;
  qword_180272120 = 0LL;
  byte_180272128 = 0;
  result = &wil::details::g_enabledStateManager;
  xmmword_180272130 = 0LL;
  xmmword_180272140 = 0LL;
  xmmword_180272150 = 0LL;
  xmmword_180272160 = 0LL;
  xmmword_180272170 = 0LL;
  return result;
}
