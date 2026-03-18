/*
 * XREFs of ??_ECSpatialVisual@@MEAAPEAXI@Z @ 0x1801A4020
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CSpatialVisual@@MEAA@XZ @ 0x1801A3FD8 (--1CSpatialVisual@@MEAA@XZ.c)
 */

CSpatialVisual *__fastcall CSpatialVisual::`vector deleting destructor'(CSpatialVisual *this, char a2)
{
  CSpatialVisual::~CSpatialVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
