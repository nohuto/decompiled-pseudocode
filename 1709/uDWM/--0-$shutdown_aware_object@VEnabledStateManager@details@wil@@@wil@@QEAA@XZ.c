/*
 * XREFs of ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18003FC88
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800010B0 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

char *wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>()
{
  char *result; // rax

  wil::details::g_enabledStateManager = 1;
  qword_1800C17E8 = 0LL;
  qword_1800C17F0 = 0LL;
  byte_1800C17F8 = 0;
  result = &wil::details::g_enabledStateManager;
  xmmword_1800C1800 = 0LL;
  xmmword_1800C1810 = 0LL;
  xmmword_1800C1820 = 0LL;
  xmmword_1800C1830 = 0LL;
  xmmword_1800C1840 = 0LL;
  return result;
}
