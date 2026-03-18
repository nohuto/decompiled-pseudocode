/*
 * XREFs of ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x1801EE250
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800CDE4C (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::`scalar deleting destructor'(
        CHwBitmapColorSource *this,
        char a2)
{
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
