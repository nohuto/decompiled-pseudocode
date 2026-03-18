/*
 * XREFs of ??1CManipulation@@UEAA@XZ @ 0x180167AD8
 * Callers:
 *     ??_ECManipulation@@UEAAPEAXI@Z @ 0x180167B70 (--_ECManipulation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800B2D0C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CManipulation::~CManipulation(CManipulation *this)
{
  CResource *v1; // rbx

  v1 = (CManipulation *)((char *)this + 8);
  *(_QWORD *)this = &CManipulation::`vftable'{for `IManipulationResource'};
  *((_QWORD *)this + 1) = &CManipulation::`vftable'{for `CResource'};
  `vector destructor iterator'(
    (char *)this + 424,
    8LL,
    5LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  CResource::~CResource(v1);
}
