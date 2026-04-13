/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18015C1D8 = 0LL;
  qword_18015C1F0 = 0LL;
  xmmword_18015C1E0 = 0LL;
  InitializeCriticalSectionEx(&stru_18015C1F8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18015C220 = 0LL;
  xmmword_18015C230 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
