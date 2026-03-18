/*
 * XREFs of ??$_Unchecked@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@AEBV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@@Z @ 0x180035570
 * Callers:
 *     ??$_Move_no_deprecate@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180019EF4 (--$_Move_no_deprecate@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffect.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A048 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x180034E24 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_0ed9790c2b8c28f4d2acaca19c8b17ac___ @ 0x1800C7C8C (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Unchecked<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>(
        _QWORD *a1,
        __int64 **a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  if ( *a2 )
    v2 = **a2;
  *a1 = v2;
  a1[1] = a2[2];
  return a1;
}
