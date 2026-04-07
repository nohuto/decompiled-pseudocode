/*
 * XREFs of ??_ECImmersiveWindowIconic@@MEAAPEAXI@Z @ 0x1800784B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CImmersiveWindowIconic@@MEAA@XZ @ 0x180078468 (--1CImmersiveWindowIconic@@MEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::`vector deleting destructor'(
        CImmersiveWindowIconic *this,
        char a2)
{
  CImmersiveWindowIconic::~CImmersiveWindowIconic(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CImmersiveWindowIconic *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
