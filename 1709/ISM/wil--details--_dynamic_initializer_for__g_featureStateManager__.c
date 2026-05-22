/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18010D6B8 = 0LL;
  qword_18010D6D0 = 0LL;
  xmmword_18010D6C0 = 0LL;
  InitializeCriticalSectionEx(&stru_18010D6D8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18010D700 = 0LL;
  xmmword_18010D710 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
