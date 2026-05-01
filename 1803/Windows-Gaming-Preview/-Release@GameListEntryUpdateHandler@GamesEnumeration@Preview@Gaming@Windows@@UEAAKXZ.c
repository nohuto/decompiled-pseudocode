/*
 * XREFs of ?Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180026740
 * Callers:
 *     ?Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180022F60 (-Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x1800230C0 (-Release@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler>::Release(this);
}
