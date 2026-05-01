/*
 * XREFs of ??$emplace_back@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@Z @ 0x18007003C
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18006F3B8 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E9870 (-OnApplicationViewChanged@PeoplePaneViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180070D80 (--$_Uninitialized_move_al_unchecked1@PEAV-$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEAV123@V-$alloc.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<ITaskWindow>>::emplace_back<Microsoft::WRL::ComPtr<ITaskWindow>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  _QWORD *v11; // r14
  size_t v12; // rcx
  void *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rbx
  __int64 *v16; // r12
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = v5 - *a1;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v7 = v6 + 1;
    v8 = v4 - *a1;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 8 * v10;
      if ( 8 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[v6];
      if ( v14 )
      {
        *v14 = 0LL;
        if ( v14 != a2 )
        {
          *v14 = *a2;
          *a2 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked1<Microsoft::WRL::ComPtr<ITaskWindow> *,Microsoft::WRL::ComPtr<ITaskWindow> *,std::allocator<Microsoft::WRL::ComPtr<ITaskWindow>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v18 = (__int64 *)std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v11[v6]);
      std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IApplicationView>>>::destroy<Microsoft::WRL::ComPtr<IApplicationView>>(
        v19,
        v18);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v20,
        v11,
        v10);
      throw;
    }
    v15 = *a1;
    if ( *a1 )
    {
      v16 = a1[1];
      while ( v15 != v16 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        ++v15;
      }
      std::_Deallocate((char *)*a1, a1[2] - *a1, 8uLL);
    }
    *a1 = v11;
    a1[1] = &v11[v7];
    a1[2] = &v11[v10];
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
    ++a1[1];
  }
}
