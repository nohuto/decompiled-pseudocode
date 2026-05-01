/*
 * XREFs of ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@_K@Z @ 0x18000E4B0
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__&___ptr64__::_1_::catch$11 @ 0x180043EC5 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsoft--WRL--ComPt.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buynode0_::_1_::catch$21 @ 0x180043F2C (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_180043F2C.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buyheadnode_::_1_::catch$9 @ 0x180044535 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--GameConfig_gameco.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_Microsoft::WRL::Wrappers::HString_Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase_std::allocator_std::pair_Microsoft::WRL::Wrappers::HString_const__Microsoft::WRL::ComPtr_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer______0___::_Buyheadnode_::_1_::catch$9 @ 0x180044561 (_std--_Tree_comp_alloc_std--_Tmap_traits_Microsoft--WRL--Wrappers--HString_Microsof_ea_180044561.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buynode__GUID_&___ptr64_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____::_1_::catch$24 @ 0x180044B65 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--Game_ea_180044B65.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Buynode0_::_1_::catch$21 @ 0x180044BA8 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--Game_ea_180044BA8.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_Tree_node<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>,void *>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
