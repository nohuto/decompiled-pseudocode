/*
 * XREFs of ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x1801E72F0
 * Callers:
 *     ??_ECHDRConversionRenderTarget@@OKA@EAAPEAXI@Z @ 0x1800DE1E0 (--_ECHDRConversionRenderTarget@@OKA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801E729C (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 */

CHDRConversionRenderTarget *__fastcall CHDRConversionRenderTarget::`scalar deleting destructor'(
        CHDRConversionRenderTarget *this,
        char a2)
{
  CHDRConversionRenderTarget::~CHDRConversionRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
