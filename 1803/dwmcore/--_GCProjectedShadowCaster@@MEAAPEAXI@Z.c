/*
 * XREFs of ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x18019FA80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x18019F964 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 */

struct CResource **__fastcall CProjectedShadowCaster::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CProjectedShadowCaster::~CProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly((dataproviderBamoConnection *)this);
    else
      operator delete(this);
  }
  return this;
}
