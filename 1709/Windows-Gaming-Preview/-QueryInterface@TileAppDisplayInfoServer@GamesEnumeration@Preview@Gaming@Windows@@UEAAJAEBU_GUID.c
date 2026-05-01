/*
 * XREFs of ?QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800363F0
 * Callers:
 *     ?QueryInterface@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035410 (-QueryInterface@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJ.c)
 *     ?QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180035610 (-QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::QueryInterface(
        Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
