/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x1800012E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_18005DE20 = 0LL;
  stru_18005DE18.Ptr = 0LL;
  byte_18005DE28 = 0;
  xmmword_18005DE30 = 0LL;
  xmmword_18005DE40 = 0LL;
  xmmword_18005DE50 = 0LL;
  xmmword_18005DE60 = 0LL;
  xmmword_18005DE70 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
