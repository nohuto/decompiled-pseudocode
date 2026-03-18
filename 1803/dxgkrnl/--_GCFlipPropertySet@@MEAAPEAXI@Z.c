/*
 * XREFs of ??_GCFlipPropertySet@@MEAAPEAXI@Z @ 0x1C004DB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C0050DE0 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 */

CFlipPropertySetBase *__fastcall CFlipPropertySet::`scalar deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  *(_QWORD *)P = &CFlipPropertySet::`vftable';
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
