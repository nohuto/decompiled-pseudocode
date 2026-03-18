/*
 * XREFs of ??$_Move_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1801C92FC
 * Callers:
 *     ??$_Move_no_deprecate@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1801C9224 (--$_Move_no_deprecate@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCMan.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall std::_Move_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 i; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _OWORD *result; // rax

  for ( i = a2[1]; i != *(_QWORD *)(a3 + 8); i = a2[1] )
  {
    v9 = i;
    v10 = i & 1;
    v11 = *(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v9 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)));
    v12 = a4[1] & 1LL;
    v13 = *(_QWORD *)(*(_QWORD *)(*a4 + 8LL) + 8 * ((a4[1] >> 1) & (*(_QWORD *)(*a4 + 16LL) - 1LL)));
    v14 = *(_QWORD *)(v11 + 8 * v10);
    *(_QWORD *)(v11 + 8 * v10) = 0LL;
    v15 = *(_QWORD *)(v13 + 8 * v12);
    *(_QWORD *)(v13 + 8 * v12) = v14;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    ++a4[1];
    ++a2[1];
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
