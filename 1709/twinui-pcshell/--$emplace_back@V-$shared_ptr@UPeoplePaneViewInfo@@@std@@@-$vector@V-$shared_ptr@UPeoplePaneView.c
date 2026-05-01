/*
 * XREFs of ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074
 * Callers:
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801108F0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180111530 (-LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@_K1@Z @ 0x1800EBDBC (-_Change_array@-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800EC498 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 */

void __fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo>>(
        volatile signed __int32 ***a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 **v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  volatile signed __int32 **v11; // rax
  unsigned __int64 v12; // r15
  volatile signed __int32 **v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int32 **v17; // [rsp+88h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = ((char *)v5 - (char *)*a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = v6 + 1;
    v8 = ((char *)v4 - (char *)*a1) >> 4;
    v9 = v8 >> 1;
    if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (volatile signed __int32 **)std::_Allocate(v10, 0x10uLL);
    v12 = (unsigned __int64)v11;
    v17 = v11;
    try
    {
      v13 = &v11[2 * v6];
      if ( v13 )
      {
        *v13 = *a2;
        v13[1] = a2[1];
        *a2 = 0LL;
        a2[1] = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v17[2 * v6]);
      std::_Wrap_alloc<std::allocator<std::shared_ptr<KBViewInfo>>>::destroy<std::shared_ptr<KBViewInfo>>(v15, v14);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v16, v17, v10);
      throw;
    }
    std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Change_array(
      (unsigned __int64 *)a1,
      v12,
      v7,
      v10);
  }
  else
  {
    if ( v5 )
    {
      *v5 = *a2;
      v5[1] = a2[1];
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    a1[1] += 2;
  }
}
