/*
 * XREFs of ?GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000F330
 * Callers:
 *     ?GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EC10 (-GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAKPEAPEAU_GUID@@.c)
 *     ?GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000EF90 (-GetIids@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
