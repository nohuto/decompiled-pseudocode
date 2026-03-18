/*
 * XREFs of ??1CRgnGeometry@@MEAA@XZ @ 0x18002ADC0
 * Callers:
 *     ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002AB80 (--_GCRgnGeometry@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ @ 0x18002AC10 (-UnRegisterNotifiers@CRgnGeometry@@UEAAXXZ.c)
 */

void __fastcall CRgnGeometry::~CRgnGeometry(CRgnGeometry *this)
{
  *(_QWORD *)this = &CRgnGeometry::`vftable';
  CRgnGeometry::UnRegisterNotifiers(this);
  CGeometry::~CGeometry(this);
}
