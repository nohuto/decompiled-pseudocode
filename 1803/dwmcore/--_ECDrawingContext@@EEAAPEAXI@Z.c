/*
 * XREFs of ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x18006E794
 * Callers:
 *     ??_ECDrawingContext@@GBA@EAAPEAXI@Z @ 0x1800DD590 (--_ECDrawingContext@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
