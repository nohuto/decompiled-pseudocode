/*
 * XREFs of ??_ECTouchPressHoldVisual@@MEAAPEAXI@Z @ 0x1800A5570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800A5540 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 */

CTouchPressHoldVisual *__fastcall CTouchPressHoldVisual::`vector deleting destructor'(
        CTouchPressHoldVisual *this,
        char a2)
{
  CTouchPressHoldVisual::~CTouchPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTouchPressHoldVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
