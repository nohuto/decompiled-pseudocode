/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___ @ 0x18000503C
 * Callers:
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800050F8 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x18000518C (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180005B40 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 */

__int64 __fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_eb696d0986d67961825d62a9f295508f___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  unsigned __int64 i; // r9
  _QWORD v10[3]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h]

  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v11,
    a3);
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    v10,
    a2);
  v7 = 0LL;
  if ( v10[0] )
    v7 = *(_QWORD *)v10[0];
  for ( i = v10[2];
        i != v12
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((i >> 1) & (*(_QWORD *)(v7 + 16) - 1LL))) + 8 * (i & 1)) != *a4;
        ++i )
  {
    ;
  }
  *(_QWORD *)(a2 + 16) = i;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    a2);
  return a1;
}
