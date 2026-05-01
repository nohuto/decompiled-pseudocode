/*
 * XREFs of ??$_Buynode@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000DB80
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800099CC (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Uni.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000A1A8 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@XZ @ 0x18000E17C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V-$ComPtr@VGameLi.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buynode<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        __int64 a1,
        signed __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // rax
  signed __int64 v6; // rcx
  __int64 v7; // r9
  signed __int64 *v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v13; // [rsp+48h] [rbp+10h]

  v5 = std::_Tree_comp_alloc<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::_Buynode0(a1);
  v7 = v5;
  v13 = v5;
  *(_WORD *)(v5 + 24) = 0;
  try
  {
    v8 = (signed __int64 *)(v5 + 32);
    if ( v8 )
    {
      v6 = *a2;
      *v8 = *a2;
      *a2 = 0LL;
      v9 = *a3;
      v8[1] = *a3;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 144);
        while ( v10 >= 0 )
        {
          v6 = v10 + 1;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 144), v10 + 1, v10);
          if ( v11 == v10 )
            return v7;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v10 + 16));
      }
    }
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::_Freenode0(
      v6,
      v13);
    throw;
  }
  return v7;
}
