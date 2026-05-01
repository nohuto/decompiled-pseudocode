/*
 * XREFs of ??1?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000AEF0
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$2 @ 0x180043C75 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::dtor$4 @ 0x180043D3E (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterGameConfig_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager_____ptr64_Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler_____ptr64__::_1_::dtor$1 @ 0x180043E41 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180043E41.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__GUID_const_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler_____ptr64__::_1_::dtor$1 @ 0x180043E59 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180043E59.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded_::_1_::dtor$1 @ 0x180044303 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileAdde_ea_180044303.c)
 *     __lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator()_::_1_::dtor$5 @ 0x18004442D (__lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$15 @ 0x180044481 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameCon_ea_180044481.c)
 *     __lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator()_::_1_::dtor$5 @ 0x1800444E1 (__lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator()_--_1_--dtor$5.c)
 *     __lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator()_::_1_::dtor$11 @ 0x180044529 (__lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator()_--_1_--dtor$11.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180010930 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180010930.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
