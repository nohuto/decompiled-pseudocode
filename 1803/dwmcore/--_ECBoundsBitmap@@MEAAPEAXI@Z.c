/*
 * XREFs of ??_ECBoundsBitmap@@MEAAPEAXI@Z @ 0x1801BD0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CBoundsBitmap *__fastcall CBoundsBitmap::`vector deleting destructor'(CBoundsBitmap *this, char a2)
{
  *((_QWORD *)this + 2) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
