/*
 * XREFs of ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x18019B290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x18019B268 (--1CMeshGeometry2D@@MEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2D::~CMeshGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
