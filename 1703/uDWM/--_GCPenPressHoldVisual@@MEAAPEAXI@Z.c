/*
 * XREFs of ??_GCPenPressHoldVisual@@MEAAPEAXI@Z @ 0x18008E400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CPenPressHoldVisual@@MEAA@XZ @ 0x18008E368 (--1CPenPressHoldVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CPenPressHoldVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CPenPressHoldVisual::~CPenPressHoldVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
