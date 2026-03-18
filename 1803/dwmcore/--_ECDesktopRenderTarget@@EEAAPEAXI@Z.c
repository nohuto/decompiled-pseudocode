/*
 * XREFs of ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180156F60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::`vector deleting destructor'(
        CDesktopRenderTarget *this,
        char a2)
{
  CDesktopRenderTarget::~CDesktopRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
