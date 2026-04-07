/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18002F864
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x18002C768 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x18002D918 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18002FE30 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  __int64 v3; // rcx
  __int64 i; // rdi
  CAnimationEngine::CTransitionVisual *v5; // rcx

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v5 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
    if ( v5 )
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v5, a2);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 3));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationEngine::CTransitionVisualSet *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
