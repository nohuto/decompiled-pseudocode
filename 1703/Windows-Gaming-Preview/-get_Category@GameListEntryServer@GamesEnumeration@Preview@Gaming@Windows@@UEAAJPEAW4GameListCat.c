/*
 * XREFs of ?get_Category@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4GameListCategory@2345@@Z @ 0x180013E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_Category(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        enum Windows::Gaming::Preview::GamesEnumeration::GameListCategory *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 26);
  return 0LL;
}
