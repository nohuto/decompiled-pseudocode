/*
 * XREFs of ?GetTrustLevel@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJPEAW4TrustLevel@@@Z @ 0x1800220E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)(a1 - 48),
           a2);
}
