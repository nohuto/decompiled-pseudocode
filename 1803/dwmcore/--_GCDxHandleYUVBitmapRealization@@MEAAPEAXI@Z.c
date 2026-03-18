/*
 * XREFs of ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x180215320
 * Callers:
 *     ??_ECDxHandleYUVBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800DE8F0 (--_ECDxHandleYUVBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x18021526C (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::`scalar deleting destructor'(
        CDxHandleYUVBitmapRealization *this,
        char a2)
{
  CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
