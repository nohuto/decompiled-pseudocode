/*
 * XREFs of ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039CC0
 * Callers:
 *     ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039B80 (-QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039BA0 (-QueryInterface@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gam_ea_180039BA0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
