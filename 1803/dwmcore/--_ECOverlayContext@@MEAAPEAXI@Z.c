/*
 * XREFs of ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x1800DA370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800DA3AC (--1COverlayContext@@MEAA@XZ.c)
 */

COverlayContext *__fastcall COverlayContext::`vector deleting destructor'(COverlayContext *this, char a2)
{
  COverlayContext::~COverlayContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
