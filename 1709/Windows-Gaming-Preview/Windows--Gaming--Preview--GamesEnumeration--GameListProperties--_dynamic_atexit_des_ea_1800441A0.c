/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__ @ 0x1800441A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005BE40);
  qword_18005BE40 = 0LL;
  return result;
}
