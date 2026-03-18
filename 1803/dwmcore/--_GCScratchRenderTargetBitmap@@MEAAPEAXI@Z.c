/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180016A50
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OKA@EAAPEAXI@Z @ 0x1800DE4D0 (--_ECScratchRenderTargetBitmap@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x1800169F4 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
