/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__ @ 0x180044200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005BE58);
  qword_18005BE58 = 0LL;
  return result;
}
