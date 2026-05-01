/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x180001380
 * Callers:
 *     <none>
 * Callees:
 *     ?MakeHString@GameListProperties@GamesEnumeration@Preview@Gaming@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180025868 (-MakeHString@GameListProperties@GamesEnumeration@Preview@Gaming@Windows@@YA-AVHString@Wrappers@W.c)
 */

int Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__()
{
  Windows::Gaming::Preview::GamesEnumeration::GameListProperties::MakeHString(&string, L"Id");
  return atexit((void (__cdecl *)())Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__Id__);
}
