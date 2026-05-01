/*
 * XREFs of ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800223D0
 * Callers:
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180021E00 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022100 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800221E0 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::QueryInterface(
           this,
           a2,
           a3);
}
