/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x1800B4E54
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800DDB20 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 *     ??_ECCachedVisualImage@@OEI@EAAPEAXI@Z @ 0x1800DDB30 (--_ECCachedVisualImage@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800B4D7C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
