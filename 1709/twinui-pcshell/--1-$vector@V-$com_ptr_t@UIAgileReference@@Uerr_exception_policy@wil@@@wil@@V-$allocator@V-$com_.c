/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180024EFC
 * Callers:
 *     ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x180024E70 (--_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z.c)
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$1 @ 0x1801E760A (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        unsigned __int64 *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)a1[1];
    while ( v2 != v3 )
    {
      if ( *v2 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 16LL))(*v2);
      ++v2;
    }
    v4 = *a1;
    v5 = (__int64)(a1[2] - *a1) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v4);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v4 & 0x1F) == 0 )
      {
        v6 = *(_QWORD *)(v4 - 8);
        if ( v6 < v4 )
        {
          v4 = v4 - v6 - 8;
          if ( v4 <= 0x1F )
          {
            v4 = v6;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v4);
  }
}
