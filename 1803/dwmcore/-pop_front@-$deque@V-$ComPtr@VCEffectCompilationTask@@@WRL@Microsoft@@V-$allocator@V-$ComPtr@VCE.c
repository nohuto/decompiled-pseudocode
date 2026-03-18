/*
 * XREFs of ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180019EA8
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180019CE4 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x180034F50 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(_QWORD *a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(*(_QWORD *)(a1[1]
                                                                                   + 8 * ((a1[2] - 1LL) & (a1[3] >> 1))) + 8 * (a1[3] & 1LL));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  else
    ++a1[3];
  return result;
}
