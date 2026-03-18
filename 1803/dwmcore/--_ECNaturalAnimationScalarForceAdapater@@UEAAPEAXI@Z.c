/*
 * XREFs of ??_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z @ 0x1801CC9C0
 * Callers:
 *     ??_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z @ 0x1800DDDB0 (--_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

CNaturalAnimationScalarForceAdapater *__fastcall CNaturalAnimationScalarForceAdapater::`vector deleting destructor'(
        CNaturalAnimationScalarForceAdapater *this,
        char a2)
{
  CWeakReferenceBase *v4; // rcx

  *(_QWORD *)this = &CNaturalAnimationScalarForceAdapater::`vftable'{for `IScalarForce'};
  *((_QWORD *)this + 1) = &CNaturalAnimationScalarForceAdapater::`vftable'{for `CMILRefCountBase'};
  v4 = (CWeakReferenceBase *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    CWeakReferenceBase::Release(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
