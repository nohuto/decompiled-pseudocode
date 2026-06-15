/*
 * XREFs of ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800323A0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001160 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

char *wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>()
{
  char *result; // rax

  wil::details::g_enabledStateManager = 1;
  qword_18014C028 = 0LL;
  qword_18014C030 = 0LL;
  byte_18014C038 = 0;
  result = &wil::details::g_enabledStateManager;
  xmmword_18014C040 = 0LL;
  xmmword_18014C050 = 0LL;
  xmmword_18014C060 = 0LL;
  xmmword_18014C070 = 0LL;
  xmmword_18014C080 = 0LL;
  return result;
}
