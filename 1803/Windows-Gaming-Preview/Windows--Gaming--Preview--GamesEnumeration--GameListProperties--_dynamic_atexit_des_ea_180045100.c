/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__ @ 0x180045100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEB0);
  qword_18005DEB0 = 0LL;
  return result;
}
