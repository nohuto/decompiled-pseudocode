/*
 * XREFs of ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1801885C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CCursorVisual *__fastcall CCursorVisual::`scalar deleting destructor'(CCursorVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
