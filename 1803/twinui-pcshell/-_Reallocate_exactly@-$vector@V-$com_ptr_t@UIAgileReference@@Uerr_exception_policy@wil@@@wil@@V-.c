/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18004E950
 * Callers:
 *     ??0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x1800977B4 (--0AgileCallbackArray@AgileRegistrationList@@QEAA@AEAV-$vector@UItem@AgileRegistrationList@@V-$a.c)
 * Callees:
 *     ??$_Uninitialized_move_al_unchecked@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@00AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18004EA08 (--$_Uninitialized_move_al_unchecked@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180098DA4 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate_exactly(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  size_t v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // r15
  char *result; // rax
  void *v9; // rax
  _QWORD *v10; // r12

  v4 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    {
      std::_Xbad_alloc();
      JUMPOUT(0x1800CCB81LL);
    }
    v5 = 8 * a2;
    if ( 8 * a2 >= 0x1000 )
    {
      if ( v5 + 39 < v5 )
      {
        std::_Xbad_alloc();
        JUMPOUT(0x1800CCB91LL);
      }
      v9 = operator new(v5 + 39);
      v6 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v6 - 1) = v9;
    }
    else
    {
      v6 = operator new(v5);
    }
  }
  else
  {
    v6 = 0LL;
  }
  try
  {
    std::_Uninitialized_move_al_unchecked<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>>(
      *a1,
      a1[1],
      v6);
  }
  catch ( ... )
  {
    std::_Deallocate(v6, a2, 8uLL);
    throw;
  }
  v7 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v10 = (_QWORD *)a1[1];
    if ( v7 != v10 )
    {
      do
      {
        if ( *v7 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
        ++v7;
      }
      while ( v7 != v10 );
      v7 = (_QWORD *)*a1;
    }
    std::_Deallocate(v7, (__int64)(a1[2] - (_QWORD)v7) >> 3, 8uLL);
  }
  *a1 = v6;
  a1[1] = &v6[v4];
  result = (char *)&v6[a2];
  a1[2] = result;
  return result;
}
