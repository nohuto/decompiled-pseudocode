/*
 * XREFs of ??$_Move_no_deprecate@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180019EF4
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180019CE4 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??$_Move_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x180019F9C (--$_Move_unchecked1@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180035544 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??$_Unchecked@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@AEBV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180035570 (--$_Unchecked@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTask@@@WRL@Micro.c)
 */

__int64 __fastcall std::_Move_no_deprecate<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r9
  __int128 v8; // [rsp+30h] [rbp-50h] BYREF
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h]

  std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(&v10);
  std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(&v9);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v11,
    v6);
  std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(&v8);
  std::_Move_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
    v11,
    &v10,
    &v9,
    &v8);
  *(_QWORD *)(a4 + 16) = v12;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    a4);
  return a1;
}
