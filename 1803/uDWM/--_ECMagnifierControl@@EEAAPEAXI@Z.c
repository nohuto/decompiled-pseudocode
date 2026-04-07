/*
 * XREFs of ??_ECMagnifierControl@@EEAAPEAXI@Z @ 0x180079AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CMagnifierControl@@EEAA@XZ @ 0x1800799D8 (--1CMagnifierControl@@EEAA@XZ.c)
 */

struct _RTL_GENERIC_TABLE *__fastcall CMagnifierControl::`vector deleting destructor'(
        struct _RTL_GENERIC_TABLE *this,
        char a2)
{
  CMagnifierControl::~CMagnifierControl(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct _RTL_GENERIC_TABLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
