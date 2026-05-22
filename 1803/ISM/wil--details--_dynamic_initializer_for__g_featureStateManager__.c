/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  qword_180134658 = 0LL;
  stru_180134630.Ptr = 0LL;
  SRWLock.Ptr = 0LL;
  xmmword_180134640 = 0LL;
  word_180134650 = 0;
  xmmword_180134660 = 0LL;
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_180134698 = 0LL;
  qword_1801346B0 = 0LL;
  xmmword_1801346A0 = 0LL;
  InitializeCriticalSectionEx(&stru_1801346B8, 0, 0);
  wil::details::g_featureStateManager = 1;
  xmmword_1801346E0 = 0LL;
  xmmword_1801346F0 = 0LL;
  xmmword_180134700 = 0LL;
  xmmword_180134710 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
