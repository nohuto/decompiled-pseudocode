/*
 * XREFs of ??$_Move_backward_unchecked1@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00U_General_ptr_iterator_tag@0@@Z @ 0x18001A0F0
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A048 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18001A19C (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked1<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v8; // r9
  _OWORD *result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9

  while ( 1 )
  {
    v8 = a3[1];
    if ( *(_QWORD *)(a2 + 8) == v8 )
      break;
    v10 = *a3;
    v11 = v8 - 1;
    a3[1] = v11;
    v12 = *a4;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v10 + 16) - 1LL))) + 8 * (v11 & 1);
    v14 = a4[1] - 1;
    a4[1] = v14;
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * ((v14 >> 1) & (*(_QWORD *)(v12 + 16) - 1LL))) + 8 * (v14 & 1),
      v13);
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
