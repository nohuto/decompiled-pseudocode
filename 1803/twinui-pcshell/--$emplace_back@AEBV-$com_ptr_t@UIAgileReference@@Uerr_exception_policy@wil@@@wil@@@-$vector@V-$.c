/*
 * XREFs of ??$emplace_back@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004E8E0
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1800977B4 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18004EA08 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x1800F7658 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  _QWORD *v15; // [rsp+80h] [rbp+18h]

  result = a1[2];
  v5 = (__int64 *)a1[1];
  if ( (__int64 *)result == v5 )
  {
    v8 = ((__int64)v5 - *a1) >> 3;
    if ( v8 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v9 = (result - *a1) >> 3;
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
    v12 = std::_Allocate<std::_Default_allocate_traits<1>>(v11, 8LL);
    v13 = v12;
    v15 = (_QWORD *)v12;
    try
    {
      v14 = *a2;
      *(_QWORD *)(v12 + 8 * v8) = *a2;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v7 = v15[v8];
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      std::_Deallocate(v15, v11, 8uLL);
      throw;
    }
    return std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(a1, v13, v8 + 1, v11);
  }
  else
  {
    v6 = *a2;
    *v5 = *a2;
    if ( v6 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    a1[1] += 8LL;
  }
  return result;
}
