/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18002FF3C
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18002FE30 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18002FEA4 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v3(WPF::g_pProcessHeap, this);
  return this;
}
