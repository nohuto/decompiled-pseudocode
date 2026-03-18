/*
 * XREFs of ??_ECContentResource@@UEAAPEAXI@Z @ 0x1C00521F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C0051E34 (--1CFlipResource@@MEAA@XZ.c)
 */

CFlipResource *__fastcall CContentResource::`vector deleting destructor'(CFlipResource *P, char a2)
{
  *(_QWORD *)P = &CContentResource::`vftable';
  CFlipResource::~CFlipResource(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
