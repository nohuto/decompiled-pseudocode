/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180047320
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x180047A94 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
