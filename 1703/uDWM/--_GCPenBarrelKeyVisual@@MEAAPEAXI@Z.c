/*
 * XREFs of ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x18008D7C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x18008D720 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 */

CPenBarrelKeyVisual *__fastcall CPenBarrelKeyVisual::`scalar deleting destructor'(CPenBarrelKeyVisual *this, char a2)
{
  CPenBarrelKeyVisual::~CPenBarrelKeyVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPenBarrelKeyVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
