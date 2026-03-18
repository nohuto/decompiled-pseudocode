/*
 * XREFs of ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800D9950
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x1800D97EC (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHwBitmapBrush@@UEAA@XZ @ 0x1800D9914 (--1CHwBitmapBrush@@UEAA@XZ.c)
 */

CHwBitmapBrush *__fastcall CHwBitmapBrush::`scalar deleting destructor'(CHwBitmapBrush *this, char a2)
{
  CHwBitmapBrush::~CHwBitmapBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
