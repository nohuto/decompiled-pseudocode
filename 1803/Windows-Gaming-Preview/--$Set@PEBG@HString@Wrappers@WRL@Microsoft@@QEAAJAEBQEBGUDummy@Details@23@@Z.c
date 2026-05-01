/*
 * XREFs of ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x180017A60
 * Callers:
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__Id__ @ 0x180001430 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Id__.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__TileId__ @ 0x180001470 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__TileId.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__FullTileId__ @ 0x1800014B0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__FullTi.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameConfigIds__ @ 0x1800014F0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameCo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PhoneProductId__ @ 0x180001530 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__PhoneP.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__PackageFamilyName__ @ 0x180001570 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Packag.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__MFURank__ @ 0x1800015B0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__MFURan.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DateInstalled__ @ 0x1800015F0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__DateIn.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__DesktopAppPath__ @ 0x180001630 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Deskto.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__ProcessExeFullPaths__ @ 0x180001670 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__Proces.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__LastLaunched__ @ 0x1800016B0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__LastLa.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__GameModeSystemDefaults__ @ 0x1800016F0 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__GameMo.c)
 *     Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_initializer_for__KglGameModeDefaults__ @ 0x180001730 (Windows--Gaming--Preview--GamesEnumeration--GameListProperties--_dynamic_initializer_for__KglGam.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180015460 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800288EC (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(HSTRING *string, const WCHAR **a2)
{
  const WCHAR *v2; // rdi
  unsigned __int64 v4; // rax
  int v5; // esi
  unsigned int v6; // r8d
  UINT32 v7; // edx
  const WCHAR *v8; // rcx

  v2 = *a2;
  if ( !*a2 )
  {
    WindowsDeleteString(*string);
    v7 = 0;
    v8 = &word_18004F460;
    goto LABEL_9;
  }
  v4 = -1LL;
  do
    ++v4;
  while ( v2[v4] );
  v5 = -1;
  if ( v4 <= 0xFFFFFFFF )
    v5 = v4;
  v6 = v4 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v4 <= 0xFFFFFFFF )
  {
    WindowsDeleteString(*string);
    v7 = v5;
    v8 = v2;
LABEL_9:
    *string = 0LL;
    return (unsigned int)WindowsCreateString(v8, v7, string);
  }
  return v6;
}
