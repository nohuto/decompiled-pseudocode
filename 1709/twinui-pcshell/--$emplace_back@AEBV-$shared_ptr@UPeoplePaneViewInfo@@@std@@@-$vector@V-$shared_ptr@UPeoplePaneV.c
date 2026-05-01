/*
 * XREFs of ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EBC30
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1800E8014 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x180111DC0 (-ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??0?$shared_ptr@I@std@@QEAA@AEBV01@@Z @ 0x1800EB52C (--0-$shared_ptr@I@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@_K1@Z @ 0x1800EBDBC (-_Change_array@-$vector@V-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V-$allocator@V-.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800EC498 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<PeoplePaneViewInfo>>::emplace_back<std::shared_ptr<PeoplePaneViewInfo> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+88h] [rbp+20h]

  result = (_QWORD *)a1[2];
  v5 = (_QWORD *)a1[1];
  if ( result == v5 )
  {
    v6 = ((__int64)v5 - *a1) >> 4;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = v6 + 1;
    v8 = ((__int64)result - *a1) >> 4;
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
    v11 = std::_Allocate(v10, 0x10uLL);
    v12 = v11;
    v17 = v11;
    try
    {
      v13 = &v11[2 * v6];
      if ( v13 )
        std::shared_ptr<unsigned int>::shared_ptr<unsigned int>(v13, a2);
      std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v17[2 * v6]);
      std::_Wrap_alloc<std::allocator<std::shared_ptr<KBViewInfo>>>::destroy<std::shared_ptr<KBViewInfo>>(v15, v14);
      std::_Wrap_alloc<std::allocator<AgileRegistrationList::Item>>::deallocate(v16, v17, v10);
      throw;
    }
    return (_QWORD *)std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Change_array(a1, v12, v7, v10);
  }
  else
  {
    if ( v5 )
      result = std::shared_ptr<unsigned int>::shared_ptr<unsigned int>((_QWORD *)a1[1], a2);
    a1[1] += 16LL;
  }
  return result;
}
