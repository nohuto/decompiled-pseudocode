/*
 * XREFs of ??_ECDeviceTextureImageSource@@MEAAPEAXI@Z @ 0x180216590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDeviceTextureImageSource@@MEAA@XZ @ 0x180216558 (--1CDeviceTextureImageSource@@MEAA@XZ.c)
 */

CDeviceTextureImageSource *__fastcall CDeviceTextureImageSource::`vector deleting destructor'(
        CDeviceTextureImageSource *this,
        char a2)
{
  CDeviceTextureImageSource::~CDeviceTextureImageSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
