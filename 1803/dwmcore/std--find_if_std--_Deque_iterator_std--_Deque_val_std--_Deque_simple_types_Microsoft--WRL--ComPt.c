/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___ @ 0x1800C7C8C
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180034F50 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180035544 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ??$_Unchecked@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@AEBV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180035570 (--$_Unchecked@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTask@@@WRL@Micro.c)
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3)
{
  __int64 **v4; // r11
  _QWORD *v5; // r9
  __int64 v6; // r11
  unsigned __int64 i; // r10
  __int128 v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v10 = *(_OWORD *)std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
                     &v11,
                     a3);
  v9 = *(_OWORD *)std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
                    v12,
                    v4);
  for ( i = *((_QWORD *)&v9 + 1);
        i != *((_QWORD *)&v10 + 1)
     && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((i >> 1) & (*(_QWORD *)(v9 + 16) - 1LL))) + 8 * (i & 1)) != *v5;
        ++i )
  {
    ;
  }
  *(_QWORD *)(v6 + 16) = i;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
    a1,
    v6);
  return a1;
}
