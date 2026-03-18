/*
 * XREFs of ??$_Uninitialized_copy@PEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YAPEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800C0C5C
 * Callers:
 *     ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800841E0 (-_Growmap@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800B25D0 (-_Growmap@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(
        void *Src,
        __int64 a2,
        void *a3)
{
  return (__int64)memmove(a3, Src, 8 * ((a2 - (__int64)Src) >> 3)) + 8 * ((a2 - (__int64)Src) >> 3);
}
