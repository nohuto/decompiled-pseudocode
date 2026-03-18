/*
 * XREFs of ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18000587C
 * Callers:
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800059A4 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 * Callees:
 *     ??$_Uninitialized_copy@PEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YAPEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18002415C (--$_Uninitialized_copy@PEAPEAV-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U-$_W.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  void *v6; // r14
  unsigned __int64 v7; // rcx
  void *v8; // rcx
  void *v9; // rax
  void *v10; // rcx
  size_t v11; // r8
  void *v12; // rcx
  __int64 v13; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 < 8 || v2 == v3 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
    {
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
      JUMPOUT(0x1800DA2E6LL);
    }
    v2 *= 2LL;
  }
  v4 = v2 - v3;
  v5 = a1[3] >> 1;
  v6 = 0LL;
  v7 = v4 + v3;
  if ( v7 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL || (v6 = operator new(8 * v7)) == 0LL )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>((void *)(a1[1] + 8 * v5));
  v8 = (void *)a1[1];
  if ( v5 > v4 )
  {
    std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(v8);
    v13 = std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>((void *)(a1[1] + 8 * v4));
    if ( v4 )
    {
      v10 = (void *)v13;
      v11 = 8 * v4;
      goto LABEL_15;
    }
  }
  else
  {
    v9 = (void *)std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(v8);
    if ( v4 != v5 )
      memset_0(v9, 0, 8 * (v4 - v5));
    if ( v5 )
    {
      v10 = v6;
      v11 = 8 * v5;
LABEL_15:
      memset_0(v10, 0, v11);
    }
  }
  v12 = (void *)a1[1];
  if ( v12 )
    WPF::ProcessHeapImpl::Free(v12);
  a1[2] += v4;
  a1[1] = v6;
}
