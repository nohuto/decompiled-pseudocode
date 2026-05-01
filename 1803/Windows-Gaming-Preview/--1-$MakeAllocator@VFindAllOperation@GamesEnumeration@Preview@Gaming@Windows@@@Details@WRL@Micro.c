/*
 * XREFs of ??1?$MakeAllocator@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000E214
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager_____ptr64_Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler_____ptr64__::_1_::dtor$0 @ 0x180043E35 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameList.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__GUID_const_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler_____ptr64__::_1_::dtor$0 @ 0x180043E4D (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180043E4D.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004420F (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 *     __lambda_1fac56e8dc857868f8bd6529f7683e95_::operator()_::_1_::dtor$2 @ 0x18004433F (__lambda_1fac56e8dc857868f8bd6529f7683e95_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$14 @ 0x180044475 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameCon_ea_180044475.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer__GUID_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__const_&___ptr64__::_1_::dtor$0 @ 0x1800449A1 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameMode.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
