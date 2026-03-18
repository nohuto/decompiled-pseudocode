/*
 * XREFs of ??_GCHolographicExclusiveView@@EEAAPEAXI@Z @ 0x1801F9C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHolographicExclusiveView@@EEAA@XZ @ 0x1801F9BE8 (--1CHolographicExclusiveView@@EEAA@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::`scalar deleting destructor'(
        CHolographicExclusiveView *this,
        char a2)
{
  CHolographicExclusiveView::~CHolographicExclusiveView(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
