/*
 * XREFs of ??$emplace_back@AEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@QEAAXAEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@Z @ 0x180194FF0
 * Callers:
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180195BC4 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1801B12A8 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@00AEAV?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801F7338 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@PEAV123@V.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>::emplace_back<Microsoft::WRL::ComPtr<IDiscoverRecentItem> &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // r14
  __int64 v13; // rcx
  char *v14; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (__int64 *)a1[1];
  if ( (__int64 *)result == v5 )
  {
    v7 = ((__int64)v5 - *a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = (result - *a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v14 = v11;
    try
    {
      v13 = *a2;
      *(_QWORD *)&v11[8 * v7] = *a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,Microsoft::WRL::ComPtr<IDiscoverRecentItem> *,std::allocator<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14[8 * v7]);
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array(a1, v12, v7 + 1, v10);
  }
  else
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    a1[1] += 8LL;
  }
  return result;
}
