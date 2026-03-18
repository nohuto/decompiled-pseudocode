/*
 * XREFs of ??_ECNaturalAnimationScalarForceAdapater@@UEAAPEAXI@Z @ 0x180193B74
 * Callers:
 *     ??_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z @ 0x1800C6780 (--_ECNaturalAnimationScalarForceAdapater@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
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
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
