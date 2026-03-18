/*
 * XREFs of ??_GCD2DBitmapCacheSourceRealization@@UEAAPEAXI@Z @ 0x1800B7CA0
 * Callers:
 *     ??_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z @ 0x1800DE930 (--_ECD2DBitmapCacheSourceRealization@@WFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180049740 (--1CBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CD2DBitmapCacheSourceRealization *__fastcall CD2DBitmapCacheSourceRealization::`scalar deleting destructor'(
        CD2DBitmapCacheSourceRealization *this,
        char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
