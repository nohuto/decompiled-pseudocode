/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180025144
 * Callers:
 *     ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x180024FC0 (-_Reallocate_exactly@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180025214 (--$emplace_back@AEBV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 result; // rax

  v4 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v9 = (_QWORD *)a1[1];
    while ( v4 != v9 )
    {
      if ( *v4 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
      ++v4;
    }
    v10 = *a1;
    v11 = (__int64)(a1[2] - *a1) >> 3;
    if ( v11 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v11 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v10);
        goto LABEL_14;
      }
      if ( (v10 & 0x1F) == 0 )
      {
        v12 = *(_QWORD *)(v10 - 8);
        if ( v12 < v10 )
        {
          v10 = v10 - v12 - 8;
          if ( v10 <= 0x1F )
          {
            v10 = v12;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v10);
    JUMPOUT(0x180025212LL);
  }
LABEL_14:
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
