/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1800011F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_18004E0E8 = 0LL;
  stru_18004E0C0.Ptr = 0LL;
  SRWLock.Ptr = 0LL;
  xmmword_18004E0D0 = 0LL;
  word_18004E0E0 = 0;
  xmmword_18004E0F0 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18004E128 = 0LL;
  qword_18004E140 = 0LL;
  xmmword_18004E130 = 0LL;
  InitializeCriticalSectionEx(&stru_18004E148, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_18004E170 = 0LL;
  xmmword_18004E180 = 0LL;
  xmmword_18004E190 = 0LL;
  xmmword_18004E1A0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
