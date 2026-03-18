/*
 * XREFs of ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x18016FF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18016FF28 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::`vector deleting destructor'(
        CHwndRenderTargetDDA *this,
        char a2)
{
  CHwndRenderTargetDDA::~CHwndRenderTargetDDA(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
