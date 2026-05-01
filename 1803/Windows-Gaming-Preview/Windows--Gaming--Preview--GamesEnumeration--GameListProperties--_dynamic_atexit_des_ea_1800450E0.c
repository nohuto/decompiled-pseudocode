/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__ @ 0x1800450E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEA8);
  qword_18005DEA8 = 0LL;
  return result;
}
