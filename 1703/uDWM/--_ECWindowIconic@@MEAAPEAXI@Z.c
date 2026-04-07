/*
 * XREFs of ??_ECWindowIconic@@MEAAPEAXI@Z @ 0x18003D4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x18003DE68 (--1CWindowIconic@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CWindowIconic *__fastcall CWindowIconic::`vector deleting destructor'(CWindowIconic *this, char a2)
{
  CWindowIconic::~CWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
