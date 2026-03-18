/*
 * XREFs of ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x180184290
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x18002A5B8 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCompositionLight *__fastcall CCompositionLight::`scalar deleting destructor'(CCompositionLight *this, char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
