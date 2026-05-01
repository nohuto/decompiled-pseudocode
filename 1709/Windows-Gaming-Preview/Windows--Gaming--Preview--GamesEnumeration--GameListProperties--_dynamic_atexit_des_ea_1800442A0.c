/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__ @ 0x1800442A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005BE80);
  qword_18005BE80 = 0LL;
  return result;
}
