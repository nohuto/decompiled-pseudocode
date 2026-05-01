/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  pti = 0LL;
  byte_180242638 = 0;
  xmmword_180242640 = 0LL;
  xmmword_180242650 = 0LL;
  xmmword_180242660 = 0LL;
  wil::details::g_featureStateManager = 1;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
