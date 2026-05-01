/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1801D1F6C
 * Callers:
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1801D7E10 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1801D1DB4 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_poli.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@V?$CRefCountedObject@UViewEventRegistration@@@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1801DA894 (-_Change_array@-$vector@V-$com_ptr_t@V-$CRefCountedObject@UViewEventRegistration@@@@Uerr_excepti.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CRefCountedObject<ViewEventRegistration>,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<CRefCountedObject<ViewEventRegistration>,wil::err_exception_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // r12
  __int64 v13; // rcx
  char *v14; // [rsp+80h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = v5 - *a1;
    if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v8 = v4 - *a1;
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
      *a2 = 0LL;
      v11[v7] = v13;
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
        *a1,
        a1[1],
        v11);
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
    result = *a2;
    *a2 = 0LL;
    *v5 = result;
    ++a1[1];
  }
  return result;
}
