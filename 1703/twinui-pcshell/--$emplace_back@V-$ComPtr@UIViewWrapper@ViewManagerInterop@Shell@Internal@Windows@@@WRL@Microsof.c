/*
 * XREFs of ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800FF6A0
 * Callers:
 *     _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18010FD50 (_lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator().c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180070D80 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@_K1@Z @ 0x1800FDACC (-_Change_array@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  __int64 *v10; // rdi
  size_t v11; // rcx
  void *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v7 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
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
    if ( v9 )
    {
      if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v11 = 8 * v9;
      if ( 8 * v9 < 0x1000 )
      {
        v10 = (__int64 *)operator new(v11);
      }
      else
      {
        if ( v11 + 39 < v11 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v12 = operator new(v11 + 39);
        v10 = (__int64 *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v10 - 1) = (__int64)v12;
      }
    }
    else
    {
      v10 = 0LL;
    }
    try
    {
      v13 = &v10[v6];
      if ( v13 )
      {
        *v13 = 0LL;
        if ( v13 != a2 )
        {
          *v13 = *a2;
          *a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<ITaskWindow> *,Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v10);
    }
    catch ( ... )
    {
      v14 = (__int64 *)std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v10[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>::destroy<Microsoft::WRL::ComPtr<IApplicationView>>(
        v15,
        v14);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v16,
        v10,
        v9);
      throw;
    }
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Change_array(
      a1,
      (__int64)v10,
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
        *v5 = *a2;
        *a2 = 0LL;
      }
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
}
