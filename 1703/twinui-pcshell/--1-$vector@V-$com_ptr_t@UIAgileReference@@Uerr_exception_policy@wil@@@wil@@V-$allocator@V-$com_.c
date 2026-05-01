/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18002464C
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$1 @ 0x180198DC7 (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    while ( v2 != v3 )
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
      ++v2;
    }
    std::_Deallocate(*(void **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
