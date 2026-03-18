/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x1801702B8
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x180170340 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z @ 0x180171E28 (-_UpdateEdgyInputConfiguration@CManipulation@@AEAAJW4Enum@EdgyInputSourceUpdateType@@@Z.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  bool v1; // zf
  CWeakReferenceBase *v3; // rcx

  v1 = *((_QWORD *)this + 70) == 0LL;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  if ( !v1 )
  {
    CManipulation::_UpdateEdgyInputConfiguration(this, 1LL);
    v3 = (CWeakReferenceBase *)*((_QWORD *)this + 70);
    if ( v3 )
    {
      CWeakReferenceBase::Release(v3);
      *((_QWORD *)this + 70) = 0LL;
    }
  }
  `vector destructor iterator'(
    (char *)this + 432,
    8LL,
    5LL,
    (void (__fastcall *)(CDrawListBitmap *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
