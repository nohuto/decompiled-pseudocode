/*
 * XREFs of ??1CScrollAnimation@@UEAA@XZ @ 0x1801BDB14
 * Callers:
 *     ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x1801BDB60 (--_ECScrollAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1801BF1B0 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1801BF860 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV?$CWeakReference@VCInteractionTracker@@@@@Z @ 0x1801BDAB4 (--$ReleaseInterface@V-$CWeakReference@VCInteractionTracker@@@@@@YAXAEAPEAV-$CWeakReference@VCInt.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801BE8C0 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CScrollAnimation::~CScrollAnimation(CWeakReferenceBase **this)
{
  *this = (CWeakReferenceBase *)&CScrollAnimation::`vftable';
  CScrollAnimation::Stop((CScrollAnimation *)this);
  ReleaseInterface<CWeakReference<CInteractionTracker>>(this + 37);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 44));
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
