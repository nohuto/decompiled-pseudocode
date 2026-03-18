/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1801C9164
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1801C95F4 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$com_ptr_t@VCManipula.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  _OWORD *result; // rax

  while ( 1 )
  {
    v8 = a3[1];
    if ( *(_QWORD *)(a2 + 8) == v8 )
      break;
    v9 = *a3;
    v10 = v8 - 1;
    a3[1] = v10;
    v11 = v10;
    v12 = v10 & 1;
    v13 = (v11 >> 1) & (*(_QWORD *)(v9 + 16) - 1LL);
    v14 = *(_QWORD *)(v9 + 8);
    v15 = *a4;
    v16 = *(_QWORD *)(v14 + 8 * v13);
    v17 = a4[1] - 1;
    a4[1] = v17;
    v18 = v17 & 1;
    v19 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * ((v17 >> 1) & (*(_QWORD *)(v15 + 16) - 1LL)));
    v20 = *(_QWORD *)(v16 + 8 * v12);
    *(_QWORD *)(v16 + 8 * v12) = 0LL;
    v21 = *(_QWORD *)(v19 + 8 * v18);
    *(_QWORD *)(v19 + 8 * v18) = v20;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
