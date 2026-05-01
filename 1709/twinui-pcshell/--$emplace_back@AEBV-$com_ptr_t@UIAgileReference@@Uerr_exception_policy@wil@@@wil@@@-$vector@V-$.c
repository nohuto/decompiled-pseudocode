/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180025214
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180025328 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180025044 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180025144 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180027864 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 *a2,
        bool a3)
{
  unsigned __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // [rsp+80h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v6 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v6 )
  {
    v8 = ((__int64)v6 - *(_QWORD *)a1) >> 3;
    if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
    v9 = (__int64)(result - *(_QWORD *)a1) >> 3;
    v10 = v9 >> 1;
    if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 + 1 )
        v11 = v8 + 1;
    }
    else
    {
      v11 = v8 + 1;
    }
    v12 = std::_Allocate(v11, 8uLL, a3);
    v13 = v12;
    v19 = v12;
    try
    {
      v14 = &v12[v8];
      if ( v14 )
      {
        v15 = *a2;
        *v14 = *a2;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      }
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v13);
    }
    catch ( ... )
    {
      v16 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<IDiscoverRecentItem>>((__int64)&v19[v8]);
      std::_Wrap_alloc<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>::destroy<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        v17,
        v16);
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>>>>>>::deallocate(
        v18,
        v19,
        v11);
      throw;
    }
    return std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(
             (unsigned __int64 *)a1,
             (unsigned __int64)v13,
             v8 + 1,
             v11);
  }
  else
  {
    if ( v6 )
    {
      v7 = *a2;
      *v6 = *a2;
      if ( v7 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
