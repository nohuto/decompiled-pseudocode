/*
 * XREFs of ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001C718
 * Callers:
 *     _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20 (_lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator().c)
 *     ??1?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAA@XZ @ 0x18001C1D8 (--1-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x1800293E0 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180029790 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 *     ??_EGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18002E020 (--_EGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@@Z @ 0x18001C7D8 (-_Erase@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_de.c)
 *     ??3@YAXPEAX@Z @ 0x180042938 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042948 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  void *v5; // rcx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 8LL);
  v4 = v3;
  if ( !*((_BYTE *)v3 + 25) )
  {
    do
    {
      std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Erase(
        a1,
        v4[2]);
      v4 = (__int64 *)*v4;
      v5 = (void *)v3[6];
      if ( v5 )
        operator delete(v5);
      operator delete(v3);
      v3 = v4;
    }
    while ( !*((_BYTE *)v4 + 25) );
    v2 = *a1;
  }
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
