/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x1800246D0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x180024A54 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked1@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800247A0 (--$_Uninitialized_move_al_unchecked1@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180024860 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  _QWORD *v5; // rbx
  size_t v6; // rcx
  void *v7; // rax
  __int64 v8; // rcx

  v4 = (__int64)(a1[1] - *a1) >> 3;
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
      v5 = operator new(v6);
    }
    else
    {
      if ( v6 + 39 < v6 )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v7 = operator new(v6 + 39);
      v5 = (_QWORD *)(((unsigned __int64)v7 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v5 - 1) = v7;
    }
  }
  try
  {
    std::_Uninitialized_move_al_unchecked1<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
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
  return std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(a1, v5, v4, a2);
}
