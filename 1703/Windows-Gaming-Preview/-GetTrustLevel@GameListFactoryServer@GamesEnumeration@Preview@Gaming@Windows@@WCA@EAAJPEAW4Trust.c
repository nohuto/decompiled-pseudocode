/*
 * XREFs of ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18000F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)(a1 - 32),
           a2);
}
