/*
 * XREFs of ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x1800B7CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x1800B7DD8 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`vector deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrush::~CImageLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
