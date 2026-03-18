/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18001E190
 * Callers:
 *     <none>
 * Callees:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18001E458 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::`scalar deleting destructor'(CaptureBitsResponse *this, char a2)
{
  CaptureBitsResponse::~CaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
