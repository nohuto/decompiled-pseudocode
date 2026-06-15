/*
 * XREFs of ??0?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800386B0
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001150 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 * Callees:
 *     <none>
 */

char *wil::shutdown_aware_object<wil::details::EnabledStateManager>::shutdown_aware_object<wil::details::EnabledStateManager>()
{
  char *result; // rax

  wil::details::g_enabledStateManager = 1;
  qword_18012BE78 = 0LL;
  qword_18012BE80 = 0LL;
  byte_18012BE88 = 0;
  qword_18012BED0 = 0LL;
  result = &wil::details::g_enabledStateManager;
  xmmword_18012BE90 = 0LL;
  xmmword_18012BEA0 = 0LL;
  xmmword_18012BEB0 = 0LL;
  xmmword_18012BEC0 = 0LL;
  return result;
}
