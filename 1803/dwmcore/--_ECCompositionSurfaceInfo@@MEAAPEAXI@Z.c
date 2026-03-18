/*
 * XREFs of ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1800805C0
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180081074 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCompositionSurfaceInfo *__fastcall CCompositionSurfaceInfo::`vector deleting destructor'(
        CCompositionSurfaceInfo *this,
        char a2)
{
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
