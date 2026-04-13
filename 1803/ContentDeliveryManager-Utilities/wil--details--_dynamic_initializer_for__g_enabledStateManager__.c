/*
 * XREFs of wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_enabledStateManager__()
{
  wil::details::g_enabledStateManager = 1;
  qword_18017C200 = 0LL;
  stru_18017C1F8.Ptr = 0LL;
  byte_18017C208 = 0;
  xmmword_18017C210 = 0LL;
  xmmword_18017C220 = 0LL;
  xmmword_18017C230 = 0LL;
  xmmword_18017C240 = 0LL;
  xmmword_18017C250 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__);
}
