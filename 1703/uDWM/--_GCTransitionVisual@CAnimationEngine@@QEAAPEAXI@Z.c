/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18001316C
 * Callers:
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180012E10 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x180012F68 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x1800130B0 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAccentTransitionAnimatedVisual **__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAccentTransitionAnimatedVisual **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CAnimationEngine::CTransitionVisual::~CTransitionVisual(this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}
