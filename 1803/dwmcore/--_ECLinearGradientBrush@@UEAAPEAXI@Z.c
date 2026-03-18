/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x180011870
 * Callers:
 *     ??_ECLinearGradientBrush@@WEI@EAAPEAXI@Z @ 0x1800DDCC0 (--_ECLinearGradientBrush@@WEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x180012270 (--1CGradientBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
