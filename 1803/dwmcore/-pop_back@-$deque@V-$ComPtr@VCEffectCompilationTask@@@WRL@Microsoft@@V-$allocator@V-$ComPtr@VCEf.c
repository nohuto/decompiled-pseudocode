/*
 * XREFs of ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180019C94
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180019CE4 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180154EC4 (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800357C4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(_QWORD *a1)
{
  __int64 result; // rax

  result = Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(
             *(_QWORD *)(a1[1] + 8 * (((unsigned __int64)(a1[3] - 1LL + a1[4]) >> 1) & (a1[2] - 1LL)))
           + 8LL * ((*((_DWORD *)a1 + 6) - 1 + *((_DWORD *)a1 + 8)) & 1));
  if ( a1[4]-- == 1LL )
    a1[3] = 0LL;
  return result;
}
