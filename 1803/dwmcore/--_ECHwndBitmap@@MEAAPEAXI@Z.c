/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800B5D0C
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x1800DDC20 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1800B5C90 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
