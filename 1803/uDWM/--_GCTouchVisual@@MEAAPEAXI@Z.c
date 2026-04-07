/*
 * XREFs of ??_GCTouchVisual@@MEAAPEAXI@Z @ 0x1800930D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180017CE4 (--1CRenderDataVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall CTouchVisual::`scalar deleting destructor'(
        volatile signed __int32 **this,
        char a2)
{
  *this = (volatile signed __int32 *)&CTouchVisual::`vftable';
  CRenderDataVisual::~CRenderDataVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, volatile signed __int32 **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
