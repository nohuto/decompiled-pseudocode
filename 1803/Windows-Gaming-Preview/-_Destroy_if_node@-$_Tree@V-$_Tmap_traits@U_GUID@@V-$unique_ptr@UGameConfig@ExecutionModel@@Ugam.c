/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@Z @ 0x180039B20
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@1@1@Z @ 0x180039BA0 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delet.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__Windows::Gaming::Preview::GamesEnumeration::GameIdLess_std::allocator_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete______0___::_Insert_nohint_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____&___ptr64_std::_Tree_node_std::pair__GUID_const__std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete____void_____ptr64______ptr64__::_1_::catch$59 @ 0x180044B85 (_std--_Tree_std--_Tmap_traits__GUID_std--unique_ptr_ExecutionModel--GameConfig_gameconfig_delete.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[6];
  if ( v2 )
    operator delete(v2);
  operator delete(a2);
}
