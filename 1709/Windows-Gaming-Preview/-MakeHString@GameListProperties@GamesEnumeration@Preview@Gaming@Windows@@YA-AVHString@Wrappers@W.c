/*
 * XREFs of ?MakeHString@GameListProperties@GamesEnumeration@Preview@Gaming@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180025868
 * Callers:
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x180001380 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Id__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__TileId__ @ 0x1800013B0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__TileId.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameConfigIds__ @ 0x1800013E0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameCo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PhoneProductId__ @ 0x180001410 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__PhoneP.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PackageFamilyName__ @ 0x180001440 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Packag.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__MFURank__ @ 0x180001470 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__MFURan.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DateInstalled__ @ 0x1800014A0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__DateIn.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DesktopAppPath__ @ 0x1800014D0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Deskto.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__ProcessExeFullPaths__ @ 0x180001500 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Proces.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__LastLaunched__ @ 0x180001530 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__LastLa.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameModeSystemDefaults__ @ 0x180001560 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameMo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__KglGameModeDefaults__ @ 0x180001590 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__KglGam.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListProperties::MakeHString(
        HSTRING *a1,
        const WCHAR *a2)
{
  unsigned __int64 v4; // rax
  UINT32 v5; // esi

  *a1 = 0LL;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 <= 0xFFFFFFFF )
    {
      v5 = v4;
      WindowsDeleteString(0LL);
      *a1 = 0LL;
      WindowsCreateString(a2, v5, a1);
    }
  }
  return a1;
}
