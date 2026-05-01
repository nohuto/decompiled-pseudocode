/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800FD990
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18010FD50 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180070D80 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@_K1@Z @ 0x1800FDACC (-_Change_array@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  __int64 *v5; // rbx
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx

  v4 = a1[1] - *a1;
  v5 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      __debugbreak();
    }
    v6 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      v5 = (__int64 *)operator new(v6);
    }
    else
    {
      if ( v6 + 39 < v6 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v7 = operator new(v6 + 39);
      v5 = (__int64 *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v5 - 1) = (__int64)v7;
    }
  }
  try
  {
    std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<ITaskWindow> *,Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
      *a1,
      a1[1],
      v5);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
      v8,
      v5,
      a2);
    throw;
  }
  return std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Change_array(
           a1,
           v5,
           v4,
           a2);
}
