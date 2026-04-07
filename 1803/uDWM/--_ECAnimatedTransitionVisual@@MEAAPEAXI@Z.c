/*
 * XREFs of ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x1800120D0
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z @ 0x18004B410 (--_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x180011ED4 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::`vector deleting destructor'(
        CAnimatedTransitionVisual *this,
        char a2)
{
  CAnimatedTransitionVisual::~CAnimatedTransitionVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimatedTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
