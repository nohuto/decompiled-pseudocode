/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x1800D2DE4
 * Callers:
 *     ??$_Move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180002994 (--$_Move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectComp.c)
 *     ??$_Move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180004560 (--$_Move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTa.c)
 *     ?_Make_iter@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEBA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180005660 (-_Make_iter@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VC.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180005B40 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800258E0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 * Callees:
 *     _Mtxunlock @ 0x1800D2E3C (_Mtxunlock.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      Mtxunlock(&stru_18023DD00 + v1);
  }
  else
  {
    unlock_0(12LL);
  }
}
