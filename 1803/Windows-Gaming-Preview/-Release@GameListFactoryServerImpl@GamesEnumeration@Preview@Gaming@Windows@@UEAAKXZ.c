/*
 * XREFs of ?Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800267F0
 * Callers:
 *     ?Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180023020 (-Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180023150 (-Release@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2>::Release(this);
}
