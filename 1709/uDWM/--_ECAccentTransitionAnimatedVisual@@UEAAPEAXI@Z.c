/*
 * XREFs of ??_ECAccentTransitionAnimatedVisual@@UEAAPEAXI@Z @ 0x18009AD5C
 * Callers:
 *     ??_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z @ 0x180046830 (--_ECAccentTransitionAnimatedVisual@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CAccentTransitionAnimatedVisual *__fastcall CAccentTransitionAnimatedVisual::`vector deleting destructor'(
        CAccentTransitionAnimatedVisual *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAccentTransitionAnimatedVisual::`vftable'{for `IAnimatedVisual'};
  *((_QWORD *)this + 1) = &CAccentTransitionAnimatedVisual::`vftable'{for `CBaseObject'};
  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v4 )
    CBaseObject::Release(v4);
  *((_QWORD *)this + 1) = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAccentTransitionAnimatedVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
