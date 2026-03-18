/*
 * XREFs of ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180095330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CEffectBrush@@MEAA@XZ @ 0x1800958B8 (--1CEffectBrush@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CEffectBrush *__fastcall CEffectBrush::`scalar deleting destructor'(CEffectBrush *this, char a2)
{
  CEffectBrush::~CEffectBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
