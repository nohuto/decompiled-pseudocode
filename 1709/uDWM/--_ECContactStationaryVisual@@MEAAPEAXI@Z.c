/*
 * XREFs of ??_ECContactStationaryVisual@@MEAAPEAXI@Z @ 0x1800847A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ??1CContactStationaryVisual@@MEAA@XZ @ 0x18008470C (--1CContactStationaryVisual@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CContactStationaryVisual::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CContactStationaryVisual::~CContactStationaryVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
