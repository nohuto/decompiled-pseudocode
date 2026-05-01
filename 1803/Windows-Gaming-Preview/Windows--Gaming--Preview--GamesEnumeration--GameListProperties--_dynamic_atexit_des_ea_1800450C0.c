/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__ @ 0x1800450C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005DEA0);
  qword_18005DEA0 = 0LL;
  return result;
}
