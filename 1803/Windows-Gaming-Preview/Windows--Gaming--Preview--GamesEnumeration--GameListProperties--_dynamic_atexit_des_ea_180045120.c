/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__ @ 0x180045120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEB8);
  qword_18005DEB8 = 0LL;
  return result;
}
