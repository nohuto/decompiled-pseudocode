/*
 * XREFs of ?CreateObserver@CProcessAttributionManager@@QEAAPEAVCProcessAttributionObserver@@XZ @ 0x180124100
 * Callers:
 *     _anonymous_namespace_::State::State @ 0x180124788 (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x180125400 (--0CEnergyReporter@@AEAA@XZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?_Reserve@?$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V?$allocator@PEAUProcessAttributionRecord@CProcessAttributionManager@@@std@@@std@@IEAAX_K@Z @ 0x1801244E8 (-_Reserve@-$vector@PEAUProcessAttributionRecord@CProcessAttributionManager@@V-$allocator@PEAUPro.c)
 */

struct CProcessAttributionObserver *__fastcall CProcessAttributionManager::CreateObserver(
        CProcessAttributionManager *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // r15
  char *v13; // rax
  char *v14; // rsi
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = WPF::ProcessHeapImpl::AllocClear(0x28uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v2[1] = this;
  v4 = v2 + 2;
  v23 = v2;
  *v2 = &CProcessAttributionManager::Observer::`vftable';
  v5 = (_QWORD *)((char *)this + 24);
  v2[2] = 0LL;
  v2[3] = 0LL;
  v2[4] = 0LL;
  v6 = *((_QWORD *)this + 4);
  if ( (unsigned __int64)&v23 >= v6 || *v5 > (unsigned __int64)&v23 )
  {
    if ( v6 == *((_QWORD *)this + 5) )
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reserve((char *)this + 24);
    v9 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v9 )
      *v9 = v3;
  }
  else
  {
    v7 = ((__int64)&v23 - *v5) >> 3;
    if ( v6 == *((_QWORD *)this + 5) )
      std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reserve((char *)this + 24);
    v8 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v8 )
      *v8 = *(_QWORD *)(*v5 + 8 * v7);
  }
  *((_QWORD *)this + 4) += 8LL;
  v10 = *(__int64 **)this;
  v11 = (__int64 *)*((_QWORD *)this + 1);
  while ( v10 != v11 )
  {
    v12 = *v10;
    ++*(_DWORD *)(*v10 + 124);
    v13 = (char *)operator new(0x70uLL);
    v14 = v13;
    if ( v13 )
      memset_0(v13, 0, 0x70uLL);
    else
      v14 = 0LL;
    *(_QWORD *)v14 = *(_QWORD *)v12;
    v15 = *(_QWORD *)(v12 + 112);
    v23 = v14;
    if ( v15 )
    {
      *(_OWORD *)(v14 + 8) = *(_OWORD *)(v15 + 24);
      v16 = *(_DWORD *)(v15 + 40);
    }
    else
    {
      *(_OWORD *)(v14 + 8) = *(_OWORD *)(v12 + 8);
      v16 = *(_DWORD *)(v12 + 24);
    }
    *((_DWORD *)v14 + 6) = v16;
    v17 = v3[3];
    if ( (unsigned __int64)&v23 >= v17 || *v4 > (unsigned __int64)&v23 )
    {
      if ( v17 == v3[4] )
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reserve(v3 + 2);
      v20 = (_QWORD *)v3[3];
      if ( v20 )
        *v20 = v14;
    }
    else
    {
      v18 = ((__int64)&v23 - *v4) >> 3;
      if ( v17 == v3[4] )
        std::vector<CProcessAttributionManager::ProcessAttributionRecord *>::_Reserve(v3 + 2);
      v19 = (_QWORD *)v3[3];
      if ( v19 )
        *v19 = *(_QWORD *)(*v4 + 8 * v18);
    }
    v3[3] += 8LL;
    ++v10;
  }
  return (struct CProcessAttributionObserver *)v3;
}
