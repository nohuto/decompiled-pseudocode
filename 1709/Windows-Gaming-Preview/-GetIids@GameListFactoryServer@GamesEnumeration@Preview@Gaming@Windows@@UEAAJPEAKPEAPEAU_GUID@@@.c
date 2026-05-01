/*
 * XREFs of ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180022320
 * Callers:
 *     ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180021FF0 (-GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJPEAKPEAPEAU_GUID.c)
 *     ?GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180022230 (-GetIids@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJPEAKPEAPEAU_GUID.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::GetIids(
           this,
           a2,
           a3);
}
