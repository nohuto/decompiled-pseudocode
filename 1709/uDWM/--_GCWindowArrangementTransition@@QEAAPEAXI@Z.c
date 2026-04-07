/*
 * XREFs of ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x180079FF0
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003BB78 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180079BBC (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CWindowArrangementTransition *__fastcall CWindowArrangementTransition::`scalar deleting destructor'(CBaseObject **this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = *this;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = this[1];
  if ( v3 )
    CBaseObject::Release(v3);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return (CWindowArrangementTransition *)this;
}
