/*
 * XREFs of ?GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GetIids(
           (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
           a2,
           a3);
}
