/*
 * XREFs of ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800841E0
 * Callers:
 *     ?push_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x180084304 (-push_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$_Uninitialized_copy@PEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@YAPEAPEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@00AEAU?$_Wrap_alloc@V?$allocator@PEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800C0C5C (--$_Uninitialized_copy@PEAPEAV-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@PEAPEAV123@U-$_W.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  LPVOID v6; // r14
  void *v7; // rcx
  void *v8; // rax
  void *v9; // rcx
  size_t v10; // r8
  void *v11; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[2];
  v3 = 1LL;
  if ( v1 )
    v3 = v1;
  while ( 1 )
  {
    v4 = v3 - v1;
    if ( v3 >= 8 )
    {
      if ( v4 )
        break;
    }
    if ( 0xFFFFFFFFFFFFFFFLL - v3 < v3 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v3 *= 2LL;
  }
  v5 = a1[3] >> 1;
  if ( v3 > 0x1FFFFFFFFFFFFFFFLL || (v6 = operator new(8 * v3)) == 0LL )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>((void *)(a1[1] + 8 * v5));
  v7 = (void *)a1[1];
  if ( v5 > v4 )
  {
    std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(v7);
    v9 = (void *)std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>((void *)(a1[1] + 8 * v4));
    v10 = 8 * v4;
    goto LABEL_14;
  }
  v8 = (void *)std::_Uninitialized_copy<Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,Microsoft::WRL::ComPtr<CEffectCompilationTask> * *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<CEffectCompilationTask> *>>>(v7);
  if ( v4 != v5 )
    memset_0(v8, 0, 8 * (v4 - v5));
  if ( v5 )
  {
    v9 = v6;
    v10 = 8 * v5;
LABEL_14:
    memset_0(v9, 0, v10);
  }
  v11 = (void *)a1[1];
  if ( v11 )
    WPF::ProcessHeapImpl::Free(v11);
  a1[2] += v4;
  a1[1] = v6;
}
