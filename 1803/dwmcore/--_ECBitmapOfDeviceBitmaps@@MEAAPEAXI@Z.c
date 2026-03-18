/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x1800CC3B0
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@OOA@EAAPEAXI@Z @ 0x1800DE480 (--_ECBitmapOfDeviceBitmaps@@OOA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800CC61C (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CBitmapOfDeviceBitmaps *__fastcall CBitmapOfDeviceBitmaps::`vector deleting destructor'(
        CBitmapOfDeviceBitmaps *this,
        char a2)
{
  CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
