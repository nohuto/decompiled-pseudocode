/*
 * XREFs of ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x180183E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18002A5B8 (--1CCompositionLight@@UEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

struct CResource **__fastcall CCompositionDistantLight::`scalar deleting destructor'(struct CResource **this, char a2)
{
  *this = (struct CResource *)&CCompositionDistantLight::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
  this[20] = 0LL;
  CCompositionLight::~CCompositionLight((CCompositionLight *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly((dataproviderBamoConnection *)this);
    else
      operator delete(this);
  }
  return this;
}
