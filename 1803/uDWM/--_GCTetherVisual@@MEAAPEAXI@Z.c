/*
 * XREFs of ??_GCTetherVisual@@MEAAPEAXI@Z @ 0x180090C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CTetherVisual@@MEAA@XZ @ 0x180090B94 (--1CTetherVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CTetherVisual::`scalar deleting destructor'(CBaseObject **this, char a2)
{
  CTetherVisual::~CTetherVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
