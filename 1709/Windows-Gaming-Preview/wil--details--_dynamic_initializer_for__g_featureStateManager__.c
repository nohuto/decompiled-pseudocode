/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18005B0B8 = 0LL;
  qword_18005B0D0 = 0LL;
  xmmword_18005B0C0 = 0LL;
  InitializeCriticalSectionEx(&stru_18005B0D8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18005B100 = 0LL;
  xmmword_18005B110 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
