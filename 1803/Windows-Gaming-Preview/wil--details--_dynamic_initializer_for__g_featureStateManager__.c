/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_18005D088 = 0LL;
  stru_18005D060.Ptr = 0LL;
  SRWLock.Ptr = 0LL;
  *(_OWORD *)&pti = 0LL;
  word_18005D080 = 0;
  xmmword_18005D090 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18005D0C8 = 0LL;
  qword_18005D0E0 = 0LL;
  xmmword_18005D0D0 = 0LL;
  InitializeCriticalSectionEx(&stru_18005D0E8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18005D110 = 0LL;
  xmmword_18005D120 = 0LL;
  xmmword_18005D130 = 0LL;
  xmmword_18005D140 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
