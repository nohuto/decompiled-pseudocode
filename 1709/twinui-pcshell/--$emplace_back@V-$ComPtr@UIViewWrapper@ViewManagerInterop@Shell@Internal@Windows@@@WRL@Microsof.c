/*
 * XREFs of ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18012A010
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18013A300 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180073818 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windo.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@_K1@Z @ 0x180128C58 (-_Change_array@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rax
  unsigned __int64 v11; // r15
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // [rsp+80h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int64 **)(a1 + 8);
  if ( (unsigned __int64 *)result == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v7 = (__int64)(result - *(_QWORD *)a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = (__int64 *)std::_Allocate(v9, 8uLL);
    v11 = (unsigned __int64)v10;
    v16 = v10;
    try
    {
      v12 = &v10[v6];
      if ( v12 )
      {
        *v12 = 0LL;
        if ( v12 != (__int64 *)a2 )
        {
          *v12 = *a2;
          *a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v10);
    }
    catch ( ... )
    {
      v13 = (__int64 *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v16[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IUnknown>>>::destroy<Microsoft::WRL::ComPtr<IUnknown>>(
        v14,
        v13);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v15,
        v16,
        v9);
      throw;
    }
    return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Change_array(
             (unsigned __int64 *)a1,
             v11,
             v6 + 1,
             v9);
  }
  else
  {
    if ( v5 )
    {
      *v5 = 0LL;
      if ( v5 != a2 )
      {
        result = *a2;
        *v5 = *a2;
        *a2 = 0LL;
      }
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
