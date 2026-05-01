/*
 * XREFs of ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D82E8
 * Callers:
 *     ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1801D3DE0 (-AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Inter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x1801DA98C (-erase@-$vector@V-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall WindowEventDispatcher::RemoveCachedView(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // r14
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rcx
  _QWORD *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  *a2 = 0LL;
  v5 = 0LL;
  v6 = (__int64 *)(a1 + 360);
  v7 = *(_QWORD *)(a1 + 360);
  if ( (unsigned __int64)(v6[1] - v7) >= 8 )
  {
    v8 = 0LL;
    while ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 8 * v8) + 240LL))(*(_QWORD *)(v7 + 8 * v8)) != a3 )
    {
      v5 = (unsigned int)(v5 + 1);
      v7 = *v6;
      v8 = (unsigned int)v5;
      if ( (unsigned int)v5 == (v6[1] - *v6) >> 3 )
        return a2;
    }
    v9 = *a2;
    v10 = *(_QWORD *)(*v6 + 8 * v8);
    *a2 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    std::vector<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>::erase(v6, &v12, *v6 + 8 * v5);
  }
  return a2;
}
