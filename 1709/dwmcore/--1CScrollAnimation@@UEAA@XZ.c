/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x1801886C0
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180188710 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x18018A1E0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x18018947C (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(void **this)
{
  CWeakReferenceBase *v2; // rcx

  *this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop((CScrollAnimation *)this);
  v2 = (CWeakReferenceBase *)this[35];
  if ( v2 )
  {
    CWeakReferenceBase::Release(v2);
    this[35] = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 42);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
