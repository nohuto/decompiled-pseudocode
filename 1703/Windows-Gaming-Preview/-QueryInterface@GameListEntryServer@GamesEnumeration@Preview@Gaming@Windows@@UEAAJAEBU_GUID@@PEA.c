/*
 * XREFs of ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009B60
 * Callers:
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009370 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009470 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800094A0 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009550 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009650 (-QueryInterface@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
