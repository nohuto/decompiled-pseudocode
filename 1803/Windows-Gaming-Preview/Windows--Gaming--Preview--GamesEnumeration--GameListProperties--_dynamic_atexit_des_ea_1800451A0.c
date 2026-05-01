/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__ @ 0x1800451A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DED8);
  qword_18005DED8 = 0LL;
  return result;
}
