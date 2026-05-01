/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__ @ 0x180044220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005BE60);
  qword_18005BE60 = 0LL;
  return result;
}
