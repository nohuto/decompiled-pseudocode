/*
 * XREFs of ??$emplace_back@AEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@@Z @ 0x180195140
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180195EB4 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180194EF0 (--$_Uninitialized_move_al_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@V-$allocator@V-$s.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x1801C5350 (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 */

__int64 __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::emplace_back<std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  std::_Ref_count_base *v17; // rcx
  __int64 v18; // [rsp+80h] [rbp+18h]
  char *v19; // [rsp+88h] [rbp+20h]

  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v8 = ((__int64)v5 - *(_QWORD *)a1) >> 4;
    v18 = v8;
    if ( v8 == 0xFFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v9 = v8 + 1;
    v10 = ((__int64)v4 - *(_QWORD *)a1) >> 4;
    v11 = v10 >> 1;
    if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v9 )
        v12 = v8 + 1;
    }
    else
    {
      v12 = v8 + 1;
    }
    v13 = std::_Allocate<std::_Default_allocate_traits<1>>(v12, 0x10uLL);
    v14 = v13;
    v19 = (char *)v13;
    try
    {
      v15 = 2 * v8;
      v13[v15] = 0LL;
      v13[v15 + 1] = 0LL;
      v16 = a2[1];
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v14[v15] = *a2;
      v14[v15 + 1] = a2[1];
      std::_Uninitialized_move_al_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        *(_QWORD **)a1,
        *(_QWORD **)(a1 + 8),
        v14);
    }
    catch ( ... )
    {
      v17 = *(std::_Ref_count_base **)&v19[16 * v18 + 8];
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      std::_Deallocate(v19, v12, 0x10uLL);
      throw;
    }
    return std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v14, v9, v12);
  }
  else
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v6 = a2[1];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *v5 = *a2;
    result = a2[1];
    v5[1] = result;
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  return result;
}
