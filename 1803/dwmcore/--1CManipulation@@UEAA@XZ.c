/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x180198F84
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x180199020 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AC98 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 *     ?_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AE14 (-_UpdateEdgyInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  bool v1; // zf
  CWeakReferenceBase *v3; // rcx

  v1 = *((_QWORD *)this + 142) == 0LL;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  if ( !v1 )
  {
    if ( *((_BYTE *)this + 568) )
      CManipulation::_UpdateEdgyExperienceInput(this, 3LL);
    else
      CManipulation::_UpdateEdgyInput(this, 1LL);
    v3 = (CWeakReferenceBase *)*((_QWORD *)this + 142);
    if ( v3 )
    {
      CWeakReferenceBase::Release(v3);
      *((_QWORD *)this + 142) = 0LL;
    }
  }
  `vector destructor iterator'(
    (char *)this + 480,
    8LL,
    5LL,
    (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
