/*
 * XREFs of ??1?$MakeAllocator@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000E054
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::IUnifiedTile_____ptr64_&___ptr64_WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager_____ptr64_Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler_____ptr64__::_1_::dtor$0 @ 0x180042DAE (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameList.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__GUID_const_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler_____ptr64__::_1_::dtor$0 @ 0x180042DC6 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_180042DC6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800431D7 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded_::_1_::dtor$2 @ 0x1800432D7 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileAdde_ea_1800432D7.c)
 *     __lambda_45756babbe3c579ac0682f1f5b8db4a7_::operator()_::_1_::dtor$2 @ 0x18004331F (__lambda_45756babbe3c579ac0682f1f5b8db4a7_--operator()_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer__GUID_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__const_&___ptr64__::_1_::dtor$0 @ 0x180043994 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameMode.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x180043DF9 (_Microsoft--WRL--Details--MakeAndInitialize_CQueryKnownGameList_CQueryKnownGameList_unsigned_sho.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CGameEntry_KnownGameList::IGameEntry_KnownGameList::IGameEntry_____ptr64__::_1_::dtor$0 @ 0x180043E11 (_Microsoft--WRL--Details--MakeAndInitialize_CGameEntry_KnownGameList--IGameEntry_KnownGameList--.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0LL);
}
