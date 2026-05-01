/*
 * XREFs of ?GetTrustLevel@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18000F010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GetTrustLevel(
        __int64 a1,
        enum TrustLevel *a2)
{
  return Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetTrustLevel(
           (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)(a1 - 24),
           a2);
}
