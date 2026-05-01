/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180128B80
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18013A300 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180073818 (--$_Uninitialized_move_al_unchecked@PEAV-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windo.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@_K1@Z @ 0x180128C58 (-_Change_array@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 *v9; // [rsp+60h] [rbp+8h]

  v4 = a1[1] - *a1;
  v5 = (__int64 *)std::_Allocate(a2, 8uLL);
  v6 = v5;
  v9 = v5;
  try
  {
    std::_Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
      v7,
      v9,
      a2);
    throw;
  }
  return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Change_array(
           a1,
           v6,
           v4,
           a2);
}
