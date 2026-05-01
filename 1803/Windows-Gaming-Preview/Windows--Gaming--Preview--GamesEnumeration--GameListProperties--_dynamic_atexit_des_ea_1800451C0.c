/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__ @ 0x1800451C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEE0);
  qword_18005DEE0 = 0LL;
  return result;
}
