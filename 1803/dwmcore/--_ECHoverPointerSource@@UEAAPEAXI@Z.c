/*
 * XREFs of ??_ECHoverPointerSource@@UEAAPEAXI@Z @ 0x1800B8CF4
 * Callers:
 *     ??_ECHoverPointerSource@@W7EAAPEAXI@Z @ 0x1800DDD40 (--_ECHoverPointerSource@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CHoverPointerSource *__fastcall CHoverPointerSource::`vector deleting destructor'(CHoverPointerSource *this, char a2)
{
  CResource::~CResource((CHoverPointerSource *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
