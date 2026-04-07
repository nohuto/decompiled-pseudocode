/*
 * XREFs of ??_ECRippleEffect@@MEAAPEAXI@Z @ 0x180087DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ??1CRippleEffect@@MEAA@XZ @ 0x180087D84 (--1CRippleEffect@@MEAA@XZ.c)
 */

CBaseObject **__fastcall CRippleEffect::`vector deleting destructor'(CBaseObject **this, char a2)
{
  CRippleEffect::~CRippleEffect(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CBaseObject **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
