/*
 * XREFs of ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800B25D0
 * Callers:
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800B2710 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$_Uninitialized_copy@PEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YAPEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800C0C5C (--$_Uninitialized_copy@PEAPEAV-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U-$_W.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::deque<CMegaRect>::_Growmap(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbp
  SIZE_T v6; // r8
  char *v7; // r14
  size_t v8; // rbx
  char *v9; // rax
  char *v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  size_t v13; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 1LL;
  if ( v2 )
    v3 = v2;
  while ( 1 )
  {
    v4 = v3 - v2;
    if ( v3 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0x249249249249249LL - v3 < v3 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v3 *= 2LL;
  }
  v5 = *(_QWORD *)(a1 + 24);
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = 8 * v3;
  if ( !v6 )
    v6 = 1LL;
  v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, v6);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v8 = (8LL * *(_QWORD *)(a1 + 16) - 8 * v5) & 0xFFFFFFFFFFFFFFF8uLL;
  v9 = (char *)memmove(&v7[8 * v5], (const void *)(*(_QWORD *)(a1 + 8) + 8 * v5), v8) + v8;
  if ( v5 > v4 )
  {
    std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(*(void **)(a1 + 8));
    v12 = (void *)std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>((void *)(*(_QWORD *)(a1 + 8) + 8 * v4));
    v13 = 8 * v4;
    goto LABEL_22;
  }
  v10 = (char *)memmove(v9, *(const void **)(a1 + 8), 8 * v5) + 8 * v5;
  if ( v4 != v5 )
    memset_0(v10, 0, 8 * (v4 - v5));
  if ( v5 )
  {
    v12 = v7;
    v13 = 8 * v5;
LABEL_22:
    memset_0(v12, 0, v13);
  }
  v11 = *(void **)(a1 + 8);
  if ( v11 )
    WPF::ProcessHeapImpl::Free(v11);
  *(_QWORD *)(a1 + 16) += v4;
  *(_QWORD *)(a1 + 8) = v7;
}
