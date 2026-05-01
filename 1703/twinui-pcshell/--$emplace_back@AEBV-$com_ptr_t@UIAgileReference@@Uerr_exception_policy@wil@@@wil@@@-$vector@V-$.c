/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800248F8
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180024A54 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800247A0 (--$_Uninitialized_move_al_unchecked1@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180024860 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rdi
  size_t v12; // rcx
  void *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx

  v4 = *(__int64 **)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( v4 == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
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
      v14 = &v11[v7];
      if ( v14 )
      {
        v15 = *a2;
        *v14 = *a2;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      std::_Uninitialized_move_al_unchecked1<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v11);
    }
    catch ( ... )
    {
      v16 = (_QWORD *)std::_Unfancy<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem __gc *,1>>((__int64)&v11[v7]);
      std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        v17,
        v16);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v18,
        v11,
        v10);
      throw;
    }
    std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(a1, (__int64)v11, v7 + 1, v10);
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *v5 = *a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
}
