/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__ @ 0x180045140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEC0);
  qword_18005DEC0 = 0LL;
  return result;
}
