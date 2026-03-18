/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x1800223EC
 * Callers:
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800C171C (--0CEnergyReporter@@AEAA@XZ.c)
 *     _anonymous_namespace_::State::State @ 0x1800C7B2C (_anonymous_namespace_--State--State.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800C99E8 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ??$emplace_back@AEBQEAUObserver@CProcessAttributionManager@@@?$vector@PEAUObserver@CProcessAttributionManager@@V?$allocator@PEAUObserver@CProcessAttributionManager@@@std@@@std@@QEAAXAEBQEAUObserver@CProcessAttributionManager@@@Z @ 0x1800C8000 (--$emplace_back@AEBQEAUObserver@CProcessAttributionManager@@@-$vector@PEAUObserver@CProcessAttri.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??$emplace_back@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@QEAAXAEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@Z @ 0x180145C64 (--$emplace_back@AEBQEAUProcessAttributionRecord@CProcessAttributionManager@@@-$vector@PEAUProces.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rsi
  __int64 *v4; // r14
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v2[1] = this;
  v14 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  std::vector<CProcessAttributionManager::Observer *>::emplace_back<CProcessAttributionManager::Observer * const &>(
    (char *)this + 24,
    &v14);
  v4 = *(__int64 **)this;
  v5 = 0LL;
  v6 = (unsigned __int64)(*((_QWORD *)this + 1) - *(_QWORD *)this + 7LL) >> 3;
  if ( *(_QWORD *)this > *((_QWORD *)this + 1) )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = *v4;
      ++*(_DWORD *)(*v4 + 124);
      v9 = (char *)operator new(0x70uLL);
      v10 = v9;
      if ( v9 )
        memset_0(v9, 0, 0x70uLL);
      else
        v10 = 0LL;
      *(_QWORD *)v10 = *(_QWORD *)v8;
      v11 = *(_QWORD *)(v8 + 112);
      v14 = v10;
      if ( v11 )
      {
        *(_OWORD *)(v10 + 8) = *(_OWORD *)(v11 + 24);
        v12 = *(_DWORD *)(v11 + 40);
      }
      else
      {
        *(_OWORD *)(v10 + 8) = *(_OWORD *)(v8 + 8);
        v12 = *(_DWORD *)(v8 + 24);
      }
      *((_DWORD *)v10 + 6) = v12;
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::emplace_back<CProcessAttributionManager::ProcessAttributionRecord * const &>(
        v3 + 2,
        &v14);
      ++v4;
      ++v5;
    }
    while ( v5 != v6 );
  }
  return (struct CProcessAttributionObserver *)v3;
}
