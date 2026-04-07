/*
 * XREFs of ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x180095E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CAppArrangementImmediate *__fastcall CAppArrangementImmediate::`vector deleting destructor'(
        CAppArrangementImmediate *this,
        char a2)
{
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CAppArrangementImmediate::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  v4 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v4 )
    CBaseObject::Release(v4);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAppArrangementImmediate *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
