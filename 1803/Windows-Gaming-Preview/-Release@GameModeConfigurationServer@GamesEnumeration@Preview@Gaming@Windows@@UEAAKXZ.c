/*
 * XREFs of ?Release@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18000FDF0
 * Callers:
 *     ?Release@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180036490 (-Release@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180036630 (-Release@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(this);
}
