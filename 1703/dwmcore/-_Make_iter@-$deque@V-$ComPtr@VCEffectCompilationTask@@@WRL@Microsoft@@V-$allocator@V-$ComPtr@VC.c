/*
 * XREFs of ?_Make_iter@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEBA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180005660
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800056F0 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800D2D60 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800D2DE4 (--1_Lockit@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Make_iter(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rdi
  char v6; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = *(_QWORD *)(a3 + 16);
  if ( a1 )
  {
    *a2 = *a1;
  }
  else
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v6, 3);
    std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  }
  a2[2] = v4;
  return a2;
}
