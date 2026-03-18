/*
 * XREFs of ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x18016ED70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x1800B8284 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::`scalar deleting destructor'(CTileLegacyMilBrush *this, char a2)
{
  CTileLegacyMilBrush::~CTileLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
