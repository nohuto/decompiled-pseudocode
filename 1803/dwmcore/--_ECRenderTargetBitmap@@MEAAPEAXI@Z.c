/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x18008A0C0
 * Callers:
 *     ??_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z @ 0x1800DD7D0 (--_ECRenderTargetBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18008A4D8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
