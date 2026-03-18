/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00@Z @ 0x1801C95F4
 * Callers:
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1801CB078 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180035544 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x1801C9164 (--$_Move_backward_unchecked1@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_s_ea_1801C9164.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v10[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h]

  if ( *a2 )
    v6 = **a2;
  else
    v6 = 0LL;
  v12[0] = v6;
  v12[1] = a2[2];
  if ( *(_QWORD *)a3 )
    v7 = **(_QWORD **)a3;
  else
    v7 = 0LL;
  v11[0] = v7;
  v11[1] = *(_QWORD *)(a3 + 16);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    &v13,
    a4);
  if ( (_QWORD)v13 )
    v8 = *(_QWORD *)v13;
  v10[1] = v14;
  v10[0] = v8;
  std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>>>(
    &v13,
    (__int64)v12,
    v11,
    v10);
  *(_QWORD *)(a4 + 16) = *((_QWORD *)&v13 + 1);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    a4);
  return a1;
}
