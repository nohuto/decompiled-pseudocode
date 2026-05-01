/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  InitializeCriticalSectionEx(&CriticalSection, 0, 0);
  qword_18003B0A0 = 0LL;
  byte_18003B0A8 = 0;
  xmmword_18003B0B0 = 0LL;
  xmmword_18003B0C0 = 0LL;
  xmmword_18003B0D0 = 0LL;
  wil::details::g_featureStateManager = 1;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
