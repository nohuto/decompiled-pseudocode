/*
 * XREFs of ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x180089FEC
 * Callers:
 *     ??_ECRenderTargetImageSource@@O7EAAPEAXI@Z @ 0x1800DD7E0 (--_ECRenderTargetImageSource@@O7EAAPEAXI@Z.c)
 *     ??_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z @ 0x1800DD7F0 (--_ECRenderTargetImageSource@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180089F9C (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::`scalar deleting destructor'(
        CRenderTargetImageSource *this,
        char a2)
{
  CRenderTargetImageSource::~CRenderTargetImageSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
