/*
 * XREFs of ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800261E0
 * Callers:
 *     ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180022D40 (-Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKX.c)
 *     ?Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x180022D70 (-Release@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAA.c)
 *     ?Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ @ 0x180023080 (-Release@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::Release(
        __int64 this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::Release(this);
}
