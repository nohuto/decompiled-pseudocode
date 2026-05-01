/*
 * XREFs of ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180022290
 * Callers:
 *     ?GetTrustLevel@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180021DB0 (-GetTrustLevel@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAW4T.c)
 *     ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJPEAW4TrustLevel@@@Z @ 0x180021DF0 (-GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJPEAW4Trust.c)
 *     ?GetTrustLevel@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800220E0 (-GetTrustLevel@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
