/*
 * XREFs of ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180083FFC
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180084054 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180131D4C (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800844E4 (-InternalRelease@-$ComPtr@VCDrawListCache@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = Microsoft::WRL::ComPtr<CDrawListCache>::InternalRelease(
               *(_QWORD *)(a1[1] + 8 * (((unsigned __int64)(v2 - 1 + a1[3]) >> 1) & (a1[2] - 1LL)))
             + 8LL * (((_DWORD)v2 - 1 + *((_DWORD *)a1 + 6)) & 1));
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
