/*
 * XREFs of ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FD00
 * Callers:
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FA50 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID.c)
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FB20 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
