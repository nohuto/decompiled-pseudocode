/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800013C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_1802B7B18 = 0LL;
  qword_1802B7B30 = 0LL;
  xmmword_1802B7B20 = 0LL;
  InitializeCriticalSectionEx(&stru_1802B7B38, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_1802B7B60 = 0LL;
  xmmword_1802B7B70 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
