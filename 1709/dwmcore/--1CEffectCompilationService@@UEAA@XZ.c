/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x180131D4C
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x180131EA0 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180083FFC (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@2@@std@@QEAAXXZ @ 0x180132024 (-clear@-$list@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@V-$allocator@.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801456D0 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 i; // rdi
  void **v4; // rdi
  __int64 v5; // rsi
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 1;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel_RenderThread(*(CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 280LL))(*((_QWORD *)this + 2));
    CloseHandle(*((HANDLE *)this + 3));
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 2));
  v4 = (void **)((char *)this + 176);
  while ( *((_QWORD *)this + 26) )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 24);
  while ( v5 )
  {
    --v5;
    v6 = *(void **)(*((_QWORD *)this + 23) + 8 * v5);
    if ( v6 )
      WPF::ProcessHeapImpl::Free(v6);
  }
  v7 = (void *)*((_QWORD *)this + 23);
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  v8 = *v4;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  WPF::ProcessHeapImpl::Free(v8);
  *v4 = 0LL;
  v9 = (void *)*((_QWORD *)this + 16);
  if ( v9 )
  {
    WPF::ProcessHeapImpl::Free(v9);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  std::list<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>::clear((char *)this + 112);
  WPF::ProcessHeapImpl::Free(*((void **)this + 14));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 10);
  DeleteCriticalSection(v1);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
