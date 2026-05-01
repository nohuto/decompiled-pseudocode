/*
 * XREFs of ?QueryInterface@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800364C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::QueryInterface(
           (Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *)(a1 - 16),
           a2,
           a3);
}
