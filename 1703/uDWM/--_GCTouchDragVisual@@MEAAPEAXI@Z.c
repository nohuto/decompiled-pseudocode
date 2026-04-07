/*
 * XREFs of ??_GCTouchDragVisual@@MEAAPEAXI@Z @ 0x18008C6C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CTouchDragVisual@@MEAA@XZ @ 0x18008C5EC (--1CTouchDragVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTouchDragVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTouchDragVisual::~CTouchDragVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
