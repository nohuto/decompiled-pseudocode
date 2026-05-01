/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1E1C
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3130 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z @ 0x1801D78C0 (-RecoverViews@WindowEventDispatcher@@UEAAJUEventRegistrationToken@@PEAPEAUIObjectArray@@@Z.c)
 *     ?WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1801D9DD0 (-WindowAdded@WindowEventDispatcher@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801D1DB4 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_poli.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1801DA894 (-_Change_array@-$vector@V-$com_ptr_t@V-$CRefCountedObject@UViewEventRegistration@@@@Uerr_excepti.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rcx
  char *v14; // [rsp+80h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v5 )
  {
    v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = (result - *(_QWORD *)a1) >> 3;
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
    v11 = (__int64 *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 8uLL);
    v12 = v11;
    v14 = (char *)v11;
    try
    {
      v13 = *a2;
      v11[v7] = *a2;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8),
        v12);
    }
    catch ( ... )
    {
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v14[8 * v7]);
      std::_Deallocate(v14, v10, 8uLL);
      throw;
    }
    return std::vector<wil::com_ptr_t<CRefCountedObject<ViewEventRegistration>,wil::err_exception_policy>>::_Change_array(
             a1,
             v12,
             v7 + 1,
             v10);
  }
  else
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
