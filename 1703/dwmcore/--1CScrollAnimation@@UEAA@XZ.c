/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x180181314
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180181360 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180183500 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801823DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(void **this)
{
  struct _RTL_GENERIC_TABLE **v2; // rcx

  *this = &CScrollAnimation::`vftable';
  CScrollAnimation::Stop((CScrollAnimation *)this);
  v2 = (struct _RTL_GENERIC_TABLE **)this[29];
  if ( v2 )
  {
    CWeakReferenceBase::Release(v2);
    this[29] = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 35);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
