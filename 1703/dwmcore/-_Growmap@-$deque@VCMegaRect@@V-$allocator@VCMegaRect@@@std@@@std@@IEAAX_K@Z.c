/*
 * XREFs of ?_Growmap@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAX_K@Z @ 0x1800BDE2C
 * Callers:
 *     ??$emplace_back@AEAPEAVCHWDrawListEntry@@@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@QEAAXAEAPEAVCHWDrawListEntry@@@Z @ 0x1800BDF80 (--$emplace_back@AEAPEAVCHWDrawListEntry@@@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@st.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YAPEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18002415C (--$_Uninitialized_copy@PEAPEAV-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U-$_W.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall std::deque<CMegaRect>::_Growmap(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  char *v6; // r14
  unsigned __int64 v7; // r8
  SIZE_T v8; // r8
  size_t v9; // rbx
  char *v10; // rax
  char *v11; // rax
  void *v12; // rcx
  void *v13; // rcx
  size_t v14; // r8
  __int64 v15; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 1LL;
  if ( v2 )
    v3 = v2;
  while ( v3 < 8 || v3 == v2 )
  {
    if ( 0x249249249249249LL - v3 < v3 )
    {
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
      __debugbreak();
    }
    v3 *= 2LL;
  }
  v4 = *(_QWORD *)(a1 + 24);
  v5 = v3 - v2;
  v6 = 0LL;
  v7 = v2 + v5;
  if ( v2 + v5 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
    v8 = 8 * v7;
    if ( !v8 )
      v8 = 1LL;
    v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, v8);
    if ( !v6 )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  v9 = (8LL * *(_QWORD *)(a1 + 16) - 8 * v4) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = (char *)memmove(&v6[8 * v4], (const void *)(*(_QWORD *)(a1 + 8) + 8 * v4), v9) + v9;
  if ( v4 > v5 )
  {
    std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(
      *(void **)(a1 + 8),
      *(_QWORD *)(a1 + 8) + 8 * v5,
      v10);
    v15 = std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(
            (void *)(*(_QWORD *)(a1 + 8) + 8 * v5),
            *(_QWORD *)(a1 + 8) + 8 * v4,
            v6);
    if ( !v5 )
      goto LABEL_16;
    v13 = (void *)v15;
    v14 = 8 * v5;
    goto LABEL_24;
  }
  v11 = (char *)memmove(v10, *(const void **)(a1 + 8), 8 * v4) + 8 * v4;
  if ( v5 != v4 )
    memset_0(v11, 0, 8 * (v5 - v4));
  if ( v4 )
  {
    v13 = v6;
    v14 = 8 * v4;
LABEL_24:
    memset_0(v13, 0, v14);
  }
LABEL_16:
  v12 = *(void **)(a1 + 8);
  if ( v12 )
    WPF::ProcessHeapImpl::Free(v12);
  *(_QWORD *)(a1 + 16) += v5;
  *(_QWORD *)(a1 + 8) = v6;
}
